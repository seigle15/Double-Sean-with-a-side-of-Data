#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <QString>
#include <vector>
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
