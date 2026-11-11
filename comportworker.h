#ifndef COMPORTWORKER_H
#define COMPORTWORKER_H

#include <QObject>
#include <QTimer>
#include <QThread>
#include "qserialport.h"
#include <QSerialPortInfo>




class ComPortWorker : public QObject
{
    Q_OBJECT
public:
    explicit ComPortWorker(QObject *parent = nullptr);
    ~ComPortWorker() override;
public slots:
    void init();

    void onSearch();
    void onWrite(const QByteArray &data);
    void onReadyRead();
    void onOpen(const QString &portName);
    void onClose();
    void onSerialError(QSerialPort::SerialPortError err);
    void onSendProcessCode(const QString &filePath);

signals:
    void searchResult(const QStringList &ports);
    void openResult(bool success, const QString &error);
    void closeResult();
    void writeResult(bool success, qint64 bytesWritten, const QString &error);
    void dataReceived(const QByteArray &data);
    void codeFinished(bool success, const QString &error);
private:
    void PortCloseInternal();


    QSerialPort *m_port = nullptr;
    QTimer *m_pollTimer = nullptr;
};

#endif // COMPORTWORKER_H
