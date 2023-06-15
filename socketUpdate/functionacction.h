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
    write_msg(bool user, QString msg);

public slots:
    on_start_clicked();
    on_connect_clicked();
    on_send_clicked(QString msg);

    void Read_Data();
public:
    QTcpSocket *tcpSocket = new QTcpSocket();
};

#endif // FUNCTIONACCTION_H
