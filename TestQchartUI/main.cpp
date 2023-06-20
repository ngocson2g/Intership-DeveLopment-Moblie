#include "testmaininterface.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestMainInterface w;
    w.show();
    return a.exec();
}
