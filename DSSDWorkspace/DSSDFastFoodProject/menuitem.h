#ifndef MENUITEM_H
#define MENUITEM_H

#include <QString>

/**
 * @brief The MenuItem class
 * @author Sean O'Hearn
 * Container for menu items that will be stored in a restaurant object
 */

class MenuItem
{
public:
    MenuItem();
    MenuItem(QString itemName, int restaurantID, double price);
    /**
     * @brief setItemName
     * @param itemName
     */
    void setItemName(QString itemName);
    /**
     * @brief setRestaurantID
     * @param restaurantID
     */
    void setRestaurantID(int restaurantID);
    /**
     * @brief setPrice
     * @param price
     */
    void setPrice(double price);
    /**
     * @brief getItemName
     * @return itemName
     */
    QString getItemName();
    /**
     * @brief getRestaurantID
     * @return restaurantID
     */
    int getRestaurantID();
    /**
     * @brief getPrice
     * @return price
     */
    double getPrice();
    /**
     * @brief operator ==
     * @param itemToCompare
     * @return bool value
     */
    bool operator==(MenuItem itemToCompare){
        return (this->getItemName() == itemToCompare.getItemName());
    }
private:
    QString itemName;
    int restaurantID;
    double price;
};

#endif // MENUITEM_H
