#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class Database
{
public:
    Database(const QString& path);
    ~Database();

    void initialize();

private:
    QString m_dbPath;
};

#endif // DATABASE_H
