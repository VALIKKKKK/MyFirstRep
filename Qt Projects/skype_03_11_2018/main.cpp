#include <QCoreApplication>
#include "my_algoritms.h"
#include <vector>
#include <iostream>
#include <tests.h>
#include <set>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    run_all_test();

    return a.exec();
}
