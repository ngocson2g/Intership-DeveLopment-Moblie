#include "appchat.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    appChat w;
    w.show();
    return a.exec();
}
