#include "mainwindow.h"
#include <QApplication>

#include "database.h"

const QString dbPath = "/Users/jholownia/temp/test.db";

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();
    Database d(dbPath);
    d.initialize();

    return a.exec();
}
