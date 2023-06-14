#include "appchat.h"
#include "ui_appchat.h"

Appchat::Appchat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Appchat)
{
    ui->setupUi(this);

    myAddress = Get_My_IPaddress();
    ui->label_My_ID->setText(myAddress);
    lAddress = myAddress.left(myAddress.lastIndexOf(".") + 1);

    Create_List_Connect_Client(tcpSocket);

    if (ListAddress_Server.size()) {
        QMessageBox::information(this, "app chat", "client");
    } else {
        check_app  = true;
        tcpServer = new QTcpServer();
        if (tcpServer->listen(QHostAddress::Any, Host)) {
            connect(tcpServer, SIGNAL(newConnection()), this, SLOT(newConnection()));
            QMessageBox::information(this, "app chat", "server");
        } else
            QMessageBox::information(this, "app chat", "error");


    }
}

Appchat::~Appchat()
{
    delete ui;
}

void Appchat::Read_Data_From_Socket()
{
    QTcpSocket *socket = reinterpret_cast<QTcpSocket*> (sender());
    QByteArray Data_From_Client = socket->readAll();
    QString Message = "Devecie " + socket->peerAddress().toString() + " : " + QString::fromStdString(Data_From_Client.toStdString());
    ui->textEdit_show_chat->append(Message);
}

void Appchat::Read_Data_From_Server()
{
    if(tcpSocket->isOpen()) {
        QByteArray Data_From_Server = tcpSocket->readAll();
        QString Message = "Devecie " + tcpSocket->peerAddress().toString() + " : " + QString::fromStdString(Data_From_Server.toStdString());
        ui->textEdit_show_chat->append(Message);
    }
}

void Appchat::Send_Data_To_Socket()
{
    QString Message = ui->lineEdit_msg->text();
    QString Reciever = ui->comboBox_list_address->currentText();
    foreach (QTcpSocket *socket, ListAddress_Client) {
        if (socket->peerAddress().toString() == Reciever) {
            socket->write(Message.toStdString().c_str());
        }
    }

}

void Appchat::Send_Data_To_Server()
{
    QString Message = ui->lineEdit_msg->text();
    QString Reciever = ui->comboBox_list_address->currentText();
    if (tcpSocket->isOpen()) {
        tcpSocket->write(Message.toStdString().c_str());
    }
}

bool Appchat::Check_Connect(QTcpSocket *socket)
{

}

void Appchat::Create_List_Connect_Client(QTcpSocket *socket)
{
    for (int i = 1; i< 10; i++) {
        QString address = lAddress + QString::number(i);

        if (address == myAddress) {
            continue;
        }

        socket->connectToHost(QHostAddress(address),Host);
        if (socket->waitForConnected(1000)){
            ListAddress_Server.append(socket);

            ui->comboBox_list_address->addItem(address);
        }
    }
}


void Appchat::on_pushButton_Send_Msg_clicked()
{
    if (check_app) {
        Send_Data_To_Server();
    }else {
        Send_Data_To_Socket();
    }
}


void Appchat::on_pushButton_Connect_clicked()
{

}

void Appchat::newConnection()
{
    while(tcpServer->hasPendingConnections()) {
        Add_New_Connect(tcpServer->nextPendingConnection());
    }
}

void Appchat::Add_New_Connect(QTcpSocket *socket)
{
    ListAddress_Server.append(socket->peerAddress().toString());
    ui->comboBox_list_address->addItem(socket->peerAddress().toString());
}

QString Appchat::Get_My_IPaddress()
{
    QString myaddress;
    QList<QHostAddress> ipAddressList = QNetworkInterface::allAddresses();
    foreach (const QHostAddress& address, ipAddressList) {
        myaddress = address;
    }
    return myaddress;
}

