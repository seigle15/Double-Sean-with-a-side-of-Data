#include "dbmanager.h"

DBManager* DBManager::database = NULL;

DBManager::DBManager(const QString& filePath)
{
    restaurantDatabase = QSqlDatabase::addDatabase("QSQLITE");
    restaurantDatabase.setDatabaseName(filePath);

    if(!restaurantDatabase.open())
    {
        qDebug() << "Error: Connection with database has failed...";
    }
    else
    {
        qDebug() <<"Connection to database successful..";
    }
}

DBManager* DBManager::getInstance()
{
    if(database == NULL)
    {
        // for now this will have to be the absolute path, im tired lol
        database = new DBManager("C:/Users/Sean/Desktop/Double-Sean-with-a-side-of-Data/DSSDWorkspace/DSSDFastFoodProject/restaurantDB.db");
        // database = new DBManager("restaurantDB.db"); // if instantiated in this manner, wont allow me to execute queries...but database opens
        // D:\\CS1D Project #1\\Double-Sean-with-a-side-of-Data-master\\DSSDWorkspace\\DSSDFastFoodProject\\restaurantDB.db
        return database;
    }
    else
    {
        return database;
    }
}

void DBManager::uploadFileToDatabase(const QString &filePath)
{
    QString restaurantName;
    QString ID;
    QString destination;
    QString distanceInMiles;
    QString distanceToSaddleback;
    QString numOfMenuItems;
    QString itemName;
    QString price;

    QFile inFile(filePath);

    if(!inFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Could not open the file for writing to database...";
        return;
    }

    QSqlQuery query(restaurantDatabase);
    QTextStream in(&inFile);

    if(!restaurantDatabase.open())
    {
        qDebug() << "Error: Connection with the database failed...";
        return;
    }

    QString temp;
    while(!in.atEnd())
    {
        QStringList text = in.readLine().split(": ");
        restaurantName = text[1];

       // qDebug() << "Name read as: " << restaurantName;

        text = in.readLine().split("number ");
        ID = text[1];
        qDebug() << "ID read as: " << ID;

        text = in.readLine().split("- ");
        QString countDestinations = text[1];
        bool isOk;
        int count = countDestinations.toInt(&isOk, 10);

       // qDebug() << "Count read as: " << count;
       // qDebug() << "int value is still: " << intCount;

        for(int i = 0; i < count; i++)
        {
            text = in.readLine().split(" ");
            destination = text[0];
            distanceInMiles = text[1];

           // qDebug() << "destination ID read as: " << destination;
           // qDebug() << "distance in miles read as: " << distanceInMiles;

            query.prepare("INSERT INTO Distance (DistanceInMiles, RestaurantIDFrom, RestaurantIDTo) VALUES(:Dist, :From, :To)");
            query.bindValue(":Dist", distanceInMiles);
            query.bindValue(":From", ID);
            query.bindValue(":To", destination);

            if(query.exec())
            {
                qDebug() << "Data saved to Distance table...";
            }
            else
            {
                qDebug() << "Write failed...";
                qDebug() << query.lastError();
                qDebug() << query.executedQuery();
            }
        }

        text = in.readLine().split(" ");
        distanceToSaddleback = text[0];

      //  qDebug() << "Distance to saddleback read as: " << distanceToSaddleback;

        text = in.readLine().split(" ");
        numOfMenuItems = text[0];
        int numOfItems = numOfMenuItems.toInt(&isOk, 10);

        for(int i = 0; i < numOfItems; i++)
        {
            itemName = in.readLine();
            price = in.readLine();

           // qDebug() << "item name read as: " << itemName;
           // qDebug() << "price read as: " << price;

            query.prepare("INSERT INTO MenuItems (ItemName, RestaurantID, Price) VALUES(:Name, :RestID, :Cost)");
            query.bindValue(":Name", itemName);
            query.bindValue(":RestID", ID);
            query.bindValue(":Cost", price);

            if(query.exec())
            {
                qDebug() << "Data saved to MenuItems table...";
            }
            else
            {
                qDebug() << "Write failed...";
                qDebug() << query.lastError();
                qDebug() << query.executedQuery();
            }
        }

        query.prepare("INSERT INTO Restaurant (Name, RestaurantID, DistanceFromSC, MenuSize, Distances) VALUES(:Name, :RestID, :DistFromSC, :menuSize, :distCount)");
        query.bindValue(":Name", restaurantName);
        query.bindValue(":RestID", ID);
        query.bindValue(":DistFromSC", distanceToSaddleback);
        query.bindValue(":menuSize", numOfMenuItems);
        query.bindValue(":distCount", countDestinations);

        if(query.exec())
        {
            qDebug() << "Data saved to Restaurant table...";
        }
        else
        {
            qDebug() << "Write failed...";
            qDebug() << query.lastError();
            qDebug() << query.executedQuery();
        }
        in.readLine();
    }
    inFile.flush();
    inFile.close();
}

