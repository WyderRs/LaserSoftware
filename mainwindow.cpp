#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog.h"
#include <QDebug>
#include <string>
#include <QMessageBox>

#include "config.h"

enum last_command {
    none = 0,
    write,
} last_command;


struct Coordinates {
    float machine_x;
    float machine_y;
    float machine_z;

    float origin_x;
    float origin_y;
    float origin_z;

    float work_x;
    float work_y;
    float work_z;


} Coordinates;

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
    if (last_command == write) {

        float x, y, z;
        memcpy(&x, data.constData() + 0, 4);
        memcpy(&y, data.constData() + 4, 4);
        memcpy(&z, data.constData() + 8, 4);

        Coordinates.work_x = x;
        Coordinates.work_y = y;
        Coordinates.work_z = z;

        ui->lineEdit_WP_X->setText(QString::number(x, 'f', 3));
        ui->lineEdit_WP_Y->setText(QString::number(y, 'f', 3));
        ui->lineEdit_WP_Z->setText(QString::number(z, 'f', 3));

        last_command = none;
    }

    ui->plainTextEdit_log->appendPlainText(data);
    qInfo() << data << '\n';
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
void MainWindow::on_pushButton_GoHome_clicked() {
    QByteArray home_cmd;
    home_cmd.append(3);
    home_cmd.append("G28");
    home_cmd.append(END_COMMAND);
    emit requestWrite(home_cmd);

    Coordinates.work_x = 0;
    Coordinates.work_y = 0;
    Coordinates.work_z = 0;

}
/* Go Origin */
void MainWindow::on_pushButton_GoOrigin_clicked() {
    QByteArray origin_cmd;
    origin_cmd.append(8);
    origin_cmd.append("G0X0Y0Z0");
    origin_cmd.append(END_COMMAND);
    emit requestWrite(origin_cmd);
}
/* Set Origin */
void MainWindow::on_pushButton_SetOrigin_clicked()
{
    QByteArray set_origin_cmd;
    set_origin_cmd.append(3);
    set_origin_cmd.append("G92");
    set_origin_cmd.append(END_COMMAND);
    emit requestWrite(set_origin_cmd);

    Coordinates.origin_x = Coordinates.work_x;
    Coordinates.origin_y = Coordinates.work_y;
    Coordinates.origin_z = Coordinates.work_z;

    ui->lineEdit_WP_X->setText(QString::number(0));
    ui->lineEdit_WP_Y->setText(QString::number(0));
    ui->lineEdit_WP_Z->setText(QString::number(0));

    ui->lineEdit_OP_X->setText(QString::number(Coordinates.origin_x));
    ui->lineEdit_OP_Y->setText(QString::number(Coordinates.origin_y));
    ui->lineEdit_OP_Z->setText(QString::number(Coordinates.origin_z));
}
/* Select origin */
void MainWindow::on_pushButton_SelectOrigin_clicked()
{
    QByteArray origin_cmd;
    origin_cmd.append(3);
    origin_cmd.append("G91");
    origin_cmd.append(END_COMMAND);
    emit requestWrite(origin_cmd);

    ui->lineEdit_WP_X->setText(QString::number(Coordinates.work_x - Coordinates.origin_x));
    ui->lineEdit_WP_Y->setText(QString::number(Coordinates.work_y - Coordinates.origin_y));
    ui->lineEdit_WP_Z->setText(QString::number(Coordinates.work_z - Coordinates.origin_z));

}
/* Select absolute */
void MainWindow::on_pushButton_SelectAbsolute_clicked() {
    QByteArray absolute_cmd;
    absolute_cmd.append(3);
    absolute_cmd.append("G90");
    absolute_cmd.append(END_COMMAND);
    emit requestWrite(absolute_cmd);

    ui->lineEdit_WP_X->setText(QString::number(Coordinates.work_x + Coordinates.origin_x));
    ui->lineEdit_WP_Y->setText(QString::number(Coordinates.work_y + Coordinates.origin_y));
    ui->lineEdit_WP_Z->setText(QString::number(Coordinates.work_z + Coordinates.origin_z));
}
/* Move +Y */
void MainWindow::on_pushButton_YP_clicked()
{
    QByteArray move_cmd;
    bool flag = false;
    move_cmd.append('\0');
    move_cmd.append("G1Y");
    double step = ui->lineEdit_WP_Y->text().trimmed().toDouble() + ui->lineEdit_step->text().trimmed().replace(',', '.').toDouble(&flag);

    move_cmd.append(QByteArray::number(step, 'f', 4));
    move_cmd.append(END_COMMAND);
    move_cmd[0] = move_cmd.size() - 2;
    last_command = write;
    emit requestWrite(move_cmd);
}
/* Move -Y */
void MainWindow::on_pushButton_YM_clicked()
{
    QByteArray move_cmd;
    bool flag = false;
    move_cmd.append('\0');
    move_cmd.append("G1Y");
    double step = ui->lineEdit_WP_Y->text().trimmed().toDouble() - ui->lineEdit_step->text().trimmed().replace(',', '.').toDouble(&flag);

    move_cmd.append(QByteArray::number(step, 'f', 4));
    move_cmd.append(END_COMMAND);
    move_cmd[0] = move_cmd.size() - 2;
    last_command = write;
    emit requestWrite(move_cmd);
}
/* Move +X */
void MainWindow::on_pushButton_XP_clicked()
{
    QByteArray move_cmd;
    bool flag = false;
    move_cmd.append('\0');
    move_cmd.append("G1X");
    double step = ui->lineEdit_WP_X->text().trimmed().toDouble() + ui->lineEdit_step->text().trimmed().replace(',', '.').toDouble(&flag);

    move_cmd.append(QByteArray::number(step, 'f', 4));
    move_cmd.append(END_COMMAND);
    move_cmd[0] = move_cmd.size() - 2;
    last_command = write;
    emit requestWrite(move_cmd);
}
/* Move -X */
void MainWindow::on_pushButton_XM_clicked()
{
    QByteArray move_cmd;
    bool flag = false;
    move_cmd.append('\0');
    move_cmd.append("G1X");
    double step = ui->lineEdit_WP_X->text().trimmed().toDouble() - ui->lineEdit_step->text().trimmed().replace(',', '.').toDouble(&flag);

    move_cmd.append(QByteArray::number(step, 'f', 4));
    move_cmd.append(END_COMMAND);
    move_cmd[0] = move_cmd.size() - 2;
    last_command = write;
    emit requestWrite(move_cmd);
}

