#include "testd3.h"
#include "ui_testd3.h"

TestD3::TestD3(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TestD3)
{
    ui->setupUi(this);

    {
        //cach 1: QNetworkInterface
        QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();

        foreach (const QNetworkInterface& interface, interfaces) {
            if (interface.flags().testFlag(QNetworkInterface::IsUp) &&
                !interface.flags().testFlag(QNetworkInterface::IsLoopBack)) {
                QList<QNetworkAddressEntry> addresses = interface.addressEntries();

                foreach (const QNetworkAddressEntry& address, addresses) {
                    if (address.ip().protocol() == QAbstractSocket::IPv4Protocol) {
                        qDebug() << "IP Address: " << address.ip().toString();
                        ui->textEdit_c1->append("IP Address: " +  address.ip().toString() + "\n");
                    }
                }
                qDebug() << "\n";
            }
        }
    }


    {
        //cach 2: QHostInfo
        QHostInfo hostInfo = QHostInfo::fromName(QHostInfo::localHostName());

        if (hostInfo.error() == QHostInfo::NoError) {
            QList<QHostAddress> addresses = hostInfo.addresses();

            foreach (const QHostAddress& address, addresses) {
                if (address.protocol() == QAbstractSocket::IPv4Protocol) {
                    qDebug() << "IP Address: " << address.toString();
                    ui->textEdit_c2->append("IP Address: " + address.toString() + "\n");
                }
            }
            qDebug() << "\n";
        } else {
            qDebug() << "Failed to retrieve IP address.";
        }
    }

    {
        //cach 3: QNetworkInterface
        QString Iaddress;
        QList<QHostAddress> ipAddressList = QNetworkInterface::allAddresses();

        foreach (const QHostAddress& address, ipAddressList) {
            if (address != QHostAddress::LocalHost && address.toIPv4Address()) {
                Iaddress = address.toString();
                qDebug() << "IP Address: " << address.toString();
                ui->textEdit_c3->append("IP Address: " + address.toString() + "\n");

            }
            qDebug() << Iaddress <<"...\n";
        }
    }

}

TestD3::~TestD3()
{
    delete ui;
}

