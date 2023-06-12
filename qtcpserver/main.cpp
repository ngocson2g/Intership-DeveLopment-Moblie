#include "qtcpservertest.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtcpservertest w;
    w.show();
    return a.exec();
}
