#ifndef APPCHAT_H
#define APPCHAT_H

#include <QDialog>
#include "interfacechat.h"


namespace Ui {
class AppChat;
}

class AppChat : public QDialog
{
    Q_OBJECT

public:
    explicit AppChat(QWidget *parent = nullptr);
    ~AppChat();

private slots:
    void on_pushButton_Chat_clicked();

    void on_pushButton_exit_appchat_clicked();

private:
    Ui::AppChat *ui;
    interfaceChat *interfacechat;


};

#endif // APPCHAT_H
