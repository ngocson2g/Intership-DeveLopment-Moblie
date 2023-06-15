#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

    QList<QString> list;
    sockettcp = new tcpsockett(this);
    connect(this, &MainWindow::checkip, sockettcp, &tcpsockett::on_checkip);
    connect(sockettcp, &tcpsockett::checkip_complete, this, &MainWindow::on_ip_vailable);

}


void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_ip_vailable()
{

}

