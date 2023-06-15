#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <tcpmanager.h>

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
    void checkIps();
private slots:
    void on_ips_available(QList<QString> listIps);

private:
    Ui::MainWindow *ui;

    tcpManager *TCPManager;
};
#endif // MAINWINDOW_H
