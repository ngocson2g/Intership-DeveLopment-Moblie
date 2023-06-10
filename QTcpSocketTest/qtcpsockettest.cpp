#include "qtcpsockettest.h"
#include "ui_qtcpsockettest.h"

QTcpSocketTest::QTcpSocketTest(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QTcpSocketTest)
{
    ui->setupUi(this);

    TCPSocket = new QTcpSocket();
    TCPSocket->connectToHost(QHostAddress::LocalHost, 8080);

    connect(TCPSocket, SIGNAL(readyRead()), this, SLOT(Read_Data_From_Socket()));

    TCPSocket->open(QIODevice::ReadWrite);
    if (TCPSocket->isOpen())
    {
        QMessageBox::information(this, "Qt with MG", "Connect to server");
    }else{
        QMessageBox::information(this, "Qt with MG", "Not connect to server");
    }
}

QTcpSocketTest::~QTcpSocketTest()
{
    delete ui;
}


void QTcpSocketTest::on_pushButton_Send_clicked()
{
    if (TCPSocket){
        if (TCPSocket->isOpen()){
            QString WriteData = ui ->lineEdit_WriteMsg->text();
            TCPSocket->write(WriteData.toStdString().c_str());
        }else {
            QMessageBox::information(this, "Qt with MG", "ERROR: " + TCPSocket->errorString());
        }
    }else {
        QMessageBox::information(this, "Qt with MG", "ERROR: " + TCPSocket->errorString());
    }
}

void QTcpSocketTest::Read_Data_From_Socket()
{
    if (TCPSocket){
        if (TCPSocket->isOpen()){
            QByteArray Data_From_Server = TCPSocket->readAll();

            QString MessageString = QString::fromStdString(Data_From_Server.toStdString());

            ui->textEdit_recied_from_server->append(MessageString);
        }
    }
}

