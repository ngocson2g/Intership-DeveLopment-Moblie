#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "testdialog.h"
#include "loginsreen.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_DeleteTextButton_clicked();

    void on_SendTextButton_clicked();

    void on_MessageBoxButton_clicked();

    //void on_gotoMenuButton_clicked();

    void on_gotoDialogbutton_clicked();

    void on_LoginScreenButton_clicked();

private:
    Ui::MainWindow *ui;
    TestDialog *testdialog;
    LoginSreen *loginsccreen;
};
#endif // MAINWINDOW_H
