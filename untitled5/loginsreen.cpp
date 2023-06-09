#include "loginsreen.h"
#include "ui_loginsreen.h"

LoginSreen::LoginSreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginSreen)
{
    ui->setupUi(this);
}

LoginSreen::~LoginSreen()
{
    delete ui;
}
