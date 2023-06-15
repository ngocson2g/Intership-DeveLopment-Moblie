#include "tcpmanager.h"

tcpManager::tcpManager(QObject *parent)
    : QObject{parent}
{

}

void tcpManager::onCheckIPs()
{
    QList<QHostAddress> ipAddressList = QNetworkInterface::allAddresses();
    foreach(const QHostAddress& address, ipAddressList) {
        if (address != QHostAddress::LocalHost && address.toIPv4Address()) {
            myIPAddress = address.toString();
        }
    }
}
