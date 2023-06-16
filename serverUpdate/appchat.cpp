#include "appchat.h"
#include "ui_appchat.h"

appchat::appchat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::appchat)
{
    ui->setupUi(this);
    connect(this, &appchat::connection_clicked, Acction, &functionAcction::on_connection_clicked);
    connect(this, &appchat::send_clicked, Acction, &functionAcction::on_send_clicked);
    connect(Acction, &functionAcction::write_msg, this, &appchat::on_write_msg);
    connect(Acction, &functionAcction::write_new_connection, this, &appchat::on_write_new_connection);

    connect(this, &appchat::start_app, Acction, &functionAcction::on_start_app);
}

appchat::~appchat()
{
    delete ui;
}

appchat::on_write_msg(bool user, QString msg){
    if (user) {
        msg = "Me: " + msg;
    }else {
        msg = "Enemy: " + msg;
    }
    ui->textEdit->append(msg);
}
appchat::on_write_new_connection(QString newConnection){
    ui->comboBox->addItem(newConnection);
}

void appchat::on_pushButton_send_clicked()
{
    QString msg =  ui->lineEdit->text();
    QString address = ui->comboBox->currentText();

    if (msg.length()) {
        emit send_clicked(address, msg);
        ui->lineEdit->clear();
    }
}


void appchat::on_pushButton_connect_clicked()
{
    emit connection_clicked(ui->comboBox->currentText());
}


void appchat::on_pushButton_appchat_clicked()
{
    emit start_app();
}

