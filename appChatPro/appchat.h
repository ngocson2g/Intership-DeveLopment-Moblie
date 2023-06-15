#ifndef APPCHAT_H
#define APPCHAT_H

#include <QMainWindow>

#include <QStackedWidget>

#include "functionacction.h"

QT_BEGIN_NAMESPACE
namespace Ui { class appChat; }
QT_END_NAMESPACE

class appChat : public QMainWindow
{
    Q_OBJECT

public:
    appChat(QWidget *parent = nullptr);
    ~appChat();
signals:
    void get_myAddress();
    void get_listConnectServer();
    void send_messsage(QString message);
    void connect_click(QString address);
private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_connect_clicked();

    void on_pushButton_appchat_clicked();

    void on_pushButton_send_clicked();

    void on_test();

private:
    Ui::appChat *ui;
    functionAcction *acction;

};
#endif // APPCHAT_H
