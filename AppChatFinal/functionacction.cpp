#include "functionacction.h"

FunctionAcction::FunctionAcction(QObject *parent)
    : QObject{parent}
{

}
void FunctionAcction::on_send_msg(QString msg)
{
    if (app_status) {
        if (Client->isOpen()) {
            Client->write(msg.toStdString().c_str());
            emit write_textEdit_show_msg(true, msg);
        }
    } else {
        foreach (QTcpSocket *socket, listClient) {
            quint32 addSocket = socket->peerAddress().toIPv4Address();

            if (QHostAddress(addSocket).toString() == enemyAddress) {
                socket->write((msg.toStdString().c_str()));
                emit write_textEdit_show_msg(true, msg);
            }
        }
    }
}
void FunctionAcction::on_connect_enemy(QString enemy)
{
    enemyAddress = enemy;

    if (app_status) {
        Client->connectToHost(QHostAddress(enemyAddress), Host);
        connect(Client, SIGNAL(readyRead()), this, SLOT(readData()));
        Client->open(QIODevice::ReadWrite);

        // xac nhan bat tay
//        if (connect_confirm()) {
//            emit connect_next();
//        }
    } /*else {
        if (readData()) {
            connect_next();
        }
    }*/
}

void FunctionAcction::on_start_app()
{

    if (app_status) {
        check_status_app();
    }



    if (!app_status) {
        if(Server->listen(QHostAddress::Any, Host)) {
            connect(Server, SIGNAL(newConnection()), this, SLOT(newConnection()));
        }
    }

    if (app_status) {                     //test
        emit tester("client");
    } else {
        emit tester("server");
    }

}
bool FunctionAcction::readData()
{
    if (app_status) { // Client
        if (Client->isOpen()) {
            QByteArray Data = Client->readAll();
            QString msg = QString::fromStdString(Data.toStdString());

//            if (msg == pass) {
//                return true;
//            } else

            if (msg.length()) {
                emit write_textEdit_show_msg(false, msg);
            }
        }
    } else { // Server
        QTcpSocket *socket = reinterpret_cast<QTcpSocket*> (sender());
        QByteArray Data = socket->readAll();
        QString msg = QString::fromStdString(Data.toStdString());

//        if (msg == pass) {
//            on_send_msg(msg);
//        }else

        if (msg.length()) {
            emit write_textEdit_show_msg(false, msg);
        }
    }
    return false;
}
void FunctionAcction::newConnection(){
    if (Server->hasPendingConnections()) {
        addConnection(Server->nextPendingConnection());
    }
}
void FunctionAcction::addConnection(QTcpSocket *socket)
{
    listClient.append(socket);
    connect(socket, SIGNAL(readyRead()), this, SLOT(readData()));
    quint32 address = socket->peerAddress().toIPv4Address();

    emit write_comboBox_list_connection(QHostAddress(address).toString());


    //emit write_textEdit_show_msg(true, "connect "); //tester

}

void FunctionAcction::get_Address()
{
    QList<QHostAddress> ipAddressList = QNetworkInterface::allAddresses();
    foreach (const QHostAddress& address, ipAddressList) {
        if (address != QHostAddress::LocalHost && address.toIPv4Address()) {
            myAddress = address.toString();
        }
    }
}

void FunctionAcction::get_ListAddress_Server()
{
    QString Laddress = myAddress.left(myAddress.lastIndexOf(".") + 1);

    Laddress = "127.0.0."; // test

    QTcpSocket *socket = new QTcpSocket();
    for (int i = 0; i < 3; i++) {

        QString Address = Laddress + QString::number(i);

        if (Address == myAddress) {
            continue;
        }


        socket->connectToHost(QHostAddress(Address), Host);

        if (socket->waitForConnected(100)) {
            listServer.append(Address);
        }

        socket->disconnectFromHost();
        //emit tester(QString::number(i));
    }

}

void FunctionAcction::check_status_app()
{

    get_ListAddress_Server();
    //emit tester(QString::number(listServer.size()));  //tester
    if (!listServer.size()) {
        app_status = false;
    } else {
        foreach (QString address, listServer) {
            emit write_comboBox_list_connection(address);
        }
    }
    //emit tester("...");  //tester
}

bool FunctionAcction::connect_confirm()
{
    Client->write(pass.toStdString().c_str());
    if (readData()) {
        return true;
    }
    return false;
}
