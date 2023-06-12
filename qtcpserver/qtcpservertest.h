#ifndef QTCPSERVERTEST_H
#define QTCPSERVERTEST_H

#include <QMainWindow>

#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QMessageBox>
#include <QList>
#include <QByteArray>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class qtcpservertest; }
QT_END_NAMESPACE

class qtcpservertest : public QMainWindow
{
    Q_OBJECT

public:
    qtcpservertest(QWidget *parent = nullptr);
    ~qtcpservertest();
    void setClient_Connection_List(const QList<QTcpSocket *> &newClient_Connection_List);

private slots:
    void newConnection();
    void Read_Data_From_Socket();
    void on_pushButton_Send_clicked();

private:
    void Add_New_Client_Connection(QTcpSocket *socket);

private:
    Ui::qtcpservertest *ui;

    QTcpServer *TCP_Server;
    QList<QTcpSocket*> Client_Connection_List;
};
#endif // QTCPSERVERTEST_H