/* Move +Z */
void MainWindow::on_pushButton_ZP_clicked()
{
    QByteArray move_cmd;
    bool flag = false;
    move_cmd.append('\0');
    move_cmd.append("G1Z");
    double step = ui->lineEdit_WP_Z->text().trimmed().toDouble() + ui->lineEdit_step->text().trimmed().replace(',', '.').toDouble(&flag);

    move_cmd.append(QByteArray::number(step, 'f', 4));
    move_cmd.append(END_COMMAND);
    move_cmd[0] = move_cmd.size() - 2;
    last_command = write;
    emit requestWrite(move_cmd);
}
/* Move -Z */
void MainWindow::on_pushButton_ZM_clicked()
{
    QByteArray move_cmd;
    bool flag = false;
    move_cmd.append('\0');
    move_cmd.append("G1Z");
    double step = ui->lineEdit_WP_Z->text().trimmed().toDouble() - ui->lineEdit_step->text().trimmed().replace(',', '.').toDouble(&flag);

    move_cmd.append(QByteArray::number(step, 'f', 4));
    move_cmd.append(END_COMMAND);
    move_cmd[0] = move_cmd.size() - 2;
    last_command = write;
    emit requestWrite(move_cmd);
}


void MainWindow::on_pushButton_clicked()
{
    std::string fileF = ui->lineEdit_file_URL->text().toStdString();
    // emit ComPortProcessCode_signal(fileF);
}
/* Send G-Code Line */
void MainWindow::on_pushButton_SendGCode_clicked()
{
    QByteArray code_cmd;
    code_cmd.append('\0');
    code_cmd.append(ui->lineEdit_GCommandLine->text().trimmed().replace(',', '.'));
    code_cmd.append(END_COMMAND);
    code_cmd[0] = code_cmd.size() - 2;
    last_command = write;
    emit requestWrite(code_cmd);

}

