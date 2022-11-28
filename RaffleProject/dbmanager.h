#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <sqlite3.h>
#include <cstring>
#include <iostream>
#include <QSql>
#include <QSqlDatabase>
class DbManager
{
public:
    DbManager();
    ~DbManager();
    bool isOpen() const;
    bool createDB();
    bool createTable();
    static QString *selectEntry(std::string tableName);
    bool insertData(std::string tableName, std::string name);
    bool updateEntry(std::string tableName, int id);
    bool deleteEntry(std::string tableName, int id);
    bool executeStatement(int rc, sqlite3 *db, char *sql);

private:
    QSqlDatabase m_db;

};

#endif // DBMANAGER_H
