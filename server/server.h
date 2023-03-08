#ifndef SERVER_H
#define SERVER_H
#include<QTcpSocket>
#include<QHostAddress>
#include <QWidget>
#include<QTcpServer>
namespace Ui {
class Server;
}

class Server : public QWidget
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = 0);
    ~Server();

private:
    Ui::Server *ui;
    QTcpServer * server;//监听的套接字
    QTcpSocket * conn;//通信的套接字
};

#endif // SERVER_H
