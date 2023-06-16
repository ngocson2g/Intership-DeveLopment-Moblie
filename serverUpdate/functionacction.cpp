#include "functionacction.h"

functionAcction::functionAcction(QObject *parent)
    : QObject{parent}
{

}


functionAcction::newConnection()
{
    while(Server->hasPendingConnections()) {
        addNewConnection(Server->nextPendingConnection());
    }

}

functionAcction::addNewConnection(QTcpSocket *socket)
{
    listSocket.append(socket);
    connect(socket, SIGNAL(readyRead()), this, SLOT(Read_Data()));
    quint32 address = socket->peerAddress().toIPv4Address();
    emit write_new_connection(QHostAddress(address).toString());

    emit write_msg(true, "connect comlete");
}

functionAcction::Read_Data()
{
    QTcpSocket *socket = reinterpret_cast<QTcpSocket*> (sender());
    QByteArray Data = socket->readAll();
    QString msg = QString::fromStdString(Data.toStdString());
    emit write_msg(false, msg);
}

functionAcction::on_send_clicked(QString address, QString msg)
{
    foreach (QTcpSocket *socket, listSocket) {
        quint32 addSocket = socket->peerAddress().toIPv4Address();
        if (QHostAddress(addSocket).toString() == address) {
            socket->write((msg.toStdString().c_str()));
            emit write_msg(true, msg);
        }
    }
}

functionAcction::on_connection_clicked(QString address)
{
    Server->listen(QHostAddress(address), Host);
}

functionAcction::on_start_app()
{
    if (Server->listen(QHostAddress::Any, 8080)) {
        connect(Server, SIGNAL(newConnection()), this, SLOT(newConnection()));
    }

}
