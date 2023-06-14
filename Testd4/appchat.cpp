#include "appchat.h"
#include "ui_appchat.h"

AppChat::AppChat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AppChat)
{
    ui->setupUi(this);
    interfacechat = new interfaceChat();
}

AppChat::~AppChat()
{
    delete ui;
}

void AppChat::on_pushButton_Chat_clicked()
{
    interfacechat->show();

}


void AppChat::on_pushButton_exit_appchat_clicked()
{

}

