#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/ngocs/OneDrive/Tài liệu/internshipMinGroup/Intership-DeveLopment-Moblie/database login SQLite/database.db");

    QPixmap pix("C:/Users/ngocs/OneDrive/Hình ảnh/Backgroundtestlogin.jpg");
    ui->LablePix->setPixmap(pix);

    if (!mydb.open()){
        ui->LoginStatusLable->setText("Failer to database...");
    }else {
        ui->LoginStatusLable->setText("");
    }

}

Login::~Login()
{
    delete ui;
}


void Login::on_LoginButton_clicked()
{
    QString userName, passWord;
    userName = ui ->UserNameInput->text();
    passWord = ui ->PassWordInput->text();

    if (userName == ""){
        ui->LoginStatusLable->setText("Please write userame!");
        return;
    }

    if (passWord == ""){
        ui->LoginStatusLable->setText("Please write password!");
        return;
    }

    if (!mydb.isOpen()){
        /////#### infinicate failer database
        return;
    }

        ui->LoginStatusLable->setText("123");

    QSqlQuery qry;
    if (qry.exec("select * from logintable where username ='"+ userName +"' and password == '"+passWord+"'")) {
        int count = 0;
        while (qry.next()) {
            count ++;
        }

        if (count == 1) {
            ui -> LoginStatusLable -> setText("loading...");
        }
        if (count > 1) {
            ui ->LoginStatusLable ->setText("###");
        }
        if (count < 1) {
            ui ->LoginStatusLable ->setText("username failer or password failer");
        }
    }
}

