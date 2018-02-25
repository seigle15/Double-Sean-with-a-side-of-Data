#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <QString>
#include <vector>
#include <string>
#include "distance.h"
#include "menuitem.h"

/**
 * @brief The Restaurant class
 * Container for restaurant objects
 */

class Restaurant
{
public:
    Restaurant();
    Restaurant(QString name, int id, double distanceFromSaddleback, int menuSize, int totalDistances);
    void setName(QString name);
    void setID(int id);
    void setDistanceFromSaddleback(double distanceFromSaddleback);
    void setMenuSize(int menuSize);
    void setTotalDistances(int totalDistances);
    QString getName();
    int getID();
    double getDistanceFromSaddleback();
    int getMenuSize();
    int getTotalDistances();
    void addDistance(Distance distance);
    void addMenuItem(MenuItem menuItem);
    std::vector<Distance> getDistances();
    std::vector<MenuItem> getMenu();

private:
    QString name;
    int id;
    double distanceFromSaddleback;
    int menuSize;
    int totalDistances;
    std::vector<MenuItem> menu;
    std::vector<Distance> distances;
};

#endif // RESTAURANT_H
