#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket> //通信套接字
#include <QFile>      //文件操作
#include <QHostAddress> //IP地址
#include <QMessageBox> //提示对话框
#include <QPainter>
#include <QDateTime>
#include <QElapsedTimer>//延时
#include <QtDebug>
#include <QThread>
#include <windows.h>

class MyThread : public QThread
{
public:
    MyThread();
    void stop();
protected:
    void run();

private:
    volatile bool stopped;
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void Initialize();
    void paintEvent(QPaintEvent *event);


    //数据
    QTcpSocket* TCPSocket;

    QPixmap pic;

    bool isconnection;

private slots:

    void slot_connected(); //处理成功连接到服务器的槽

    void slot_recvmessage(); //接收来自服务器的消息的槽

    void slot_disconnect();//处理断开连接时的槽

    void on_pushButton_send_clicked();//发送消息按钮

    void on_pushButton_2_clicked();//清屏按钮

    void on_link_clicked();//连接按钮

    void on_disconnect_clicked();//取消连接按钮

    void on_pushButton_3_clicked();//退出按钮

    void on_pushButton_clicked();//监控开启

    void on_pushButton_7_clicked();//按目标点模式发送信息

    void on_pushButton_5_clicked();//按线速度模式发送信息

    void on_pushButton_6_clicked();//按角速度模式发送信息

    void on_pushButton_8_clicked();//停车


private:
    Ui::MainWindow *ui;
    MyThread thread;//视频传输线程
};
struct command
{
    int x,y;
    float a,v,r,w;
    command()
    {
        this->x = 0;
        this->y = 0;
        this->a = 0.0;
        this->v = 0.0;
        this->r =0.0;
        this->w = 0.0;
    }
};

#endif // MAINWINDOW_H
