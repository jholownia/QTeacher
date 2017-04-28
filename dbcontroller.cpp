#include "dbcontroller.h"

#include <QFile>
#include <QDebug>

const QString sqlPath = "/Users/jholownia/temp/dbtest.sql";


Database::Database(const QString &path) :
    m_dbPath(path)
{

}

Database::~Database()
{

}

void Database::initialize()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(m_dbPath);
    bool ok = db.open();

    if (!ok)
    {
        qCritical() << "Error creating database: " << db.lastError();
    }

    QSqlQuery q(db);

    QFile sqlFile(sqlPath);

    if (!sqlFile.open(QFile::ReadOnly))
    {
        qCritical() << "Can't read sql file: " << sqlFile.errorString();
        return;
    }

    QString sql(sqlFile.readAll());

    QStringList statements = sql.split(';');

    for (auto s = statements.cbegin(); s != statements.cend(); ++s)
    {
        bool ok = true;

        if (!s->trimmed().isEmpty())
        {
            ok = q.exec(s->trimmed());
        }

        if (!ok)
        {
            qCritical() << q.lastError();
        }
    }
}
