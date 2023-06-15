#include "functionacction.h"

functionAcction::functionAcction(QObject *parent)
    : QObject{parent}
{

}

functionAcction::on_start_clicked()
{

}

functionAcction::on_connect_clicked()
{
    tcpSocket->connectToHost(QHostAddress::LocalHost, 8080);
    connect(tcpSocket,SIGNAL(readyRead()), this, SLOT(Read_Data()));
    tcpSocket->open((QIODevice::ReadWrite));
}

functionAcction::on_send_clicked(QString msg)
{
    if (tcpSocket->isOpen()) {
        tcpSocket->write(msg.toStdString().c_str());
    }
    emit write_msg(true, msg);
}

void functionAcction::Read_Data()
{
    QString message;
    if (tcpSocket->isOpen()){
        QByteArray Data = tcpSocket->readAll();
        message = QString::fromStdString(Data.toStdString());
    }
    emit write_msg(false, message);
}
