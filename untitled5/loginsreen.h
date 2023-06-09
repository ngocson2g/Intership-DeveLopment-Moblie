#ifndef LOGINSREEN_H
#define LOGINSREEN_H

#include <QDialog>

namespace Ui {
class LoginSreen;
}

class LoginSreen : public QDialog
{
    Q_OBJECT

public:
    explicit LoginSreen(QWidget *parent = nullptr);
    ~LoginSreen();

private:
    Ui::LoginSreen *ui;
};

#endif // LOGINSREEN_H
