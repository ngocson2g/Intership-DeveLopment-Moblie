#ifndef TESTD3_H
#define TESTD3_H

#include <QMainWindow>

#include <QtNetwork/QNetworkInterface>
#include <QDebug>
#include <QList>
#include <QtNetwork/QHostInfo>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class TestD3; }
QT_END_NAMESPACE

class TestD3 : public QMainWindow
{
    Q_OBJECT

public:
    TestD3(QWidget *parent = nullptr);
    ~TestD3();

private:
    Ui::TestD3 *ui;
};
#endif // TESTD3_H
