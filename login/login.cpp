#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQlITE");
    mydb.setDatabaseName("C:/Users/ngocs/OneDrive/Documents/internshipMinGroup/Intership-DeveLopment-Moblie/database login SQLite/database.db");

    if (!mydb.open())
        ui -> LoginStatusLable -> setText("error db");
    else
        ui -> LoginStatusLable -> setText("Complete");
}

Login::~Login()
{
    delete ui;
}

