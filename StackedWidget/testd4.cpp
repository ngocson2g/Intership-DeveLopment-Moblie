#include "testd4.h"
#include "ui_testd4.h"

testD4::testD4(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testD4)
{
    ui->setupUi(this);
}

testD4::~testD4()
{
    delete ui;
}


void testD4::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void testD4::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

