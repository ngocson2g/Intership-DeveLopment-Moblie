#include "testmaininterface.h"
#include "ui_testmaininterface.h"

TestMainInterface::TestMainInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TestMainInterface)
{
    ui->setupUi(this);
}

TestMainInterface::~TestMainInterface()
{
    delete ui;
}


void TestMainInterface::on_pushButton_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()-1);
}


void TestMainInterface::on_pushButton_Next_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()+1);
}

