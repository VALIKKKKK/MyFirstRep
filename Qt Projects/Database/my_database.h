#ifndef MY_DATABASE_H
#define MY_DATABASE_H
#include <QSql>
#include <QSqlDatabase>
#include <QFile>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>
#include <sql_queres.h>

struct MyDatabase
{
    QSqlDatabase db;
    bool open_database();
    bool close_database();
    bool create_database();
    bool restore_database();
    void conect_to_database();
    void create_table();
};

void MyDatabase::conect_to_database()
{
    if(!QFile("D:/Projects/Qt Projects/Database/MyDB.db").exists())
    {
        restore_database();
        qDebug() << "restore_database";
    }
    else
    {
        open_database();
        qDebug() << "open_database";
    }
}

void MyDatabase::create_table()
{
     QSqlQuery query;
     query.exec(GROUPS_QUERY);
     query.exec(STUDENT_QUERY);
     query.exec(SUBJECTS);
}

bool MyDatabase::open_database()
{
    qDebug() << "database_open";
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("MyDB");
    db.setDatabaseName("D:/Projects/Qt Projects/Database/MyDB.db");
    return db.open();

}

bool MyDatabase::close_database()
{

}

bool MyDatabase::restore_database()
{
    open_database();
    create_table();
}

#endif // MY_DATABASE_H
