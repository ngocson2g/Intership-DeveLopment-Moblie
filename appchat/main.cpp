#include "appchat.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AppChat w;
    w.show();
    return a.exec();
}
