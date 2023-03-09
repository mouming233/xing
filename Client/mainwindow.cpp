#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "config.h"


QString IP;
qint16 Port;
bool end = false;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("中央任务调度监控管理工具(客户端)");
    this->setFixedSize(WINDOW_WIDTH,WINDOW_HEIGHT);
    this->setWindowIcon(QIcon(WINDOWS_ICO_PATH));
    pic.load(BACK_PATH);
    Initialize();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Initialize()
{
    TCPSocket = new QTcpSocket();
    this->isconnection=false;
    ui->disconnect->setEnabled(false);
    //定义槽信号
    //成功连接服务器的connected()信号连接到slot_connected()
    connect(TCPSocket,SIGNAL(connected()),this,SLOT(slot_connected()));
    //有新数据到达时的readyread()信号连接到slot_recvmessage()
    connect(TCPSocket,SIGNAL(readyRead()),this,SLOT(slot_recvmessage()));
    //与服务器断开连接的disconnected()信号连接到slot_disconnect()
    connect(TCPSocket,SIGNAL(disconnected()),this,SLOT(slot_disconnect()));
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),pic);
}

//连接按键
void MainWindow::on_link_clicked()
{
    IP = ui->EditIP->text();
    Port = ui->EditPort->text().toInt();
    //终止之前的连接，重置套接字
    TCPSocket->abort();

    //给定IP和端口号，连接服务器
    TCPSocket->connectToHost(QHostAddress(IP), Port);
    this->isconnection = TCPSocket->waitForConnected();
    this->ui->link->isFlat();
}

//连接成功处理
void MainWindow::slot_connected()
{
    this->isconnection=true;
    ui->label_3->setText("已连接服务器端");
    ui->disconnect->setEnabled(true);
    ui->link->setEnabled(false);
    QMessageBox::information(this, "QT网络通信", "服务器端连接成功！");
}

//发送信息
void MainWindow::on_pushButton_send_clicked()
{
    if(this->isconnection)
    {
        QString sendMessage = ui->lineEdit->text(); //从单行文本框获得要发送消息
        if(!sendMessage.isEmpty())
        {
            //发送消息到服务器
            this->TCPSocket->write((QString("mesage")+sendMessage).toUtf8());
//            this->TCPSocket->waitForBytesWritten();
            //本地显示发送的消息
            QString localDispalyMessage = QDateTime::currentDateTime().toString("yyyy-M-dd hh:mm:ss ") +tr("send to server: \n") + sendMessage;                                            ;
            ui->textBrowser->append(localDispalyMessage);
        }
        else
            QMessageBox::warning(this,"错误","消息不能为空!",QMessageBox::Ok);
    }
    else
        QMessageBox::warning(this,"错误","未连接到服务器!",QMessageBox::Ok);

    ui->lineEdit->clear();
}

//接收信息
void MainWindow::slot_recvmessage()
{

    //接收来自服务器的消息
    QByteArray byteArray = this->TCPSocket->readAll();
    QString recvMessage = QDateTime::currentDateTime().toString("yyyy-M-dd hh:mm:ss ") + tr("recv from server: \n") + byteArray ;
    ui->textBrowser->append(recvMessage);
    QMessageBox::information(this, "QT网络通信", "有新消息！");
}
MyThread::MyThread()
{
    stopped = false;
}



void MyThread::stop()
{
    stopped = true;
}


void MyThread::run()
{
    std::string s = "camera.exe "+(IP).toStdString();      //可以调用python程序，也可以调用打包好的exe程序
    //std::string s = "python camera.py "+(IP).toStdString();
    const char* result = s.c_str();     //将字符串str变量变为char型数组
    int tail = 0;
    while (result[tail] != '\0') {
            tail++;
    }
    char* real_result = (char*)malloc(tail+1);
    for (int i = 0; i <= tail; i++) {
        real_result[i] = result[i];
    }
    WinExec(real_result, 0);
    //system(real_result);
}
//监控开启
void MainWindow::on_pushButton_clicked()
{
    if(this->isconnection)
    {
            QString conn="camera";
            this->TCPSocket->write(conn.toUtf8());
            thread.start();
            QString camlink = QDateTime::currentDateTime().toString("yyyy-M-dd hh:mm:ss ") + tr("连接到摄像头");
            ui->textBrowser->append(camlink);
    }
    else
    {
        QMessageBox::information(this, "QT网络通信", "请先连接客户端！");
    }
}


