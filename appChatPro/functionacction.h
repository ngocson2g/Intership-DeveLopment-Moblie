#ifndef FUNCTIONACCTION_H
#define FUNCTIONACCTION_H

#include <QObject>

#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QHostAddress>
#include <QtNetwork/QNetworkInterface>

#include <QMessageBox>
#include <QString>
#include <QList>

class functionAcction : public QObject
{
    Q_OBJECT
public:
    explicit functionAcction(QObject *parent = nullptr);

signals:
    void test();

public slots:
    void on_get_myAddress();
    void on_get_listConnectServer();
//    void on_send_message(QString message);
    bool on_connect_click(QString address);
    QString Read_Data_From_Server();
    QString Read_Data_From_Socket();
    bool check_connect();
public:
    QTcpServer *tcpServer = new QTcpServer();
    QTcpSocket *tcpSocket = new QTcpSocket();
    QString myAddress;
    QList<QTcpSocket> listConnectSocket; // socket
    QList<QString> listConnectServer; //address

    int Host = 8080; // default

    bool check_app = false;
};

#endif // FUNCTIONACCTION_H
