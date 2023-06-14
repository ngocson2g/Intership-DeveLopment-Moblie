#include "testd5.h"

testd5::testd5(QObject *parent)
    : QObject{parent}
{

}

void testd5::test()
{
    qDebug() << "test";
}
