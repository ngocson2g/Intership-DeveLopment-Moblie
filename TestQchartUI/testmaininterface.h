#ifndef TESTMAININTERFACE_H
#define TESTMAININTERFACE_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class TestMainInterface; }
QT_END_NAMESPACE

class TestMainInterface : public QMainWindow
{
    Q_OBJECT

public:
    TestMainInterface(QWidget *parent = nullptr);
    ~TestMainInterface();

private slots:
    void on_pushButton_Back_clicked();

    void on_pushButton_Next_clicked();

private:
    Ui::TestMainInterface *ui;
};
#endif // TESTMAININTERFACE_H
