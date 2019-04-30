#include "pelota.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pelota w;
    w.show();

    return a.exec();
}
