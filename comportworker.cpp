#include "comportworker.h"
#include <QFile>
#include <iostream>

#include "config.h"

ComPortWorker::ComPortWorker(QObject *parent)
    : QObject(parent)
{

}
ComPortWorker::~ComPortWorker()
{

}
void ComPortWorker::init()
{ }
// ---------- ПОИСК ----------
void ComPortWorker::onSearch() {
    QStringList ports;
    PortCloseInternal();
    ports << "Select comport...";
    for (const auto &info : QSerialPortInfo::availablePorts())
        ports << info.portName();
    emit searchResult(ports);
}
// ---------- ЗАКРЫТИЕ ВНУТРЕНЕЕ ----------
void ComPortWorker::PortCloseInternal() {
    if (m_port) {
        if (m_port->isOpen())
            m_port->close();
        delete m_port;
        m_port = nullptr;
    }
}
// ---------- ОТКРЫТИЕ ----------
void ComPortWorker::onOpen(const QString &portName) {

    PortCloseInternal();

    m_port = new QSerialPort(this);       // parent = this → в этом же потоке
    m_port->setPortName(portName);
    m_port->setBaudRate(115200);
    m_port->setDataBits(QSerialPort::Data8);
    m_port->setParity(QSerialPort::NoParity);
    m_port->setStopBits(QSerialPort::OneStop);
    m_port->setFlowControl(QSerialPort::NoFlowControl);

    connect(m_port, &QSerialPort::readyRead, this, &ComPortWorker::onReadyRead);
    connect(m_port, &QSerialPort::errorOccurred, this, &ComPortWorker::onSerialError);

    if (!m_port->open(QIODevice::ReadWrite)) {
        const QString err = m_port->errorString();
        PortCloseInternal();
        emit openResult(false, err);
        return;
    }
    emit openResult(true, QString());
}
void ComPortWorker::onClose() {
    PortCloseInternal();
    emit closeResult();
}
// ---------- ЗАПИСЬ ----------
void ComPortWorker::onWrite(const QByteArray &data) {
    if (!m_port || !m_port->isOpen()) {
        emit writeResult(false, 0, QStringLiteral("Port is not open"));
        return;
    }

    const qint64 n = m_port->write(data);
    if (n < 0) {
        emit writeResult(false, 0, m_port->errorString());
    } else if (n != data.size()) {
        emit writeResult(false, n, QStringLiteral("Partial write"));
    } else {
        emit writeResult(true, n, QString());
    }
}
// ---------- ЧТЕНИЕ (по сигналу readyRead) ----------
void ComPortWorker::onReadyRead() {
    if (!m_port) return;
    const QByteArray d = m_port->readAll();
    if (!d.isEmpty())
        emit dataReceived(d);
}
// ---------- ОТОБРАЖЕНИЕ ОШИБКИ  ----------
void ComPortWorker::onSerialError(QSerialPort::SerialPortError err) {
    if (err == QSerialPort::ResourceError) {
        // порт «отвалился» — закрываем и сообщаем GUI
        const QString msg = m_port ? m_port->errorString() : QString();
        PortCloseInternal();
        emit closeResult();
        emit openResult(false, msg);
    }
}
// ---------- ОТПРАВКА КОДА ----------
void ComPortWorker::onSendProcessCode(const QString &filePath) {
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly))
    {
        emit codeFinished(false, "File not open");
        return;
    }
    while (1) {
        QByteArray line = file.readLine();

        if (line.isEmpty()) break;

        QByteArray g_code;
        g_code.resize(line.size() + 1);

        bool flag_missLine = true;
        uint16_t j = 0;
        uint16_t width_line = 1;

        for (uint32_t i = 0; i < (uint32_t)line.length(); i++) {
            if ((line[i] == '(') || (line[i] == '\r') || (line[i] == '\n')) break;               // delete comment lines
            if (line[i] == ' ') {                    // delete gaps
                j++;
                continue;
            }
            else {
                flag_missLine = false;
            }
            g_code[i + 1 - j] = line[i];
            width_line++;
        }
        if (!flag_missLine) {
            g_code[0] = width_line - 1;

            g_code.resize(width_line);
            std::cout << &g_code.toStdString()[1] << '\t' << width_line-1 << std::endl;

            onWrite(g_code);
        }
    }
    QByteArray temp;
    temp.append(0xEF);
    onWrite(temp);
}
