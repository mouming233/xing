#include "server.h"
#include "ui_server.h"
#include<QTcpSocket>
#include<QTcpServer>
Server::Server(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
   //ui init
    ui->sIP->setText("10.236.112.215");

    ui->sPort->setText("10300");

    //实例化 init
    server=new QTcpServer(this);
    //监听
    server->listen(QHostAddress(ui->sIP->text()),ui->sPort->text().toInt());


    //新的连接
    connect(server,&QTcpServer::newConnection,this,[=]()
    {
        //接受客户端的套接字对象accept
        conn=server->nextPendingConnection();


        ui->record->append("有新的连接");

        connect(conn,&QTcpSocket::readyRead,this,[=](){
            QByteArray array =conn->readAll();

            ui->record->append(array);
        });

    });


    //发送
    connect (ui->send,&QPushButton::clicked,this,[=](){
        //发送数据
        conn->write(ui->msg->toPlainText().toUtf8().data());

        ui->record->append("Me Say:"+ui->msg->toPlainText());
        ui->msg->clear();

    });
}

Server::~Server()
{
    delete ui;
}
