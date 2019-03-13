#include <QCoreApplication>
#include <iostream>
#include <QtSql>
#include <QSqlDatabase>
#include "my_database.h"

auto main(int argc, char *argv[]) -> int
{
    QCoreApplication a(argc, argv);
    MyDatabase db;
    db.conect_to_database();

    return a.exec();
}
