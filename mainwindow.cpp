#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog.h"
#include <QDebug>
#include <string>
#include <QMessageBox>

#include "config.h"

/******************************************/
typedef struct COMPort_config_t {
    QList<QString>  comports;
    bool            isConnected;
    QString         comport_current;
} COMPort_config_t;
COMPort_config_t COMPort_config;
/******************************************/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->plainTextEdit_log->setReadOnly(true);                     // только чтение
    ui->plainTextEdit_log->setMaximumBlockCount(10000);           // ограничить память
    // моноширинный шрифт
    QFont mono("Consolas", 9);
    mono.setStyleHint(QFont::Monospace);
    ui->plainTextEdit_log->setFont(mono);

}
MainWindow::~MainWindow() {
    delete ui;
}

/************************************************************************************/
void MainWindow::onSearchResult(const QStringList &ports) {
    ui->comboBox_ports->clear();
    ui->comboBox_ports->addItems(ports);
    ui->button_connect->setText("Connect");
    ui->button_connect->setDown(0);
}

void MainWindow::onOpenResult(bool success, const QString &error) {
    m_connected = success;
    ui->button_connect->setText(success ? "Disconnect" : "Connect");
    /* Менять цвет */
    if (!success) {
        QMessageBox::warning(this, "Open port", error);
        ui->button_connect->setDown(0);
    }
    else {
        qInfo() << "Port opened";
        ui->button_connect->setDown(1);
    }
}


void MainWindow::onCloseResult()
{
    m_connected = false;
    ui->button_connect->setText("Connect");
    ui->button_connect->setDown(0);
    qInfo() << "Port closed";
}

void MainWindow::onWriteResult(bool success, qint64 n, const QString &error)
{
    if (!success)
        qWarning() << "Write failed:" << error << "written:" << n;
}

void MainWindow::onDataReceived(const QByteArray &data)
{
    // сюда приходят входящие байты — выводим в консоль
    // ui->plainTextEdit_log->appendPlainText(QString::fromLatin1(data));
    ui->plainTextEdit_log->appendPlainText(data);
}

void MainWindow::onCodeFinished(bool success, const QString &error)
{
    if (success)
        qInfo() << "G-code sent";
    else
        QMessageBox::warning(this, "G-code", error);
}
/************************************************************************************/
/* button_search_code */
void MainWindow::on_button_search_clicked()
{
    emit requestSearch();
    ui->button_connect->setDown(0);
}
/* button_connect_code */
void MainWindow::on_button_connect_clicked()
{
    if (m_connected) emit requestClose();
    else emit requestOpen(ui->comboBox_ports->currentText());
}
/* button_url_code */
void MainWindow::on_button_url_clicked()
{
    QString file = QFileDialog::getOpenFileName(
        this,                                        // parent
        "Select file",                               // caption
        QStringLiteral("."),                         // dir
        tr("nc (*.nc);;All Files (*)"),              // filte
        nullptr,                                     // selectedFilter
        QFileDialog::DontResolveSymlinks             // options
        );
    ui->lineEdit_file_URL->setText(file);
}
/* button_send_code */
void MainWindow::on_button_send_code_clicked() {
    emit requestSendProcessCode(ui->lineEdit_file_URL->text());
}


    // if (!COMPort_config.isConnected && (ui->comboBox->currentText() != "Select comport...")) {
    //     COMPort_config.comport_current = ui->comboBox->currentText();
    //     emit ComPortOpen_signal(ui->comboBox->currentText(), &COMPort_config.isConnected);
    // }
    // else emit ComPortClose_signal(&COMPort_config.isConnected);

    // if (COMPort_config.isConnected) {
    //     ui->pushButton_3->setText("Disconnect");
    // } else {
    //     ui->pushButton_3->setText("Connect");
    // }



    // COMPort_config.isConnected = false;
    // emit ComPortSearchDevice_signal(&COMPort_config.comports);

    // ui->comboBox->clear();
    // qInfo() << COMPort_config.comports;
    // ui->comboBox->addItems(COMPort_config.comports);
    // COMPort_config.comports.clear();


/* Go Home */
void MainWindow::on_pushButton_12_clicked() {
    QByteArray home_cmd;
    home_cmd.append(3);
    home_cmd.append("G28");
    home_cmd.append(END_COMMAND);
    emit requestWrite(home_cmd);
}
/* Go Origin */
void MainWindow::on_pushButton_13_clicked() {
    QByteArray home_cmd;
    home_cmd.append(3);
    home_cmd.append("G0X0Y0Z0");
    home_cmd.append(END_COMMAND);
    emit requestWrite(home_cmd);
}
/* Set Origin */
void MainWindow::on_pushButton_15_clicked()
{

}
/* Move -Y */
void MainWindow::on_pushButton_8_clicked()
{
    QByteArray home_cmd;
    bool flag = false;
    home_cmd.append(3);
    home_cmd.append("G0Y-");
    double step = ui->lineEdit_step->text().trimmed().replace(',', '.').toDouble(&flag);

    home_cmd.append(QByteArray::number(step, 'f', 4));
    home_cmd.append(END_COMMAND);
    emit requestWrite(home_cmd);
}
/* Move +Y */
void MainWindow::on_pushButton_10_clicked()
{
    QByteArray home_cmd;
    bool flag = false;
    home_cmd.append(3);
    home_cmd.append("G0Y");
    double step = ui->lineEdit_step->text().trimmed().replace(',', '.').toDouble(&flag);

    home_cmd.append(QByteArray::number(step, 'f', 4));
    home_cmd.append(END_COMMAND);
    emit requestWrite(home_cmd);
}
/* Move +X */
void MainWindow::on_pushButton_7_clicked()
{
    QByteArray home_cmd;
    bool flag = false;
    home_cmd.append(3);
    home_cmd.append("G0X");
    double step = ui->lineEdit_step->text().trimmed().replace(',', '.').toDouble(&flag);

    home_cmd.append(QByteArray::number(step, 'f', 4));
    home_cmd.append(END_COMMAND);
    emit requestWrite(home_cmd);
}
/* Move -X */
void MainWindow::on_pushButton_9_clicked()
{
    QByteArray home_cmd;
    bool flag = false;
    home_cmd.append(3);
    home_cmd.append("G0X-");
    double step = ui->lineEdit_step->text().trimmed().replace(',', '.').toDouble(&flag);

    home_cmd.append(QByteArray::number(step, 'f', 4));
    home_cmd.append(END_COMMAND);
    emit requestWrite(home_cmd);
}



void MainWindow::on_pushButton_clicked()
{
    std::string fileF = ui->lineEdit_file_URL->text().toStdString();
    // emit ComPortProcessCode_signal(fileF);
}



