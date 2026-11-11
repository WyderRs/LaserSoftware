#include "mainwindow.h"
#include <QApplication>
#include "config.h"

#include "comportworker.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /* Main thread */
    MainWindow w;
    w.show();
    /* Comport thread */
    auto *comThread = new QThread(&a);
    comThread->setObjectName("comport");

    auto *comWorker = new ComPortWorker;
    comWorker->moveToThread(comThread);

    QObject::connect(comThread, &QThread::finished,         comWorker, &QObject::deleteLater);
    // GUI -> worker (всегда Queued, т.к. в разных потоках)
    QObject::connect(&w, &MainWindow::requestSearch,        comWorker, &ComPortWorker::onSearch);
    QObject::connect(&w, &MainWindow::requestOpen,          comWorker, &ComPortWorker::onOpen);
    QObject::connect(&w, &MainWindow::requestClose,         comWorker, &ComPortWorker::onClose);
    QObject::connect(&w, &MainWindow::requestWrite,         comWorker, &ComPortWorker::onWrite);
    QObject::connect(&w, &MainWindow::requestRead,          comWorker, &ComPortWorker::onReadyRead);
    QObject::connect(&w, &MainWindow::requestSendProcessCode,   comWorker, &ComPortWorker::onSendProcessCode);

    // worker -> GUI
    QObject::connect(comWorker, &ComPortWorker::searchResult, &w, &MainWindow::onSearchResult);
    QObject::connect(comWorker, &ComPortWorker::openResult,   &w, &MainWindow::onOpenResult);
    QObject::connect(comWorker, &ComPortWorker::closeResult,  &w, &MainWindow::onCloseResult);
    QObject::connect(comWorker, &ComPortWorker::writeResult,  &w, &MainWindow::onWriteResult);
    QObject::connect(comWorker, &ComPortWorker::dataReceived, &w, &MainWindow::onDataReceived);
    QObject::connect(comWorker, &ComPortWorker::codeFinished, &w, &MainWindow::onCodeFinished);

    comThread->start();

    const int rc = a.exec();

    comThread->quit();
    comThread->wait(2000);

    return rc;
}

