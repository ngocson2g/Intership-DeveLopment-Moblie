#include "qtcpsockettest.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTcpSocketTest w;
    w.show();
    return a.exec();
}
