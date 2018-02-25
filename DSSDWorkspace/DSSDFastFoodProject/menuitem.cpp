#include "menuitem.h"

MenuItem::MenuItem() : itemName(""), restaurantID(0), price(0)
{

}

MenuItem::MenuItem(QString itemName, int restaurantID, double price) : itemName(itemName),
                                                                       restaurantID(restaurantID),
                                                                       price(price)
{

}

void MenuItem::setItemName(QString itemName)
{
    this->itemName = itemName;
}

void MenuItem::setRestaurantID(int restaurantID)
{
    this->restaurantID = restaurantID;
}

void MenuItem::setPrice(double price)
{
    this->price = price;
}

QString MenuItem::getItemName()
{
    return itemName;
}

int MenuItem::getRestaurantID()
{
    return restaurantID;
}

double MenuItem::getPrice()
{
    return price;
}
