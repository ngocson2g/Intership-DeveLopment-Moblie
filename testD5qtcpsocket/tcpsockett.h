#ifndef TCPSOCKETT_H
#define TCPSOCKETT_H

#include <QObject>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QHostAddress>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include <QList>

class tcpsockett : public QObject
{
    Q_OBJECT
public:
    explicit tcpsockett(QObject *parent = nullptr);

//signals:
private slots:
    void Read_Data_From_Socket();
    void on_acction_send_cliecked();
    void on_acction_connect_clicked();
signals:
    void checkip_complete(QList<QString> list);
public slots:
    void on_checkip();
private:
    QTcpSocket *TCPSocket;
};

#endif // TCPSOCKETT_H
