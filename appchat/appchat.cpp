#include "appchat.h"
#include "ui_appchat.h"

bool check_app = false;

AppChat::AppChat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AppChat)
{
    ui->setupUi(this);

    {
        QList<QHostAddress> ipAddressList = QNetworkInterface::allAddresses();
        foreach (const QHostAddress& address, ipAddressList) {
            if (address != QHostAddress::LocalHost && address.toIPv4Address()) {
                ////
                Iaddress = address.toString();
            }
        }
    }
    ui->label_index_code->setText(Iaddress);
    Laddress = Iaddress.left(Iaddress.lastIndexOf(".") + 1);
    Laddress = "127.0.0.";


    TCPSocket = new QTcpSocket();
    QList<QString> ListAddress;
    for (int i =0; i < 7 ; i++) {
        QString Address = Laddress + QString::number(i);
        qDebug() << Address;
//        if (Address == Iaddress) {
//            continue;
//        }

        TCPSocket->connectToHost(QHostAddress(Address), Host);
        if (TCPSocket->waitForConnected(1000)) {
            ListAddress.append(Address);
            check_app = true;
        }
        TCPSocket->disconnectFromHost();
    }

    foreach (QString Address, ListAddress) {
        ui->comboBox_ListAddress->addItem(Address);
    }

    if (check_app) {
        QMessageBox::information(this, "App chat", "Client");

    } else {
        QMessageBox::information(this, "App chat", "server");

        TCPServer = new QTcpServer();
        if (TCPServer->listen(QHostAddress::Any, Host)) {
            connect(TCPServer, SIGNAL(newConnection()), this, SLOT(newConnection()));
        } else {
            QMessageBox::information(this, "APP", "ERROR");
        }
    }

}

AppChat::~AppChat()
{
    delete ui;
}

bool AppChat::Read_Data_From_Socket()
{
    QTcpSocket *socket = reinterpret_cast<QTcpSocket*> (sender());

    QByteArray Message_From_Server = socket->readAll();
    if (Message_From_Server == "SERVER") {
        socket->write("YES");
        return true;
    }
    QString Message = "Devecie " + QString::number(socket->socketDescriptor()) + " :: " + QString::fromStdString(Message_From_Server.toStdString());

    ui->textEdit_recied->append(Message);
    return false;
}

bool AppChat::Read_Data_From_Server()
{
    if (TCPSocket){
        if (TCPSocket->isOpen()){
            QByteArray Data_From_Server = TCPSocket->readAll();

            QString MessageString = QString::fromStdString(Data_From_Server.toStdString());
            ui->textEdit_recied->append(MessageString);
        }
    }
    return false;
}

void AppChat::newConnection()
{
    while(TCPServer->hasPendingConnections()) {
        Add_New_Client_Connection(TCPServer->nextPendingConnection());
    }
}



void AppChat::Add_New_Client_Connection(QTcpSocket *socket)
{
    Client_Connection_List.append(socket);
    connect(socket, SIGNAL(readyRead()), this, SLOT(Read_Data_From_Socket()));
    quint32 address = socket->peerAddress().toIPv4Address();
    //ui->textEdit_recied->append(QHostAddress(address).toString());
    ui->comboBox_ListAddress->addItem(QHostAddress(address).toString());
    QString Client = "Devecie " + QString::number(socket->socketDescriptor()) + " connect with server.";
    ui->textEdit_recied->append(Client);
}


void AppChat::on_pushButton_Send_clicked()
{

    if (check_app) {
        if (TCPSocket){
            if (TCPSocket->isOpen()){
                QString WriteData = ui->lineEdit_Message_Send->text();
                TCPSocket->write(WriteData.toStdString().c_str());
            }else {
                QMessageBox::information(this, "App Chat", "ERROR: " + TCPSocket->errorString());
            }
        }else {
            //QMessageBox::information(this, "App Chat", "ERROR: " + TCPSocket->errorString());
        }
    }else {
        QString Message_For_ = ui->lineEdit_Message_Send->text();

        foreach (QTcpSocket *socket, Client_Connection_List) {
                socket->write(Message_For_.toStdString().c_str());
        }
    }
}


void AppChat::on_pushButton_check_clicked()
{

}


void AppChat::on_pushButton_Connect_clicked()
{
    if (check_app) {
        QString Address = ui->comboBox_ListAddress->currentText();
        TCPSocket->connectToHost(QHostAddress(Address), Host);
        connect(TCPSocket, SIGNAL(readyRead()), this, SLOT(Read_Data_From_Socket()));
        TCPSocket->open(QIODevice::ReadWrite);
    }
}

bool AppChat::check_connect()
{
    for (int i = 1; i < 10; i++) {
        QString Address = Laddress + QString::number(i);

        if (Address == Iaddress) {
                continue;
        }

        TCPSocket->connectToHost(QHostAddress(Address), Host);
        if(TCPSocket->waitForConnected(1000)){

                return false;

        }
    }

    return true;
}


