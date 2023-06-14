#ifndef TESTD5_H
#define TESTD5_H

#include <QObject>
#include <QtNetwork/QTcpSocket>

class testd5 : public QObject
{
    Q_OBJECT
public:
    explicit testd5(QObject *parent = nullptr);

signals:

private slots:
    void Read_Data_From_Socket();

private:
    QTcpSocket *tcpSocket;


};

#endif // TESTD5_H
