#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TCPManager = new tcpManager();

    connect(this, &MainWindow::checkIps, TCPManager, &tcpManager::onCheckIPs);
    emit checkIps();

    connect(TCPManager, &tcpManager::checkIPsComplete, this, &MainWindow::on_ips_available);
    ui->lineEdit_msg->setText(TCPManager->myIPAddress);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ips_available(QList<QString> listIps)
{

}

