#include "testsort.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestSort w;
    w.show();
    return a.exec();
}
