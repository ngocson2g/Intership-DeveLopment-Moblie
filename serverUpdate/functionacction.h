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
    write_new_connection(QString newConnection);

public slots:
    newConnection();
    addNewConnection(QTcpSocket *socket);
    Read_Data();

    on_send_clicked(QString address, QString msg);
    on_connection_clicked(QString address);
    on_start_app();
public:
    QTcpServer *Server= new QTcpServer;
    QList <QTcpSocket*> listSocket;
    int Host = 8080;
};

#endif // FUNCTIONACCTION_H
