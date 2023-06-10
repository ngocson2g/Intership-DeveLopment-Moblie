#ifndef QTCPSOCKETTEST_H
#define QTCPSOCKETTEST_H

#include <QMainWindow>

#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QHostAddress>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui { class QTcpSocketTest; }
QT_END_NAMESPACE

class QTcpSocketTest : public QMainWindow
{
    Q_OBJECT

public:
    QTcpSocketTest(QWidget *parent = nullptr);
    ~QTcpSocketTest();

private slots:
    void on_pushButton_Send_clicked();
    void Read_Data_From_Socket();
private:
    Ui::QTcpSocketTest *ui;

    QTcpSocket *TCPSocket;
};
#endif // QTCPSOCKETTEST_H
