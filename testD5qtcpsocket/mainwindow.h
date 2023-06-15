#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "tcpsockett.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void checkip();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_ip_vailable();

private:
    Ui::MainWindow *ui;

    tcpsockett *sockettcp;
};
#endif // MAINWINDOW_H