void DBManager::databaseToRestaurants()
{
    QSqlQuery restaurantQuery;
    QSqlQuery distanceQuery;
    QSqlQuery menuQuery;

    restaurantQuery.prepare("SELECT * FROM Restaurant");
    if(!restaurantQuery.exec())
    {
        qDebug() << "Unable to execute query";
        qDebug() << restaurantQuery.lastError();
        qDebug() << restaurantQuery.executedQuery();
    }

    distanceQuery.prepare("SELECT * FROM Distance");
    if(!distanceQuery.exec())
    {
        qDebug() << "Unable to execute query";
        qDebug() << distanceQuery.lastError();
        qDebug() << distanceQuery.executedQuery();
    }

    menuQuery.prepare("SELECT * FROM MenuItems");
    if(!menuQuery.exec())
    {
        qDebug() << "Unable to execute query";
        qDebug() << menuQuery.lastError();
        qDebug() << menuQuery.executedQuery();
    }

    while(restaurantQuery.next())
    {
        Restaurant restaurant;

        restaurant.setName(restaurantQuery.value(0).toString());
        restaurant.setID(restaurantQuery.value(1).toInt());
        restaurant.setDistanceFromSaddleback(restaurantQuery.value(2).toString().toDouble());
        restaurant.setMenuSize(restaurantQuery.value(3).toInt());
        restaurant.setTotalDistances(restaurantQuery.value(4).toInt());

        int count = 0;
        while(count < restaurant.getTotalDistances())
        {
            distanceQuery.next();
            Distance distance;
            distance.setDistanceInMiles(distanceQuery.value(0).toDouble());
            distance.setRestaurantIDFrom(restaurant.getID());
            distance.setRestaurantIDTo(distanceQuery.value(2).toInt());
            restaurant.addDistance(distance);
            count++;
        }

        count = 0;
        while(count < restaurant.getMenuSize())
        {
            menuQuery.next();
            MenuItem menuItem;
            menuItem.setItemName(menuQuery.value(0).toString());
            menuItem.setRestaurantID(menuQuery.value(1).toInt());
            menuItem.setPrice(menuQuery.value(2).toDouble());
            restaurant.addMenuItem(menuItem);
            count++;
        }
        restaurants.push_back(restaurant);
    }
}

void DBManager::testDB()
{
    for(int i = 0; i < restaurants.size(); i++)
    {
        qDebug() << restaurants.at(i).getName();
        qDebug() << "Restaurant ID: " << restaurants.at(i).getID();
        qDebug() << "Distances to other restaurants: " << restaurants.at(i).getTotalDistances();

        int totalDistances = restaurants.at(i).getTotalDistances();
        for(int j = 0; j < totalDistances; j++)
        {
            qDebug() << restaurants.at(i).getDistances().at(j).getRestaurantIDTo() << " " << restaurants.at(i).getDistances().at(j).getDistanceInMiles();
        }

        qDebug() << "Distance from saddleback: " << restaurants.at(i).getDistanceFromSaddleback();

        int menuSize = restaurants.at(i).getMenuSize();
        qDebug() << "Menu size: " << menuSize;
        for(int k = 0; k < menuSize; k++)
        {
            qDebug() << restaurants.at(i).getMenu().at(k).getRestaurantID()
                     << " " << restaurants.at(i).getMenu().at(k).getItemName()
                     << " " << restaurants.at(i).getMenu().at(k).getPrice();
        }
        qDebug() << "";
    }
}

void DBManager::DeleteFromDb(QString name)
{
    QSqlQuery query;

    query.prepare("DELETE FROM Restaurant Where Name = :Restaurant");

    query.bindValue(":Restaurant", name);

    query.exec();
    qDebug() << query.lastError();
    qDebug() << query.executedQuery();

    std::vector<Restaurant>::iterator it;
    for(it = restaurants.begin(); it != restaurants.end(); it++)
    {
        if(it->getName() == name)
        {
            restaurants.erase(it);
            break;
        }
    }
}

std::vector<Restaurant> DBManager::getRestaurants()
{
    return restaurants;
}
