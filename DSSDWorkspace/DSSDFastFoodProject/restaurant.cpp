#include "restaurant.h"

Restaurant::Restaurant() : name(""), id(0),
                           distanceFromSaddleback(0), menuSize(0),
                           totalDistances(0), menu(NULL), distances(NULL), totalAmountSpent(0)
{

}

Restaurant::Restaurant(QString name, int id, double distanceFromSaddleback, int menuSize, int totalDistances) : name(name), id(id),
                                                                                                                distanceFromSaddleback(distanceFromSaddleback),
                                                                                                                menuSize(menuSize), totalDistances(totalDistances)
{

}

void Restaurant::setName(QString name)
{
    this->name = name;
}

void Restaurant::setID(int id)
{
    this->id = id;
}

void Restaurant::setDistanceFromSaddleback(double distanceFromSaddleback)
{
    this->distanceFromSaddleback = distanceFromSaddleback;
}

void Restaurant::setMenuSize(int menuSize)
{
    this->menuSize = menuSize;
}

void Restaurant::setTotalDistances(int totalDistances)
{
    this->totalDistances = totalDistances;
}

QString Restaurant::getName()
{
    return name;
}

int Restaurant::getID()
{
    return id;
}

double Restaurant::getDistanceFromSaddleback()
{
    return distanceFromSaddleback;
}

int Restaurant::getMenuSize()
{
    return menuSize;
}

int Restaurant::getTotalDistances()
{
    return totalDistances;
}

void Restaurant::addDistance(Distance distance)
{
    distances.push_back(distance);
}

void Restaurant::addMenuItem(MenuItem menuItem)
{
    menu.push_back(menuItem);
}

std::vector<Distance> Restaurant::getDistances()
{
    return distances;
}

std::vector<MenuItem> Restaurant::getMenu()
{
    return menu;
}

void Restaurant::setTotalAmountSpent(double amt)
{
    this->totalAmountSpent = amt;
}

double Restaurant::getTotalAmountSpent()
{
    return totalAmountSpent;
}
