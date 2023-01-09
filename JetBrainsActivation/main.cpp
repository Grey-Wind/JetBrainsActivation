#include "jetbrainsactivation.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JetBrainsActivation w;
    w.show();
    return a.exec();
}
