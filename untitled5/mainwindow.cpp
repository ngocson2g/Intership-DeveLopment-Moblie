#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

#include "testdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    connect(ui->testSlider,SIGNAL(valueChange(int)),
//            ui->testBar, SLOT(setValue(int)));
    connect(ui->testSlider, &QSlider::valueChanged,ui->testBar,&QProgressBar::setValue);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_DeleteTextButton_clicked()
{
    ui ->SendText->clear();
}


void MainWindow::on_SendTextButton_clicked()
{
    QString mes = ui->SendText->toPlainText();
    ui ->SendText->clear();
    ui->testRecied->setText(mes);
}




void MainWindow::on_MessageBoxButton_clicked()
{
    QMessageBox::critical(this,tr("THE TITLE"), tr("Thong bao Min Group")); //icon: information, warning, question, critical,...
}





void MainWindow::on_gotoDialogbutton_clicked()
{
//    TestDialog testdialog;
//    testdialog.setModal(true);
//    testdialog.exec();
    testdialog = new TestDialog(this);
    testdialog ->show();
}


void MainWindow::on_LoginScreenButton_clicked()
{
    loginsccreen = new LoginSreen(this);
    loginsccreen ->show();
}

