#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    appchat = new AppChat(this);
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_pushButton_clicked()
{

    appchat->show();
}

