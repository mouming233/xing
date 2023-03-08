/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *link;
    QLineEdit *EditIP;
    QLineEdit *EditPort;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QPushButton *pushButton_send;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *slot_disconnect;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(868, 593);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 80, 111, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 80, 121, 31));
        label_2->setFont(font);
        link = new QPushButton(centralwidget);
        link->setObjectName(QString::fromUtf8("link"));
        link->setGeometry(QRect(230, 140, 93, 28));
        link->setStyleSheet(QString::fromUtf8(""));
        EditIP = new QLineEdit(centralwidget);
        EditIP->setObjectName(QString::fromUtf8("EditIP"));
        EditIP->setGeometry(QRect(170, 80, 181, 21));
        EditIP->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 199);"));
        EditPort = new QLineEdit(centralwidget);
        EditPort->setObjectName(QString::fromUtf8("EditPort"));
        EditPort->setGeometry(QRect(490, 80, 113, 21));
        EditPort->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 199);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 460, 241, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(120, 200, 401, 171));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 199);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 380, 401, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 199);"));
        pushButton_send = new QPushButton(centralwidget);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));
        pushButton_send->setGeometry(QRect(580, 380, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 270, 93, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(650, 450, 93, 28));
        slot_disconnect = new QPushButton(centralwidget);
        slot_disconnect->setObjectName(QString::fromUtf8("slot_disconnect"));
        slot_disconnect->setGeometry(QRect(400, 140, 93, 28));
        slot_disconnect->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 160, 93, 28));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(650, 210, 93, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 868, 26));
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
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\257\267\350\276\223\345\205\245IP\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\257\267\350\276\223\345\205\245\347\253\257\345\217\243\357\274\232</span></p></body></html>", nullptr));
        link->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\347\212\266\346\200\201\357\274\232\346\234\252\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        pushButton_send->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\345\261\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\235\237\347\250\213\345\272\217", nullptr));
        slot_disconnect->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\233\221\346\216\247\347\252\227\345\217\243", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\347\233\221\346\216\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
