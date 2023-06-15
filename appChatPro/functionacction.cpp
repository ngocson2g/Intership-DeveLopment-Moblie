#include "functionacction.h"

functionAcction::functionAcction(QObject *parent)
    : QObject{parent}
{

}

void functionAcction::on_get_myAddress()
{
    QList<QHostAddress> ipAddressList = QNetworkInterface::allAddresses();
    foreach (const QHostAddress& address, ipAddressList) {
        if (address != QHostAddress::LocalHost && address.toIPv4Address()) {
            myAddress = address.toString();
        }
    }
}

void functionAcction::on_get_listConnectServer()
{

    QString Laddress = myAddress.left(myAddress.lastIndexOf(".") + 1);
    Laddress = "127.0.0."; //test

    for (int i = 0; i < 3; i++) {
        QString Address = Laddress + QString::number(i);
//        if (Addresss == myAddress) { //check
//            continue;
//        }
        tcpSocket->connectToHost(QHostAddress(Address), Host);
        if (tcpSocket->waitForConnected(1000)) {
            listConnectServer.append(Address);
            //qDebug() << Address;
        }
        tcpSocket->disconnectFromHost();
    }
    if (!listConnectServer.size()) {
        check_app = true;
    }

}

bool functionAcction::on_connect_click(QString address)
{
    if (!check_app) {
        tcpSocket->connectToHost(QHostAddress(address), Host);
        connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(Read_Data_From_Server));
        tcpSocket->open(QIODevice::ReadWrite);
        if (!check_connect()) {
            tcpSocket->disconnectFromHost();
            return false;
        } else {
            return true;
        }
    }else {
        //server
    }
    return true;
}

QString functionAcction::Read_Data_From_Server()
{
    QString message = "";
    if (tcpSocket->isOpen()) {
        QByteArray Data = tcpSocket->readAll();
        message = QString::fromStdString(Data.toStdString());
    }
    return message;
}

QString functionAcction::Read_Data_From_Socket()
{
    QTcpSocket *socket = reinterpret_cast<QTcpSocket*> (sender());

    QByteArray Data = socket->readAll();
    QString message = QString::fromStdString(Data.toStdString());
    if (message == "CHECK") {
        socket->write("CHECK");
    }
    return message;

}

bool functionAcction::check_connect()
{
    emit test();
    tcpSocket->write("CHECK");
    if (Read_Data_From_Server() == QString::number(tcpSocket->socketDescriptor())) {
        return true;
    }
    return false;

}

