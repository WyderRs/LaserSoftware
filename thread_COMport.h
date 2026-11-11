#ifndef THREAD_COMPORT_H
#define THREAD_COMPORT_H

#include <QThread>
#include "qserialport.h"
#include <QSerialPortInfo>


class thread_COMport : public QThread
{
    Q_OBJECT
public:
    explicit thread_COMport(QString threadName);
    ~thread_COMport();

    void run();
    void ComPortSearch(QList<QString> *data);
    void ComPortOpen(QString portName, bool *IsConnected);
    void ComPortClose(bool *IsConnected);
    void ComPortRead();

    QString ComPortWrite(uint8_t* data/*std::vector<uint8_t> data*/, uint32_t count);

    // void ComPortProcessCode(QString &filePath);
private:
    // QByteArray  data;
    QString     name;   // Имя потока
    QSerialPort *serialPort = nullptr;
};
#endif // THREAD_COMPORT_H
