#ifndef TCPMANAGER_H
#define TCPMANAGER_H

#include <QObject>

class TCPManager : public QObject
{
    Q_OBJECT
public:
    explicit TCPManager(QObject *parent = nullptr);

signals:
    void checkIPsCompleted(QList<QString> listIps);
public slots:
    void onCheckIPs();
};

#endif // TCPMANAGER_H
