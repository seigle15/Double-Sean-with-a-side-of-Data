#include "distance.h"

Distance::Distance() : distanceInMiles(0), restaurantIDFrom(0), restaurantIDTo(0)
{

}

Distance::Distance(double distanceInMiles, int restaurantIDFrom, int restaurantIDTo) : distanceInMiles(distanceInMiles),
                                                                                       restaurantIDFrom(restaurantIDFrom),
                                                                                       restaurantIDTo(restaurantIDTo)
{

}

void Distance::setDistanceInMiles(double distanceInMiles)
{
    this->distanceInMiles = distanceInMiles;
}

void Distance::setRestaurantIDFrom(int restaurantIDFrom)
{
    this->restaurantIDFrom = restaurantIDFrom;
}

void Distance::setRestaurantIDTo(int restaurantIDTo)
{
    this->restaurantIDTo = restaurantIDTo;
}

double Distance::getDistanceInMiles()
{
    return distanceInMiles;
}

int Distance::getRestaurantIDFrom()
{
    return restaurantIDFrom;
}

int Distance::getRestaurantIDTo()
{
    return restaurantIDTo;
}
