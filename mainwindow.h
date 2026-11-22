#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>





QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
    // GUI -> worker
    void requestSearch();
    void requestOpen(QString portName);
    void requestClose();
    void requestWrite(QByteArray data);
    void requestRead();
    void requestSendProcessCode(const QString &filePath);

public slots:
    // результаты от worker
    void onSearchResult(const QStringList &ports);
    void onOpenResult(bool success, const QString &error);
    void onCloseResult();
    void onWriteResult(bool success, qint64 n, const QString &error);
    void onDataReceived(const QByteArray &data);
    void onCodeFinished(bool success, const QString &error);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_button_search_clicked();

    void on_button_connect_clicked();

    void on_button_url_clicked();

    void on_button_send_code_clicked();

    void on_pushButton_XP_clicked();

    void on_pushButton_XM_clicked();

    void on_pushButton_YP_clicked();

    void on_pushButton_YM_clicked();

    void on_pushButton_ZP_clicked();

    void on_pushButton_ZM_clicked();

    void on_pushButton_GoHome_clicked();

    void on_pushButton_GoOrigin_clicked();

    void on_pushButton_SetOrigin_clicked();

    void on_pushButton_SelectOrigin_clicked();

    void on_pushButton_SelectAbsolute_clicked();

    void on_pushButton_SendGCode_clicked();

private:
    Ui::MainWindow *ui;
    bool m_connected = false;
};
#endif // MAINWINDOW_H
