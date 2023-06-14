#include "interfacechat.h"
#include "ui_interfacechat.h"

interfaceChat::interfaceChat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interfaceChat)
{
    ui->setupUi(this);
}

interfaceChat::~interfaceChat()
{
    delete ui;
}

void interfaceChat::on_pushButton_back_clicked()
{
    ///
}

