#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QWizard>

struct Test : public QWizard
{

};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    Test v;
    v.show();
    return a.exec();
}
