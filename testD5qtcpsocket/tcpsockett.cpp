#include "tcpsockett.h"

tcpsockett::tcpsockett(QObject *parent)
    : QObject{parent}
{

}

void tcpsockett::Read_Data_From_Socket()
{

}

void tcpsockett::on_acction_send_cliecked()
{

}

void tcpsockett::on_acction_connect_clicked()
{
    TCPSocket->connectToHost(QHostAddress::LocalHost, 8080);
    if (TCPSocket->waitForConnected(1000)){
        connect(TCPSocket, SIGNAL(readyRead()), this, SLOT(Read_Data_From_Socket()));
        TCPSocket->open(QIODeviceBase::ReadWrite);
        QMessageBox::information(this, "test socket", "connect complete");
    } else {
        QMessageBox::information(this, "test socket", "connect complete");
    }
}
