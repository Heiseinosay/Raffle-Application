#include "dbmanager.h"
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <cstring>
#include <iostream>
#include <QSql>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlQuery>
#include <QString>
#include <iostream>
#include <QSqlQueryModel>
#include <QSqlTableModel>
const QString& path = "\\database\\raffle.db";
DbManager::DbManager()
{
    createDB();
    createTable();
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}
DbManager::~DbManager()
{
    if (m_db.isOpen())
    {
        m_db.close();
    }
}
bool DbManager::isOpen() const
{
    return m_db.isOpen();
}
bool DbManager::createDB(){
    sqlite3 *db;
    int rc;

    rc = sqlite3_open("\\database\\raffle.db", &db);

    if( rc ) {
       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
       return(false);
    } else {
       fprintf(stderr, "Opened database successfully\n");
    }
    sqlite3_close(db);
    return(true);
}

bool DbManager::createTable(){
    sqlite3 *db;
    int rc;

    rc = sqlite3_open("\\database\\raffle.db", &db);
    if( rc ) {
       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
       return(false);
    } else {
       fprintf(stderr, "Opened database successfully\n");
    }

    bool execSuccess = false;
    char *sql = (char*) "CREATE TABLE IF NOT EXISTS CONTESTANTS(" \
          "ID          INTEGER     PRIMARY KEY     AUTOINCREMENT," \
          "NAME           TEXT     NOT NULL);";

    execSuccess = executeStatement(rc, db, sql);

    if(execSuccess){
        sql = (char*) "CREATE TABLE IF NOT EXISTS PRIZES("  \
          "ID           INTEGER     PRIMARY KEY     AUTOINCREMENT," \
          "PRIZE           TEXT     NOT NULL);";
        execSuccess = executeStatement(rc, db, sql);
    }
    else{
        execSuccess = false;
    }
    sqlite3_close(db);
    return execSuccess;
}

bool DbManager::executeStatement(int rc, sqlite3 *db, char *sql){
    char *zErrMsg;
    rc = sqlite3_exec(db, sql, NULL, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return false;
    } else {
       fprintf(stdout, "Command executed successfully\n");
       return true;
    }
}
bool DbManager::insertData(std::string tableName, std::string name){
    bool execSuccess = false;
    if (isOpen())
    {
        return false;
    }
    else
    {
        qDebug() << "Database is not open!";
    }
    std::string sqlStr = "";
    QSqlQuery query;
    QString q_name = QString(name.c_str());
    if(tableName == "contestants"){
        query.prepare("INSERT INTO CONTESTANTS(NAME) VALUES (:name);");
    }
    else if(tableName == "prizes"){
        query.prepare("INSERT INTO PRIZES(PRIZE) VALUES (:name);");
    }
    else if(tableName == ""){
        return false;
    }
    query.bindValue(":name", q_name);

    if(query.exec()){
        execSuccess = true;
    }
    else{
        execSuccess = false;
    }
    return execSuccess;
}
QString* DbManager::selectEntry(std::string tableName){
    //bool execSuccess = false;
    QString *output;
    QString sql = "";
    qDebug() << "works here";
    QSqlTableModel query;
    if(tableName.compare("contestants") == 0){
        sql = "CONTESTANTS";
        qDebug() << "goes here";
    }
    else if(tableName == "prizes"){
        sql = "PRIZES";
    }
    qDebug() << "Still works here";
   //QSqlTableModel query;
    //query.setQuery(sql);
    query.setTable(sql);
    query.setSort(1, Qt::AscendingOrder);
    query.select();
    qDebug() << "Still works here 2";
    //QSqlRecord rows = query.record();
    //std::cout << rows.count();
    output = new QString[query.rowCount()];
    qDebug() << "Still works here 3";
    qDebug() << query.rowCount();
    for (int x = 0; x < query.rowCount(); x++)
    {
        qDebug() << "Still works here " << x;
        //int id = query.record(x).value("id").toInt();
        QString name = query.record(x).value("NAME").toString();
        output[x] = name;
        qDebug() << output[x];

    }
    qDebug() << "Prolly didn't enter loop";
    return output;
}
bool DbManager::updateEntry(std::string tableName, int id){

    bool execSuccess = false;
    if (isOpen())
    {
        return false;
    }
    else
    {
        qDebug() << "Database is not open!";
    }
    QSqlQuery query;
    QString q_id = QString::number(id);
    if(tableName == "contestants"){
        query.prepare("UPDATE NAME FROM CONTESTANTS WHERE ID=(:id);");
    }
    else if(tableName == "prizes"){
        query.prepare("UPDATE PRIZE FROM PRIZES WHERE ID=(:id);");
    }
    query.bindValue(":id", q_id);
    if(query.exec()){
        execSuccess = true;
    }
    else{
        execSuccess = false;
    }
    return execSuccess;
}

bool DbManager::deleteEntry(std::string tableName, int id){

    bool execSuccess = false;
    if (isOpen())
    {
        return false;
    }
    else
    {
        qDebug() << "Database is not open!";
    }
    QSqlQuery query;
    QString q_id = QString::number(id);
    if(tableName == "contestants"){
        query.prepare("DELETE * FROM CONTESTANTS WHERE ID=(:id);");
    }
    else if(tableName == "prizes"){
        query.prepare("DELETE * FROM PRIZES WHERE ID=(:id);");
    }
    query.bindValue(":id", q_id);
    return execSuccess;
    if(query.exec()){
        execSuccess = true;
    }
    else{
        execSuccess = false;
    }
    return execSuccess;
}


