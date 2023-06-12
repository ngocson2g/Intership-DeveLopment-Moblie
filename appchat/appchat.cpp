#include "appchat.h"
#include "ui_appchat.h"

bool check_app = false;

AppChat::AppChat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AppChat)
{
    ui->setupUi(this);

    TCPSocket = new QTcpSocket();
    TCPSocket->connectToHost(QHostAddress::LocalHost, 8080);
    connect(TCPSocket, SIGNAL(readyRead()), this, SLOT(Read_Data_From_Socket()));
    TCPSocket->open(QIODevice::ReadWrite);
    if (TCPSocket->isOpen())
    {
        QMessageBox::information(this, "app chat", "Connect to server");
    }else{
        TCPServer = new QTcpServer();
        if (TCPServer->listen(QHostAddress::Any, 8080)) {
            connect(TCPServer, SIGNAL(newConnection()), this, SLOT(newConnection()));
            QMessageBox::information(this, "APP", "Server Startd.");
            check_app = true;
        } else {
            QMessageBox::information(this, "APP", "ERROR");
        }
    }
}

AppChat::~AppChat()
{
    delete ui;
}

void AppChat::Read_Data_From_Socket()
{
    QTcpSocket *socket = reinterpret_cast<QTcpSocket*> (sender());

    QByteArray Message_From_Server = socket->readAll();

    QString Message = "Client " + QString::number(socket->socketDescriptor()) + " :: " + QString::fromStdString(Message_From_Server.toStdString());

    ui->textEdit_recied->append(Message);
}

void AppChat::Read_Data_From_Server()
{
    if (TCPSocket){
        if (TCPSocket->isOpen()){
            QByteArray Data_From_Server = TCPSocket->readAll();

            QString MessageString = QString::fromStdString(Data_From_Server.toStdString());

            ui->textEdit_recied->append(MessageString);
        }
    }
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
    //ui->comboBox_Client_List->addItem(QString::number(socket->socketDescriptor()));
    QString Client = "Client: " + QString::number(socket->socketDescriptor()) + "Connect with server.";
    ui->textEdit_recied->append(Client);
}


void AppChat::on_pushButton_Send_clicked()
{
    if (!check_app) {
        if (TCPSocket){
            if (TCPSocket->isOpen()){
                QString WriteData = ui->lineEdit_Message_Send->text();
                TCPSocket->write(WriteData.toStdString().c_str());
            }else {
                QMessageBox::information(this, "Qt with MG", "ERROR: " + TCPSocket->errorString());
            }
        }else {
            QMessageBox::information(this, "Qt with MG", "ERROR: " + TCPSocket->errorString());
        }
    }else {
        QString Message_For_ = ui->lineEdit_Message_Send->text();
        foreach (QTcpSocket *socket, Client_Connection_List) {
            socket->write(Message_For_.toStdString().c_str());

        }
    }
}

