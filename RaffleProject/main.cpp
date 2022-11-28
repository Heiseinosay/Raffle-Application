#include "mainwindow.h"
#include "dbmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DbManager dbm;
    MainWindow w;

    w.show();
    return a.exec();
}