//按目标点模式发送信息
void MainWindow::on_pushButton_7_clicked()
{
   QString s1 = ui->lineEdit_x->text();//读取输入值
   QString s2 = ui->lineEdit_y->text();
   command t;
   t.x = atoi(s1.toStdString().c_str());//将输入值写入临时结构体
   t.y = atoi(s2.toStdString().c_str());
   QByteArray dataArray = QByteArray::fromRawData((char*)&t, sizeof(t));//将结构体转为字节流格式
   this->TCPSocket->write(QString("__cmd1").toUtf8());//发送数据头
   this->TCPSocket->write(dataArray);//发送字节流
   ui->lineEdit_x->clear();
   ui->lineEdit_y->clear();
   QString comshow = QDateTime::currentDateTime().toString("yyyy-M-dd hh:mm:ss ") + tr("x ")+s1+tr("  y: ")+s2;
   ui->textBrowser->append(comshow);
}

//按线速度模式发送信息
void MainWindow::on_pushButton_5_clicked()
{
    QString s1 = ui->lineEdit_a->text();//读取输入值
    QString s2 = ui->lineEdit_v->text();
    command t;
    t.a = s1.toFloat();//将输入值写入临时结构体
    t.v = s2.toFloat();
    QByteArray dataArray = QByteArray::fromRawData((char*)&t, sizeof(t));//将结构体转为字节流格式
    this->TCPSocket->write(QString("__cmd2").toUtf8());//发送数据头
    this->TCPSocket->write(dataArray);//发送字节流
    ui->lineEdit_a->clear();
    ui->lineEdit_v->clear();
    QString comshow = QDateTime::currentDateTime().toString("yyyy-M-dd hh:mm:ss ") + tr("a ")+s1+tr("  v: ")+s2;
    ui->textBrowser->append(comshow);
}


//按角速度模式发送信息
void MainWindow::on_pushButton_6_clicked()
{
    QString s1 = ui->lineEdit_r->text();
    QString s2 = ui->lineEdit_w->text();
    command t;
    t.r = s1.toFloat();
    t.w = s2.toFloat();
    QByteArray dataArray = QByteArray::fromRawData((char*)&t, sizeof(t));
    this->TCPSocket->write(QString("__cmd3").toUtf8());
    this->TCPSocket->write(dataArray);
    ui->lineEdit_r->clear();
    ui->lineEdit_w->clear();
    QString comshow = QDateTime::currentDateTime().toString("yyyy-M-dd hh:mm:ss ") + tr("r ")+s1+tr("  w: ")+s2;
    ui->textBrowser->append(comshow);
}

//停车
void MainWindow::on_pushButton_8_clicked()
{
    this->TCPSocket->write(QString("stop!!").toUtf8());
    QString stop = QDateTime::currentDateTime().toString("yyyy-M-dd hh:mm:ss ") + tr("stop!!");
    ui->textBrowser->append(stop);
}


//断开连接处理
void MainWindow::slot_disconnect()
{
    if(TCPSocket != nullptr&&this->isconnection)
    {
        this->isconnection=false;
        QString conend = QDateTime::currentDateTime().toString("yyyy-M-dd hh:mm:ss ") + tr("连接断开!");
        ui->textBrowser->append(conend);
        TCPSocket->disconnectFromHost();
        if(end)
            QMessageBox::information(this, "QT网络通信", "服务端已关闭！");
        else
            QMessageBox::information(this, "QT网络通信", "断开与服务端的连接！");
        ui->disconnect->setEnabled(false);
        ui->link->setEnabled(true);
        ui->label_3->setText("未连接服务器");
     //   TCPSocket->close(); //关闭客户端
     //  TCPSocket->deleteLater();//deletelater的原理是 QObject::deleteLater()并没有将对象立即销毁，而是向主消息循环发送了一个event，下一次主消息循环收到这个event之后才会销毁对象。
    }
}

//清屏按钮
void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->clear();
}

//断开连接按钮
void MainWindow::on_disconnect_clicked()
{
    this->TCPSocket->write(QString("___end").toUtf8());
    slot_disconnect();
//   TCPSocket = new QTcpSocket();
}

//退出按钮
void MainWindow::on_pushButton_3_clicked()
{
    if(this->isconnection)
    {
        this->TCPSocket->write(QString("end!!!").toUtf8());
        end = true;
    }
    QElapsedTimer t;
    t.start();
    while(t.elapsed()<500);
    this->close();
}

