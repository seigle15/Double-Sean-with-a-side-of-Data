#ifndef MENUITEM_H
#define MENUITEM_H

#include <QString>

/**
 * @brief The MenuItem class
 * Container for menu items that will be stored in a restaurant object
 */

class MenuItem
{
public:
    MenuItem();
    MenuItem(QString itemName, int restaurantID, double price);
    void setItemName(QString itemName);
    void setRestaurantID(int restaurantID);
    void setPrice(double price);
    QString getItemName();
    int getRestaurantID();
    double getPrice();

private:
    QString itemName;
    int restaurantID;
    double price;
};

#endif // MENUITEM_H
