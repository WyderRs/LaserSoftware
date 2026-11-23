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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *actionOpen_file;
    QWidget *centralwidget;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QPushButton *pushButton_GoOrigin;
    QPushButton *pushButton_GoHome;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_step;
    QGridLayout *gridLayout;
    QPushButton *pushButton_XM;
    QPushButton *pushButton_YM;
    QPushButton *pushButton_YP;
    QPushButton *pushButton_XP;
    QPushButton *pushButton_ZP;
    QPushButton *pushButton_ZM;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEdit_GCommandLine;
    QPushButton *pushButton_SendGCode;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_WP_X;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEdit_WP_Y;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEdit_WP_Z;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_17;
    QLineEdit *lineEdit_Feedrate;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *lineEdit_OP_X;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QLineEdit *lineEdit_OP_Y;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *lineEdit_OP_Z;
    QPushButton *pushButton_SetOrigin;
    QPushButton *pushButton_SelectOrigin;
    QPushButton *pushButton_SelectAbsolute;
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
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(997, 786);
        actionOpen_file = new QAction(MainWindow);
        actionOpen_file->setObjectName(QString::fromUtf8("actionOpen_file"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(610, 20, 351, 341));
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

        pushButton_GoOrigin = new QPushButton(frame);
        pushButton_GoOrigin->setObjectName(QString::fromUtf8("pushButton_GoOrigin"));
        pushButton_GoOrigin->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(pushButton_GoOrigin);

        pushButton_GoHome = new QPushButton(frame);
        pushButton_GoHome->setObjectName(QString::fromUtf8("pushButton_GoHome"));

        verticalLayout_4->addWidget(pushButton_GoHome);

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

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_XM = new QPushButton(frame);
        pushButton_XM->setObjectName(QString::fromUtf8("pushButton_XM"));
        pushButton_XM->setMinimumSize(QSize(20, 30));
        pushButton_XM->setMaximumSize(QSize(30, 30));
        pushButton_XM->setFont(font);

        gridLayout->addWidget(pushButton_XM, 1, 0, 1, 1);

        pushButton_YM = new QPushButton(frame);
        pushButton_YM->setObjectName(QString::fromUtf8("pushButton_YM"));
        pushButton_YM->setMinimumSize(QSize(20, 30));
        pushButton_YM->setMaximumSize(QSize(30, 30));
        pushButton_YM->setFont(font);

        gridLayout->addWidget(pushButton_YM, 2, 1, 1, 1);

        pushButton_YP = new QPushButton(frame);
        pushButton_YP->setObjectName(QString::fromUtf8("pushButton_YP"));
        pushButton_YP->setMinimumSize(QSize(20, 30));
        pushButton_YP->setMaximumSize(QSize(30, 30));
        pushButton_YP->setFont(font);
        pushButton_YP->setAutoDefault(false);

        gridLayout->addWidget(pushButton_YP, 0, 1, 1, 1);

        pushButton_XP = new QPushButton(frame);
        pushButton_XP->setObjectName(QString::fromUtf8("pushButton_XP"));
        pushButton_XP->setMinimumSize(QSize(20, 30));
        pushButton_XP->setMaximumSize(QSize(30, 30));
        pushButton_XP->setFont(font);

        gridLayout->addWidget(pushButton_XP, 1, 2, 1, 1);

        pushButton_ZP = new QPushButton(frame);
        pushButton_ZP->setObjectName(QString::fromUtf8("pushButton_ZP"));
        pushButton_ZP->setMinimumSize(QSize(20, 30));
        pushButton_ZP->setMaximumSize(QSize(30, 30));
        pushButton_ZP->setFont(font);

        gridLayout->addWidget(pushButton_ZP, 0, 3, 1, 1);

        pushButton_ZM = new QPushButton(frame);
        pushButton_ZM->setObjectName(QString::fromUtf8("pushButton_ZM"));
        pushButton_ZM->setMinimumSize(QSize(20, 30));
        pushButton_ZM->setMaximumSize(QSize(30, 30));
        pushButton_ZM->setFont(font);

        gridLayout->addWidget(pushButton_ZM, 2, 3, 1, 1);


        verticalLayout_7->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        lineEdit_GCommandLine = new QLineEdit(frame);
        lineEdit_GCommandLine->setObjectName(QString::fromUtf8("lineEdit_GCommandLine"));

        horizontalLayout_12->addWidget(lineEdit_GCommandLine);

        pushButton_SendGCode = new QPushButton(frame);
        pushButton_SendGCode->setObjectName(QString::fromUtf8("pushButton_SendGCode"));
        pushButton_SendGCode->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_12->addWidget(pushButton_SendGCode);


        verticalLayout->addLayout(horizontalLayout_12);


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

        lineEdit_WP_X = new QLineEdit(frame);
        lineEdit_WP_X->setObjectName(QString::fromUtf8("lineEdit_WP_X"));
        QFont font1;
        font1.setPointSize(11);
        lineEdit_WP_X->setFont(font1);
        lineEdit_WP_X->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_WP_X);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_7->addWidget(label_8);

        lineEdit_WP_Y = new QLineEdit(frame);
        lineEdit_WP_Y->setObjectName(QString::fromUtf8("lineEdit_WP_Y"));
        lineEdit_WP_Y->setFont(font1);
        lineEdit_WP_Y->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_WP_Y);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_8->addWidget(label_9);

        lineEdit_WP_Z = new QLineEdit(frame);
        lineEdit_WP_Z->setObjectName(QString::fromUtf8("lineEdit_WP_Z"));
        lineEdit_WP_Z->setFont(font1);
        lineEdit_WP_Z->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_WP_Z);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_17 = new QLabel(frame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        horizontalLayout_2->addWidget(label_17);

        lineEdit_Feedrate = new QLineEdit(frame);
        lineEdit_Feedrate->setObjectName(QString::fromUtf8("lineEdit_Feedrate"));
        lineEdit_Feedrate->setFont(font1);
        lineEdit_Feedrate->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_Feedrate);


        verticalLayout_2->addLayout(horizontalLayout_2);


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

        lineEdit_OP_X = new QLineEdit(frame);
        lineEdit_OP_X->setObjectName(QString::fromUtf8("lineEdit_OP_X"));
        lineEdit_OP_X->setFont(font1);
        lineEdit_OP_X->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_OP_X);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout_9->addWidget(label_12);

        lineEdit_OP_Y = new QLineEdit(frame);
        lineEdit_OP_Y->setObjectName(QString::fromUtf8("lineEdit_OP_Y"));
        lineEdit_OP_Y->setFont(font1);
        lineEdit_OP_Y->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_OP_Y);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_11->addWidget(label_13);

        lineEdit_OP_Z = new QLineEdit(frame);
        lineEdit_OP_Z->setObjectName(QString::fromUtf8("lineEdit_OP_Z"));
        lineEdit_OP_Z->setFont(font1);
        lineEdit_OP_Z->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEdit_OP_Z);


        verticalLayout_5->addLayout(horizontalLayout_11);

        pushButton_SetOrigin = new QPushButton(frame);
        pushButton_SetOrigin->setObjectName(QString::fromUtf8("pushButton_SetOrigin"));
        pushButton_SetOrigin->setMinimumSize(QSize(0, 20));
        pushButton_SetOrigin->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(pushButton_SetOrigin);

        pushButton_SelectOrigin = new QPushButton(frame);
        pushButton_SelectOrigin->setObjectName(QString::fromUtf8("pushButton_SelectOrigin"));
        pushButton_SelectOrigin->setMinimumSize(QSize(0, 20));
        pushButton_SelectOrigin->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(pushButton_SelectOrigin);

        pushButton_SelectAbsolute = new QPushButton(frame);
        pushButton_SelectAbsolute->setObjectName(QString::fromUtf8("pushButton_SelectAbsolute"));
        pushButton_SelectAbsolute->setMinimumSize(QSize(0, 20));
        pushButton_SelectAbsolute->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(pushButton_SelectAbsolute);


        verticalLayout_9->addLayout(verticalLayout_5);


        gridLayout_2->addLayout(verticalLayout_9, 0, 0, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 171, 85));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
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
        layoutWidget1->setGeometry(QRect(190, 20, 402, 85));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMaximumSize(QSize(399, 21));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(50, 0));
        label->setMaximumSize(QSize(50, 16777215));
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        lineEdit_file_URL = new QLineEdit(layoutWidget1);
        lineEdit_file_URL->setObjectName(QString::fromUtf8("lineEdit_file_URL"));
        lineEdit_file_URL->setMinimumSize(QSize(200, 0));
        lineEdit_file_URL->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_3->addWidget(lineEdit_file_URL);

        button_url = new QPushButton(layoutWidget1);
        button_url->setObjectName(QString::fromUtf8("button_url"));
        button_url->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(button_url);


        verticalLayout_3->addLayout(horizontalLayout_3);

        button_send_code = new QPushButton(layoutWidget1);
        button_send_code->setObjectName(QString::fromUtf8("button_send_code"));
        button_send_code->setMinimumSize(QSize(400, 0));
        button_send_code->setMaximumSize(QSize(400, 16777215));

        verticalLayout_3->addWidget(button_send_code);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 120, 171, 171));
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
        menubar->setGeometry(QRect(0, 0, 997, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_file);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_file->setText(QCoreApplication::translate("MainWindow", "Open file...", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Hand Mode", nullptr));
        pushButton_GoOrigin->setText(QCoreApplication::translate("MainWindow", "Go origin", nullptr));
        pushButton_GoHome->setText(QCoreApplication::translate("MainWindow", "Go home", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        lineEdit_step->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_XM->setText(QCoreApplication::translate("MainWindow", "X-", nullptr));
        pushButton_YM->setText(QCoreApplication::translate("MainWindow", "Y-", nullptr));
        pushButton_YP->setText(QCoreApplication::translate("MainWindow", "Y+", nullptr));
        pushButton_XP->setText(QCoreApplication::translate("MainWindow", "X+", nullptr));
        pushButton_ZP->setText(QCoreApplication::translate("MainWindow", "Z+", nullptr));
        pushButton_ZM->setText(QCoreApplication::translate("MainWindow", "Z-", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "G-code", nullptr));
        pushButton_SendGCode->setText(QCoreApplication::translate("MainWindow", "->", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Work position", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        lineEdit_WP_X->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        lineEdit_WP_Y->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        lineEdit_WP_Z->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Feedrate:", nullptr));
        lineEdit_Feedrate->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Origin position", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        lineEdit_OP_X->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        lineEdit_OP_Y->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        lineEdit_OP_Z->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        pushButton_SetOrigin->setText(QCoreApplication::translate("MainWindow", "Set origin", nullptr));
        pushButton_SelectOrigin->setText(QCoreApplication::translate("MainWindow", "Select relative", nullptr));
        pushButton_SelectAbsolute->setText(QCoreApplication::translate("MainWindow", "Select absolute", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Comport", nullptr));
        button_search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        button_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Program file", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "File URL", nullptr));
        lineEdit_file_URL->setText(QCoreApplication::translate("MainWindow", "C:/Qt_Doc/ToolTable/cnc/Circle_file.nc", nullptr));
        button_url->setText(QCoreApplication::translate("MainWindow", "///", nullptr));
        button_send_code->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Terminal", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
