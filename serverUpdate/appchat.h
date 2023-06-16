#ifndef APPCHAT_H
#define APPCHAT_H

#include <QMainWindow>

#include "functionacction.h"

QT_BEGIN_NAMESPACE
namespace Ui { class appchat; }
QT_END_NAMESPACE

class appchat : public QMainWindow
{
    Q_OBJECT

public:
    appchat(QWidget *parent = nullptr);
    ~appchat();

signals:
    send_clicked(QString address, QString msg);
    connection_clicked(QString address);
    start_app();

private slots:
    on_write_msg(bool user, QString msg);
    on_write_new_connection(QString newConnection);

    void on_pushButton_send_clicked();

    void on_pushButton_connect_clicked();
    void on_pushButton_appchat_clicked();

private:
    Ui::appchat *ui;

    functionAcction *Acction = new functionAcction();
};
#endif // APPCHAT_H
