#ifndef APPCHAT_H
#define APPCHAT_H

#include <QMainWindow>

#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QMessageBox>
#include <QList>
#include <QByteArray>
#include <QString>>



QT_BEGIN_NAMESPACE
namespace Ui { class AppChat; }
QT_END_NAMESPACE

class AppChat : public QMainWindow
{
    Q_OBJECT

public:
    AppChat(QWidget *parent = nullptr);
    ~AppChat();

private slots:
    void Read_Data_From_Socket();

    void Read_Data_From_Server();
    void newConnection();
    void on_pushButton_Send_clicked();

private:
    void Add_New_Client_Connection(QTcpSocket *socket);

private:
    Ui::AppChat *ui;

    QTcpServer *TCPServer;
    QList<QTcpSocket*> Client_Connection_List;

    QTcpSocket *TCPSocket;
};
#endif // APPCHAT_H
