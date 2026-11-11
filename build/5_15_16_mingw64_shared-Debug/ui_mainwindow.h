/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_step;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_10;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEdit_13;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QLineEdit *lineEdit_14;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *lineEdit_15;
    QPushButton *pushButton_15;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *comboBox_ports;
    QPushButton *button_search;
    QPushButton *button_connect;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_file_URL;
    QPushButton *button_url;
    QPushButton *button_send_code;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_16;
    QPlainTextEdit *plainTextEdit_log;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(993, 786);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(610, 20, 361, 321));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 9, 9, 9);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setPointSize(12);
        label_6->setFont(font);
        label_6->setFrameShape(QFrame::Box);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);

        pushButton_13 = new QPushButton(frame);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        verticalLayout_4->addWidget(pushButton_13);

        pushButton_12 = new QPushButton(frame);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        verticalLayout_4->addWidget(pushButton_12);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        lineEdit_step = new QLineEdit(frame);
        lineEdit_step->setObjectName(QString::fromUtf8("lineEdit_step"));

        horizontalLayout->addWidget(lineEdit_step);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_7->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(20, 30));
        pushButton_8->setMaximumSize(QSize(30, 30));
        pushButton_8->setAutoDefault(false);

        gridLayout->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(20, 30));
        pushButton_9->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(20, 30));
        pushButton_7->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(pushButton_7, 1, 2, 1, 1);

        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(20, 30));
        pushButton_10->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(pushButton_10, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_12->addWidget(lineEdit_5);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_12->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_12);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);


        verticalLayout_7->addLayout(verticalLayout);


        gridLayout_2->addLayout(verticalLayout_7, 0, 1, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMaximumSize(QSize(16777215, 20));
        label_15->setFont(font);
        label_15->setFrameShape(QFrame::Box);
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_15);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_6->addWidget(label_4);

        lineEdit_8 = new QLineEdit(frame);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        QFont font1;
        font1.setPointSize(11);
        lineEdit_8->setFont(font1);

        horizontalLayout_6->addWidget(lineEdit_8);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_7->addWidget(label_8);

        lineEdit_12 = new QLineEdit(frame);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setFont(font1);

        horizontalLayout_7->addWidget(lineEdit_12);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_8->addWidget(label_9);

        lineEdit_13 = new QLineEdit(frame);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setFont(font1);

        horizontalLayout_8->addWidget(lineEdit_13);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_8->addLayout(verticalLayout_2);


        verticalLayout_9->addLayout(verticalLayout_8);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_14 = new QLabel(frame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMaximumSize(QSize(16777215, 20));
        label_14->setFont(font);
        label_14->setFrameShape(QFrame::Box);
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_14);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        horizontalLayout_5->addWidget(label_11);

        lineEdit_9 = new QLineEdit(frame);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setFont(font1);

        horizontalLayout_5->addWidget(lineEdit_9);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout_9->addWidget(label_12);

        lineEdit_14 = new QLineEdit(frame);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setFont(font1);

        horizontalLayout_9->addWidget(lineEdit_14);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_11->addWidget(label_13);

        lineEdit_15 = new QLineEdit(frame);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setFont(font1);

        horizontalLayout_11->addWidget(lineEdit_15);


        verticalLayout_5->addLayout(horizontalLayout_11);

        pushButton_15 = new QPushButton(frame);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        verticalLayout_5->addWidget(pushButton_15);


        verticalLayout_9->addLayout(verticalLayout_5);


        gridLayout_2->addLayout(verticalLayout_9, 0, 0, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 171, 81));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_10);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        comboBox_ports = new QComboBox(layoutWidget);
        comboBox_ports->setObjectName(QString::fromUtf8("comboBox_ports"));

        horizontalLayout_10->addWidget(comboBox_ports);

        button_search = new QPushButton(layoutWidget);
        button_search->setObjectName(QString::fromUtf8("button_search"));
        button_search->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_10->addWidget(button_search);


        verticalLayout_6->addLayout(horizontalLayout_10);

        button_connect = new QPushButton(layoutWidget);
        button_connect->setObjectName(QString::fromUtf8("button_connect"));
        button_connect->setMaximumSize(QSize(5000, 5000));

        verticalLayout_6->addWidget(button_connect);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 20, 361, 85));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 25));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        lineEdit_file_URL = new QLineEdit(layoutWidget1);
        lineEdit_file_URL->setObjectName(QString::fromUtf8("lineEdit_file_URL"));

        horizontalLayout_3->addWidget(lineEdit_file_URL);

        button_url = new QPushButton(layoutWidget1);
        button_url->setObjectName(QString::fromUtf8("button_url"));
        button_url->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(button_url);


        verticalLayout_3->addLayout(horizontalLayout_3);

        button_send_code = new QPushButton(layoutWidget1);
        button_send_code->setObjectName(QString::fromUtf8("button_send_code"));

        verticalLayout_3->addWidget(button_send_code);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 110, 171, 181));
        verticalLayout_10 = new QVBoxLayout(layoutWidget2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMaximumSize(QSize(16777215, 20));
        label_16->setFont(font);
        label_16->setFrameShape(QFrame::Box);
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_16);

        plainTextEdit_log = new QPlainTextEdit(layoutWidget2);
        plainTextEdit_log->setObjectName(QString::fromUtf8("plainTextEdit_log"));

        verticalLayout_10->addWidget(plainTextEdit_log);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 993, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Hand Mode", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Go origin", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Go home", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        lineEdit_step->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Y+", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "X-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "X+", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Y-", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "->", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "G-code", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Work position", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        lineEdit_12->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        lineEdit_13->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Origin position", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        lineEdit_15->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Set origin", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Comport", nullptr));
        button_search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        button_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Program file", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "File URL", nullptr));
        lineEdit_file_URL->setText(QCoreApplication::translate("MainWindow", "C:/Qt_Doc/ToolTable/cnc/Circle_file.nc", nullptr));
        button_url->setText(QCoreApplication::translate("MainWindow", "///", nullptr));
        button_send_code->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Terminal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
