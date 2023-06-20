#include "appchat.h"
#include "ui_appchat.h"

Appchat::Appchat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Appchat)
{
    ui->setupUi(this);

    connect(this, SIGNAL(start_app()), Acction, SLOT(on_start_app()));
    connect(this, SIGNAL(send_msg(QString)), Acction, SLOT(on_send_msg(QString)));
    connect(this, SIGNAL(connect_enemy(QString)), Acction, SLOT(on_connect_enemy(QString)));

    connect(Acction, SIGNAL(write_comboBox_list_connection(QString)), this, SLOT(on_write_comboBox_list_connection(QString)));
    connect(Acction, SIGNAL(write_textEdit_show_msg(bool,QString)), this, SLOT(on_write_textEdit_show_msg(bool,QString)));

//    connect(Acction, SIGNAL(connect_next()), this, SLOT(on_connect_next()));

    connect(Acction, SIGNAL(tester(QString)), this, SLOT(on_tester(QString)));
}

Appchat::~Appchat()
{
    delete ui;

}


void Appchat::on_pushButton_start_clicked()
{

    emit start_app();
    ui->stackedWidget_appChat->setCurrentIndex(1);
    ui->label_my_id->setText(Acction->myAddress);

}


void Appchat::on_pushButton_connect_clicked()
{
    QString address = ui->comboBox_list_connect->currentText();
    if (address.length()) {
        emit connect_enemy(address);
        ui->stackedWidget_appChat->setCurrentIndex(2);
    }else {
        ///
    }
}


void Appchat::on_pushButton_send_msg_clicked()
{
    QString msg = ui->lineEdit_send_msg->text();
    if (msg.length()) {
        emit send_msg(msg);
    } else {
        ///
    }
    ui->lineEdit_send_msg->clear();
}

void Appchat::on_write_comboBox_list_connection(QString enemy)
{
    ui->comboBox_list_connect->addItem(enemy);
}

void Appchat::on_write_textEdit_show_msg(bool user, QString msg)
{
    if(user) {
        msg = "Me: " + msg;
    }else {
        msg = "Enemy: " + msg;
    }
    ui->textEdit_show_msg->append(msg);
}

void Appchat::on_tester(QString str)
{
    QMessageBox::information(this, "tester", str);
}

void Appchat::on_connect_next()
{
    QMessageBox::information(this, "Notifiaction", "Connect complete!");
}


void Appchat::on_pushButton_back_clicked()
{
    ui->stackedWidget_appChat->setCurrentIndex(1);
}

