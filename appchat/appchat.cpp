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

    tcpManager = new TCPManager(this);
    connect(this,&AppChat::checkIps,tcpManager,&TCPManager::onCheckIPs);
    connect(tcpManager,&TCPManager::checkIPsCompleted,this,&AppChat::on_ips_available);

    emit checkIps();

    TCPSocket = new QTcpSocket();
    QList<QString> ListAddress;
    for (int i =0; i < 3; i++) {
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
        ui->label->setText("Client");
    } else {


        TCPServer = new QTcpServer();
        if (TCPServer->listen(QHostAddress::Any, Host)) {
            connect(TCPServer, SIGNAL(newConnection()), this, SLOT(newConnection()));
            QMessageBox::information(this, "App chat", "server");
            ui->label->setText("Sever");
        } else {
            QMessageBox::information(this, "APP", "ERROR");
        }
    }
    emit checkIps();
}

AppChat::~AppChat()
{
    delete ui;
}

bool AppChat::Read_Data_From_Socket()
{
    QTcpSocket *socket = reinterpret_cast<QTcpSocket*> (sender());

    QByteArray Message_From_ = socket->readAll();
    if (Message_From_ == "SERVER?") {
        socket->write("101 YES");
        return true;
    }
    QString Message = "Devecie " + QString::number(socket->socketDescriptor()) + " :: " + QString::fromStdString(Message_From_.toStdString());

    ui->textEdit_recied->append(Message);
    return false;
}

bool AppChat::Read_Data_From_Server()
{
    if (TCPSocket){
        if (TCPSocket->isOpen()){
            QByteArray Data_From_ = TCPSocket->readAll();
            if (Data_From_ == "101 YES") {
                return true;
            }
            QString MessageString = QString::fromStdString(Data_From_.toStdString());
            ui->textEdit_recied->append("Device ##:  "+ MessageString);
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

    ui->comboBox_ListAddress->addItem(QHostAddress(address).toString());
    //QString Client = "Devecie " + QString::number(socket->socketDescriptor()) + " connect with server.";
    //ui->textEdit_recied->append(Client);
}


void AppChat::on_pushButton_Send_clicked()
{

    if (check_app) {
        if (TCPSocket){
            if (TCPSocket->isOpen()){
                QString WriteData = ui->lineEdit_Message_Send->text();
                TCPSocket->write(WriteData.toStdString().c_str());
                ui->textEdit_recied->append("Me: " + WriteData);
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
        if (!Message_For_.length()) {
            ui->textEdit_recied->append(("Me: " + Message_For_));
        }

    }
    ui->lineEdit_Message_Send->clear();
}


void AppChat::on_pushButton_check_clicked()
{

}


void AppChat::on_pushButton_Connect_clicked()
{
    if (check_app) {
        QString Address = ui->comboBox_ListAddress->currentText();
        TCPSocket->connectToHost(QHostAddress(Address), Host);
        connect(TCPSocket, SIGNAL(readyRead()), this, SLOT(Read_Data_From_Server()));
        TCPSocket->open(QIODevice::ReadWrite);

        if (!check_connect()) {
                TCPSocket->disconnectFromHost();
        }
    }
}

bool AppChat::check_connect()
{
    TCPSocket->write("SERVER?");
    if (Read_Data_From_Server()) {
        return false;
    }
    return true;
}

void AppChat::on_pushButton_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void AppChat::on_pushButton_open_app_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

