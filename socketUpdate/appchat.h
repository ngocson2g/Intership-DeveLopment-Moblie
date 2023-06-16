#ifndef APPCHAT_H
#define APPCHAT_H

#include <QMainWindow>

#include "functionacction.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Appchat; }
QT_END_NAMESPACE

class Appchat : public QMainWindow
{
    Q_OBJECT
signals:
    start_clicked();
    connect_clicked();
    send_clicked(QString msg);

public:
    Appchat(QWidget *parent = nullptr);
    ~Appchat();

private slots:
    void on_pushButton_send_clicked();

    void on_pushButton_connect_clicked();

    on_write_msg(bool user, QString msg);

    void on_pushButton_back_clicked();

private:
    Ui::Appchat *ui;

    functionAcction *acction = new functionAcction();
};
#endif // APPCHAT_H
