#ifndef APPCHAT_H
#define APPCHAT_H

#include <QMainWindow>

#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QList>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QtNetwork/QNetworkInterface>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui { class Appchat; }
QT_END_NAMESPACE

class Appchat : public QMainWindow
{
    Q_OBJECT

public:
    Appchat(QWidget *parent = nullptr);
    ~Appchat();

private slots:
    void Read_Data_From_Socket();
    void Read_Data_From_Server();

    void Send_Data_To_Socket();
    void Send_Data_To_Server();

    bool Check_Connect(QTcpSocket *socket);

    void Create_List_Connect_Client(QTcpSocket *socket);

    void on_pushButton_Send_Msg_clicked();

    void on_pushButton_Connect_clicked();

    void newConnection();
    void Add_New_Connect(QTcpSocket *socket);

    QString Get_My_IPaddress();

private:
    Ui::Appchat *ui;

    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;

    QString myAddress;
    QString lAddress;
    QList<QHostAddress> ListAddress_Client;
    QList<QHostAddress> ListAddress_Server;

    int Host = 8080;

    bool check_app = false;
};
#endif // APPCHAT_H
