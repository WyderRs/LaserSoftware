#include "thread_COMport.h"
#include <QDebug>
#include <QTimer>
#include <QDateTime>
#include <fstream>

#include <iostream>
#include "config.h"

bool FLAG_IS_CONNECTED_PORT;

struct comport {
    std::string file_url;
    bool flag_en_write;
    bool flag_en_search;
    QList<QString> *comports;
} comport;


thread_COMport::thread_COMport(QString threadName) :
    name(threadName)
{

}
thread_COMport::~thread_COMport() {
    quit();
}

void thread_COMport::ComPortSearch(QList<QString> *data) {

    // comport.comports = data;
    if (serialPort) {
        if (serialPort->isOpen())
            serialPort->close();
        delete serialPort;
        serialPort = nullptr;
    }
    data->append("Select comport...");
    const auto ports = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : ports) {
        data->append(info.portName());
    }
    return;
}

void thread_COMport::ComPortOpen(QString portName, bool *IsConnected) {

    if (serialPort) {
        if (serialPort->isOpen())
        serialPort->close();
        delete serialPort;
        serialPort = nullptr;
    }

    serialPort = new QSerialPort(portName);

    serialPort->setBaudRate(115200);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    if (!serialPort->open(QIODevice::ReadWrite)) {
        delete serialPort;
        serialPort = nullptr;
        *IsConnected = false;
        FLAG_IS_CONNECTED_PORT = false;
    }
    *IsConnected = true;
    FLAG_IS_CONNECTED_PORT = true;

}
void thread_COMport::ComPortClose(bool *IsConnected)
{
    if (serialPort && serialPort->isOpen()) {
        serialPort->close();
        *IsConnected = false;
        FLAG_IS_CONNECTED_PORT = false;
    }
}
QString thread_COMport::ComPortWrite(uint8_t* data/*std::vector<uint8_t> data*/, uint32_t count)
{
    if (!serialPort || !serialPort->isOpen()) {
        return "";
    }
    qint64 bytesWritten = serialPort->write((char*)data, count/*data.size()*/);
    if (bytesWritten == -1) {
    } else if (bytesWritten != count) {

    }
    if (!serialPort->waitForBytesWritten(1000)) {
    }

    return "OK";
}
void thread_COMport::ComPortRead()
{
    QByteArray d = serialPort->readAll();
    if (d != "") {
        QString ds = d;
        qDebug() << d << ds.simplified();
    }
}

void thread_COMport::run()
{

    while(1) {
        if (comport.flag_en_search) {

        }
        if (comport.flag_en_write) {
            std::fstream    gfile;
            std::string     line;

            gfile.open(comport.file_url);

            if (gfile.is_open())
            {
                uint8_t str_g[100] = {0, };
                uint8_t temp;

                // ComPortWrite((uint8_t*)&temp, 1);

                std::cout << "=====================================" << std::endl;
                while (std::getline(gfile, line)) {
                    memset(str_g, '\0', sizeof(str_g));
                    bool flag_missLine = true;
                    uint16_t j = 0;
                    uint16_t width_line = 1;
                    for (uint32_t i = 0; i < line.size(); i++) {
                        if (line[i] == '(') break;               // delete comment lines
                        if (line[i] == ' ') {                    // delete gaps
                            j++;
                            continue;
                        }
                        else flag_missLine = false;
                        str_g[i + 1 - j] = line[i];
                        width_line++;
                    }
                    if (!flag_missLine) {
                        str_g[0] = width_line - 1;
                        std::cout << &str_g[1] << '\t' << width_line << std::endl;
                        ComPortWrite(str_g, width_line);
                    }
                }
                temp = END_COMMAND;
                ComPortWrite((uint8_t*)&temp, 1);



            }
            gfile.close();
            comport.flag_en_write = false;
        }

        msleep(1);  // чтобы не напрягать ядро
    }
}

// void thread_COMport::ComPortProcessCode(std::string file_url) {

//     comport.file_url        = file_url;
//     comport.flag_en_write   = true;
// }

