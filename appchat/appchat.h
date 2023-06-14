#ifndef APPCHAT_H
#define APPCHAT_H

#include <QMainWindow>

#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QMessageBox>
#include <QList>
#include <QByteArray>
#include <QString>
#include <QHostAddress>
#include <QtNetwork/QNetworkInterface>
#include <QDebug>

#include "tcpmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class AppChat; }
QT_END_NAMESPACE

class AppChat : public QMainWindow
{
    Q_OBJECT

public:
    AppChat(QWidget *parent = nullptr);
    ~AppChat();

signals:
    void checkIps();

private slots:
    bool Read_Data_From_Socket();

    bool Read_Data_From_Server();
    void newConnection();
    void on_pushButton_Send_clicked();

    void on_pushButton_check_clicked();

    void on_pushButton_Connect_clicked();

    bool check_connect();

    void on_pushButton_back_clicked();

    void on_pushButton_open_app_clicked();

    void on_ips_available(QList<QString> listIps);

private:
    void Add_New_Client_Connection(QTcpSocket *socket);

private:
    Ui::AppChat *ui;

    QTcpServer *TCPServer;
    QList<QTcpSocket*> Client_Connection_List;

    QTcpSocket *TCPSocket;
    QString Iaddress;
    QString Laddress;

    int Host = 8080;
    TCPManager *tcpManager = nullptr;
};

#endif // APPCHAT_H
