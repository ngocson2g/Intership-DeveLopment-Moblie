#include "qtcpservertest.h"
#include "ui_qtcpservertest.h"

qtcpservertest::qtcpservertest(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::qtcpservertest)
{
    ui->setupUi(this);

    TCP_Server = new QTcpServer();
    if (TCP_Server->listen(QHostAddress::Any, 8080)) {
        connect(TCP_Server, SIGNAL(newConnection()), this, SLOT(newConnection()));
        QMessageBox::information(this, "APP", "Server Startd.");
    } else {
        QMessageBox::information(this, "APP", "Server Start Fail.");
    }
}

qtcpservertest::~qtcpservertest()
{
    delete ui;
}

void qtcpservertest::newConnection()
{
    while(TCP_Server->hasPendingConnections()) {
        Add_New_Client_Connection(TCP_Server->nextPendingConnection());
    }
}

void qtcpservertest::Read_Data_From_Socket()
{
    QTcpSocket *socket = reinterpret_cast<QTcpSocket*> (sender());

    QByteArray Message_From_Server = socket->readAll();

    QString Message = "Client " + QString::number(socket->socketDescriptor()) + " :: " + QString::fromStdString(Message_From_Server.toStdString());

    ui->textEdit_Client_Message->append(Message);
}

void qtcpservertest::Add_New_Client_Connection(QTcpSocket *socket)
{
    Client_Connection_List.append(socket);
    connect(socket, SIGNAL(readyRead()), this, SLOT(Read_Data_From_Socket()));
    ui->comboBox_Client_List->addItem(QString::number(socket->socketDescriptor()));
    QString Client = "Client: " + QString::number(socket->socketDescriptor()) + "Connect with server.";
    ui->textEdit_Client_Message->append(Client);
}


void qtcpservertest::on_pushButton_Send_clicked()
{
    QString Message_For_Client = ui->lineEdit_Message_For_Client->text();
    QString Receiver = ui->comboBox_Client_List->currentText();

    if (ui->comboBox_Send_Message_Type->currentText() == "ALL") //send message to All connect clients
    {
        foreach (QTcpSocket *socket, Client_Connection_List) {
            socket ->write(Message_For_Client.toStdString().c_str());
        }
    }
    else //send msg to only selected connected client
    {
        foreach (QTcpSocket *socket, Client_Connection_List) {
            if (socket->socketDescriptor() == Receiver.toLongLong()) {
                socket->write(Message_For_Client.toStdString().c_str());
            }
        }
    }
}

