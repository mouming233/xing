#include "server.h"
#include <QApplication>
#include "client.h"
#include<QTcpSocket>
#include<QHostAddress>
#include <QWidget>
#include<QTcpServer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Client s;
    s.setWindowTitle("client");
    s.show();
    return a.exec();
}
