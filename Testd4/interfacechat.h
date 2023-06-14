#ifndef INTERFACECHAT_H
#define INTERFACECHAT_H

#include <QDialog>

namespace Ui {
class interfaceChat;
}

class interfaceChat : public QDialog
{
    Q_OBJECT

public:
    explicit interfaceChat(QWidget *parent = nullptr);
    ~interfaceChat();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::interfaceChat *ui;

};

#endif // INTERFACECHAT_H
