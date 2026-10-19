#include "mywidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mywidget w;
    w.show();
    return QApplication::exec();
}
