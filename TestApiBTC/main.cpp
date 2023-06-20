#include "testapi.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestAPI w;
    w.show();
    return a.exec();
}
