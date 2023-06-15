#ifndef TCPMANAGER_H
#define TCPMANAGER_H

#include <QObject>

#include <QtNetwork/QHostAddress>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QNetworkInterface>
#include <QMessageBox>
#include <QList>
#include <QString>

class tcpManager : public QObject
{
    Q_OBJECT
public:
    explicit tcpManager(QObject *parent = nullptr);

signals:
    void checkIPsComplete(QList<QString> listIps);
public slots:
    void onCheckIPs();
public:
    QTcpSocket *tcpSocket;
    QString myIPAddress;
    QString lIPAddress;

};

#endif // TCPMANAGER_H
