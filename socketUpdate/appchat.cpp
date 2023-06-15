#include "appchat.h"
#include "ui_appchat.h"

Appchat::Appchat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Appchat)
{
    ui->setupUi(this);

    connect(this, &Appchat::connect_clicked, acction, &functionAcction::on_connect_clicked);
    connect(this, &Appchat::send_clicked, acction, &functionAcction::on_send_clicked);
    connect(acction, &functionAcction::write_msg, this, &Appchat::on_write_msg);


}

Appchat::~Appchat()
{
    delete ui;
}


void Appchat::on_pushButton_send_clicked()
{
    emit send_clicked(ui->lineEdit->text());
    ui->lineEdit->clear();
}


void Appchat::on_pushButton_connect_clicked()
{
    emit connect_clicked();
}

Appchat::on_write_msg(bool user, QString msg)
{
    if (user){
        msg = "Me: " + msg;
    } else {
        msg = "Enemy: " + msg;
    }
    ui->textEdit->append(msg);
}

