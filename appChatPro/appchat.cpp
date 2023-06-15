#include "appchat.h"
#include "ui_appchat.h"

appChat::appChat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::appChat)
{
    ui->setupUi(this);

    acction = new functionAcction();
    connect(this, &appChat::get_myAddress, acction, &functionAcction::on_get_myAddress);
    emit get_myAddress();
    ui->label_myAddress->setText(acction->myAddress);



    connect(this, &appChat::get_listConnectServer, acction, &functionAcction::on_get_listConnectServer);
    emit get_listConnectServer();

    connect(this, &appChat::connect_click, acction, &functionAcction::on_connect_click);

    connect(acction, &functionAcction::test, this, &appChat::on_test);


    if (!acction->check_app) {
        foreach (QString address, (acction->listConnectServer)) {
            ui->comboBox_listConnect->addItem(address);
            QMessageBox::information(this, "app chat" , "client");
        }
    } else {
        QMessageBox::information(this, "app chat", "server");
    }

}

appChat::~appChat()
{
    delete ui;
}


void appChat::on_pushButton_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() - 1);
}


void appChat::on_pushButton_connect_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    emit connect_click(ui->comboBox_listConnect->currentText());
}


void appChat::on_pushButton_appchat_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void appChat::on_pushButton_send_clicked()
{
    QString message = ui->lineEdit_send->text();
    if (message.length()){
        ui->textEdit_recied->append("Me: " + message);
        ui->lineEdit_send->clear();
    }
}

void appChat::on_test()
{
    QMessageBox::information(this,"test", "test");
}



