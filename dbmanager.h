#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDriver>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <vector>
#include <string>

#include "restaurant.h"

/**
 * @brief The DBManager class
 * Manages the database by allowing the manipulation of data within the database.
 * Uses singleton desgin pattern.
 */

class DBManager
{
public:
    static DBManager* getInstance();
    void uploadFileToDatabase(const QString& filePath);
    void databaseToRestaurants();
    std::vector<Restaurant> getRestaurants();
    void testDB();
    void DeleteFromDb(QString name);

private:
    static DBManager* database;
    DBManager(const QString& filePath);
    QSqlDatabase restaurantDatabase;
    std::vector<Restaurant> restaurants;
};

#endif // DBMANAGER_H
