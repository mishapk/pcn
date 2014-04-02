/*
* Init DataBase Module
*/
#ifndef INITDB_H
#define INITDB_H
#include <QtSql>
QSqlError initDb()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./data/data.db");

    if (!db.open())
        return db.lastError();

    QStringList tables = db.tables();

    if (tables.contains("users", Qt::CaseInsensitive)
            &&tables.contains("events", Qt::CaseInsensitive)
            &&tables.contains("enterprise", Qt::CaseInsensitive)
            &&tables.contains("objects", Qt::CaseInsensitive)
            &&tables.contains("layout", Qt::CaseInsensitive))
        return QSqlError();

 QSqlQuery q;

   // q.exec("drop table users");
    if (!q.exec(QLatin1String("create table users(id integer primary key autoincrement, login varchar(20),  password varchar(10), admin boolean)")))
        return q.lastError();


    if (!q.exec(QLatin1String("insert into users(login, password, admin) values('Administrator', '0000',1)")))
        qDebug()<< q.lastError();
    if (!q.exec(QLatin1String("insert into users(login, password, admin) values('User', '1111',0)")))
        qDebug()<< q.lastError();

    if (!q.exec(QLatin1String("create table events(id integer primary key autoincrement, dt datetime default (datetime('now','localtime')), ids integer, info varchar, level integer)")))
        qDebug()<< q.lastError();

  // q.exec("drop table enterprise");


    if (!q.exec(QLatin1String("create table enterprise(id integer primary key autoincrement,codpno integer,name varchar, info varchar, address varchar)")))
        return q.lastError();

   //  q.exec("drop table objects");
    if (!q.exec(QLatin1String("create table objects(id integer primary key autoincrement,codpno integer, name varchar,location varchar, info varchar, ident integer references enterprise(id) on delete cascade on update cascade)")))
        return q.lastError();

    if (!q.exec(QLatin1String("create table layout(id integer primary key autoincrement,codpno integer, name varchar, location varchar, info varchar,img blob,filename varchar ,idobj integer references objects(id) on delete cascade on update cascade)")))
        return q.lastError();


    return QSqlError();
}

#endif // INITDB_H
