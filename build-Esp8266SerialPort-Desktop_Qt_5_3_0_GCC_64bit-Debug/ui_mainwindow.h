/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_Conectar;
    QWidget *tab_2;
    QLineEdit *lineEdit_Dato;
    QPushButton *pushButton_Enviar;
    QLabel *label_Enviados;
    QLabel *label_Recibidos;
    QLineEdit *lineEdit_Enviados;
    QLineEdit *lineEdit_Recibidos;
    QLabel *label;
    QPlainTextEdit *lineEdit_receive_data;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_log;
    QPushButton *pushButton_default;
    QPushButton *pushButton_esp_connect;
    QPushButton *pushButton_web;
    QPushButton *pushButton_wifi;
    QPushButton *pushButton_closed;
    QPushButton *pushButton;
    QPushButton *pushButton_content;
    QPushButton *pushButton_ip;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(666, 751);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 651, 671));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_Conectar = new QPushButton(tab);
        pushButton_Conectar->setObjectName(QStringLiteral("pushButton_Conectar"));
        pushButton_Conectar->setGeometry(QRect(240, 240, 161, 91));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lineEdit_Dato = new QLineEdit(tab_2);
        lineEdit_Dato->setObjectName(QStringLiteral("lineEdit_Dato"));
        lineEdit_Dato->setGeometry(QRect(20, 20, 511, 41));
        pushButton_Enviar = new QPushButton(tab_2);
        pushButton_Enviar->setObjectName(QStringLiteral("pushButton_Enviar"));
        pushButton_Enviar->setGeometry(QRect(550, 10, 81, 51));
        label_Enviados = new QLabel(tab_2);
        label_Enviados->setObjectName(QStringLiteral("label_Enviados"));
        label_Enviados->setGeometry(QRect(60, 580, 71, 20));
        label_Recibidos = new QLabel(tab_2);
        label_Recibidos->setObjectName(QStringLiteral("label_Recibidos"));
        label_Recibidos->setGeometry(QRect(400, 580, 71, 21));
        lineEdit_Enviados = new QLineEdit(tab_2);
        lineEdit_Enviados->setObjectName(QStringLiteral("lineEdit_Enviados"));
        lineEdit_Enviados->setGeometry(QRect(20, 610, 141, 20));
        lineEdit_Enviados->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_Recibidos = new QLineEdit(tab_2);
        lineEdit_Recibidos->setObjectName(QStringLiteral("lineEdit_Recibidos"));
        lineEdit_Recibidos->setGeometry(QRect(350, 610, 151, 20));
        lineEdit_Recibidos->setMaxLength(32766);
        lineEdit_Recibidos->setFrame(true);
        lineEdit_Recibidos->setCursorPosition(0);
        lineEdit_Recibidos->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 270, 501, 21));
        label->setAlignment(Qt::AlignCenter);
        lineEdit_receive_data = new QPlainTextEdit(tab_2);
        lineEdit_receive_data->setObjectName(QStringLiteral("lineEdit_receive_data"));
        lineEdit_receive_data->setGeometry(QRect(10, 290, 641, 291));
        pushButton_reset = new QPushButton(tab_2);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(350, 130, 71, 41));
        pushButton_log = new QPushButton(tab_2);
        pushButton_log->setObjectName(QStringLiteral("pushButton_log"));
        pushButton_log->setGeometry(QRect(520, 70, 121, 61));
        pushButton_default = new QPushButton(tab_2);
        pushButton_default->setObjectName(QStringLiteral("pushButton_default"));
        pushButton_default->setGeometry(QRect(350, 80, 71, 41));
        pushButton_esp_connect = new QPushButton(tab_2);
        pushButton_esp_connect->setObjectName(QStringLiteral("pushButton_esp_connect"));
        pushButton_esp_connect->setGeometry(QRect(20, 70, 141, 61));
        pushButton_web = new QPushButton(tab_2);
        pushButton_web->setObjectName(QStringLiteral("pushButton_web"));
        pushButton_web->setGeometry(QRect(20, 130, 141, 61));
        pushButton_wifi = new QPushButton(tab_2);
        pushButton_wifi->setObjectName(QStringLiteral("pushButton_wifi"));
        pushButton_wifi->setGeometry(QRect(20, 190, 141, 61));
        pushButton_closed = new QPushButton(tab_2);
        pushButton_closed->setObjectName(QStringLiteral("pushButton_closed"));
        pushButton_closed->setGeometry(QRect(520, 590, 121, 51));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 210, 111, 61));
        pushButton_content = new QPushButton(tab_2);
        pushButton_content->setObjectName(QStringLiteral("pushButton_content"));
        pushButton_content->setGeometry(QRect(170, 130, 141, 61));
        pushButton_ip = new QPushButton(tab_2);
        pushButton_ip->setObjectName(QStringLiteral("pushButton_ip"));
        pushButton_ip->setGeometry(QRect(170, 70, 141, 61));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 666, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ESP8266", 0));
        pushButton_Conectar->setText(QApplication::translate("MainWindow", "Connect", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Uart", 0));
        pushButton_Enviar->setText(QApplication::translate("MainWindow", "SEND", 0));
        label_Enviados->setText(QApplication::translate("MainWindow", "Transmitte", 0));
        label_Recibidos->setText(QApplication::translate("MainWindow", "Receive", 0));
        lineEdit_Enviados->setText(QApplication::translate("MainWindow", "0", 0));
        lineEdit_Recibidos->setText(QApplication::translate("MainWindow", "0", 0));
        label->setText(QApplication::translate("MainWindow", "Debug", 0));
        pushButton_reset->setText(QApplication::translate("MainWindow", "RESET", 0));
        pushButton_log->setText(QApplication::translate("MainWindow", "START LOG", 0));
        pushButton_default->setText(QApplication::translate("MainWindow", "DEFAULT", 0));
        pushButton_esp_connect->setText(QApplication::translate("MainWindow", "ESP CONNECT", 0));
        pushButton_web->setText(QApplication::translate("MainWindow", "WEB", 0));
        pushButton_wifi->setText(QApplication::translate("MainWindow", "WIFI LIST", 0));
        pushButton_closed->setText(QApplication::translate("MainWindow", "CLOSED", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Clear", 0));
        pushButton_content->setText(QApplication::translate("MainWindow", "Content", 0));
        pushButton_ip->setText(QApplication::translate("MainWindow", "IP", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Data", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
