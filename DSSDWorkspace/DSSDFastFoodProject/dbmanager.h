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
 * @author Sean O'Hearn
 *
 * Manages the database by allowing the manipulation of data within the database.
 * Uses singleton desgin pattern.
 */

class DBManager
{
public:
    static DBManager* getInstance();
    /**
     * @brief uploadFileToDatabase
     * @param filePath
     */
    void uploadFileToDatabase(const QString& filePath);
    /**
     * @brief databaseToRestaurants
     *
     * Uses the database to populate our vector filled with Restaurant objects
     */
    void databaseToRestaurants();
    /**
     * @brief getRestaurants
     * @return restaurants
     */
    std::vector<Restaurant> getRestaurants();
    void testDB();
    /**
     * @brief DeleteFromDb
     * @param name
     */
    void DeleteFromDb(QString name);

private:
    static DBManager* database;
    DBManager(const QString& filePath);
    QSqlDatabase restaurantDatabase;
    std::vector<Restaurant> restaurants;
};

#endif // DBMANAGER_H
