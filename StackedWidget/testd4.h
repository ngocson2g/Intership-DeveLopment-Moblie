#ifndef TESTD4_H
#define TESTD4_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class testD4; }
QT_END_NAMESPACE

class testD4 : public QMainWindow
{
    Q_OBJECT

public:
    testD4(QWidget *parent = nullptr);
    ~testD4();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::testD4 *ui;
};
#endif // TESTD4_H
