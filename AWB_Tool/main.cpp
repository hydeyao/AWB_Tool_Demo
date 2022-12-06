#include "AWB_Tool.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AWB_Tool w;
    w.show();
    return a.exec();
}
