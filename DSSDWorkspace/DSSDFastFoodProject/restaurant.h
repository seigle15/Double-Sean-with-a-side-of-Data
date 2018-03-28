#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <QString>
#include <vector>
#include <string>
#include "distance.h"
#include "menuitem.h"

/**
 * @brief The Restaurant class
 * @author Sean O'Hearn
 * Container for restaurant objects
 */

class Restaurant
{
public:
    Restaurant();
    Restaurant(QString name, int id, double distanceFromSaddleback, int menuSize, int totalDistances);
    /**
     * @brief setName
     * @param name
     */
    void setName(QString name);
    /**
     * @brief setID
     * @param id
     */
    void setID(int id);
    /**
     * @brief setDistanceFromSaddleback
     * @param distanceFromSaddleback
     */
    void setDistanceFromSaddleback(double distanceFromSaddleback);
    /**
     * @brief setMenuSize
     * @param menuSize
     */
    void setMenuSize(int menuSize);
    /**
     * @brief setTotalDistances
     * @param totalDistances
     */
    void setTotalDistances(int totalDistances);
    /**
     * @brief setVisited
     * @param visited
     */
    void setVisited(bool visited){this->visited = visited;}
    QString getName();
    /**
     * @brief getID
     * @return ID
     */
    int getID();
    /**
     * @brief getDistanceFromSaddleback
     * @return distanceFromSaddleback
     */
    double getDistanceFromSaddleback();
    /**
     * @brief getMenuSize
     * @return menuSize
     */
    int getMenuSize();
    /**
     * @brief getTotalDistances
     * @return totalDistances
     */
    int getTotalDistances();
    /**
     * @brief getVisited
     * @return
     */
    bool getVisited(){return this->visited;}
    /**
     * @brief addDistance
     * @param distance
     */
    void addDistance(Distance distance);
    /**
     * @brief addMenuItem
     * @param menuItem
     */
    void addMenuItem(MenuItem menuItem);
    /**
     * @brief getDistances
     * @return distances
     */
    std::vector<Distance> getDistances();
    /**
     * @brief getMenu
     * @return menu
     */
    std::vector<MenuItem> getMenu();
    /**
     * @brief setTotalAmountSpent
     * @param amt
     */
    void setTotalAmountSpent(double amt);
    /**
     * @brief getTotalAmountSpent
     * @return totalAmountSpent
     */
    double getTotalAmountSpent();
    /**
     * @brief operator ==
     * @param restaurantToCompare
     * @return bool value
     */
    bool operator==(Restaurant restaurantToCompare){
        return (this->getID() == restaurantToCompare.getID());
    }

private:
    QString name;
    int id;
    double distanceFromSaddleback;
    int menuSize;
    int totalDistances;
    std::vector<MenuItem> menu;
    std::vector<Distance> distances;
    bool visited;
    double totalAmountSpent;
};

#endif // RESTAURANT_H
