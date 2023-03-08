#include "client.h"
#include "ui_client.h"
#include<QTcpSocket>
#include<QHostAddress>
Client::Client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
   //ui init
    ui->sIP->setText("10.236.112.215");

    ui->sPort->setText("10300");

    //init

    client=new QTcpSocket(this);

    //连接服务器
    client->connectToHost(QHostAddress(ui->sIP->text()),ui->sPort->text().toInt());

    //接收数据
    connect(client,&QTcpSocket::readyRead,this,[=]{

        QByteArray array =client->readAll();

        ui->record->append(array);
    });


    connect(ui->send,&QPushButton::clicked,this,[=]{
        client->write(ui->msg->toPlainText().toUtf8());

        ui->record->append("Me Say:"+ui->msg->toPlainText());
        ui->msg->clear();
    });
}

Client::~Client()
{
    delete ui;
}
