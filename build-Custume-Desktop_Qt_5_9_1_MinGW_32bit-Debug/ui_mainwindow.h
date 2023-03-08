/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
    QPushButton *disconnect;
    QPushButton *pushButton;
    QLineEdit *lineEdit_x;
    QLineEdit *lineEdit_y;
    QLineEdit *lineEdit_a;
    QLineEdit *lineEdit_v;
    QLineEdit *lineEdit_r;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_w;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1202, 789);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 111, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 80, 121, 31));
        label_2->setFont(font);
        link = new QPushButton(centralwidget);
        link->setObjectName(QStringLiteral("link"));
        link->setGeometry(QRect(170, 140, 111, 41));
        link->setStyleSheet(QStringLiteral(""));
        EditIP = new QLineEdit(centralwidget);
        EditIP->setObjectName(QStringLiteral("EditIP"));
        EditIP->setGeometry(QRect(150, 80, 181, 21));
        EditIP->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 199);"));
        EditPort = new QLineEdit(centralwidget);
        EditPort->setObjectName(QStringLiteral("EditPort"));
        EditPort->setGeometry(QRect(470, 80, 113, 21));
        EditPort->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 199);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 680, 391, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("color: rgb(138, 138, 138);\n"
"font: 18pt \"Adobe Devanagari\";"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 250, 561, 331));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 199);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 600, 561, 41));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 199);"));
        pushButton_send = new QPushButton(centralwidget);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(640, 610, 131, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(640, 400, 121, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1030, 660, 121, 41));
        disconnect = new QPushButton(centralwidget);
        disconnect->setObjectName(QStringLiteral("disconnect"));
        disconnect->setGeometry(QRect(420, 140, 111, 41));
        disconnect->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(640, 110, 111, 41));
        lineEdit_x = new QLineEdit(centralwidget);
        lineEdit_x->setObjectName(QStringLiteral("lineEdit_x"));
        lineEdit_x->setGeometry(QRect(860, 190, 113, 31));
        lineEdit_x->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 199);"));
        lineEdit_y = new QLineEdit(centralwidget);
        lineEdit_y->setObjectName(QStringLiteral("lineEdit_y"));
        lineEdit_y->setGeometry(QRect(1050, 190, 113, 31));
        lineEdit_y->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 199);"));
        lineEdit_a = new QLineEdit(centralwidget);
        lineEdit_a->setObjectName(QStringLiteral("lineEdit_a"));
        lineEdit_a->setGeometry(QRect(860, 260, 113, 31));
        lineEdit_a->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 199);"));
        lineEdit_v = new QLineEdit(centralwidget);
        lineEdit_v->setObjectName(QStringLiteral("lineEdit_v"));
        lineEdit_v->setGeometry(QRect(1050, 260, 113, 31));
        lineEdit_v->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 199);"));
        lineEdit_r = new QLineEdit(centralwidget);
        lineEdit_r->setObjectName(QStringLiteral("lineEdit_r"));
        lineEdit_r->setGeometry(QRect(860, 330, 113, 31));
        lineEdit_r->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 199);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(800, 190, 72, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(990, 190, 72, 31));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(800, 260, 72, 31));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(980, 260, 72, 31));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(800, 330, 72, 31));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(980, 330, 72, 31));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        lineEdit_w = new QLineEdit(centralwidget);
        lineEdit_w->setObjectName(QStringLiteral("lineEdit_w"));
        lineEdit_w->setGeometry(QRect(1050, 330, 113, 31));
        lineEdit_w->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 199);"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1050, 420, 111, 31));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(860, 490, 111, 31));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(860, 420, 111, 31));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(1050, 490, 111, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1202, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\257\267\350\276\223\345\205\245IP\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\257\267\350\276\223\345\205\245\347\253\257\345\217\243\357\274\232</span></p></body></html>", Q_NULLPTR));
        link->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245\347\212\266\346\200\201\357\274\232\346\234\252\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        pushButton_send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\270\205\345\261\217", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\347\250\213\345\272\217", Q_NULLPTR));
        disconnect->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\347\233\221\346\216\247\347\252\227\345\217\243", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207x:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207y:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\350\247\222\345\272\246a:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\347\272\277\351\200\237\345\272\246v:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\215\212\345\276\204r:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\350\247\222\351\200\237\345\272\246w:", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\347\272\277\351\200\237\345\272\246\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\350\247\222\351\200\237\345\272\246\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "\347\233\256\346\240\207\347\202\271\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "\345\201\234\350\275\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
