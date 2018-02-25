#ifndef DISTANCE_H
#define DISTANCE_H

/**
 * @brief The Distance class
 * Container for distances between restaurants
 */

class Distance
{
public:
    Distance();
    Distance(double distanceInMiles, int restaurantIDFrom, int restaurantIDTo);
    void setDistanceInMiles(double distanceInMiles);
    void setRestaurantIDFrom(int restaurantIDFrom);
    void setRestaurantIDTo(int restaurantIDTo);
    double getDistanceInMiles();
    int getRestaurantIDFrom();
    int getRestaurantIDTo();


private:
    double distanceInMiles;
    int restaurantIDFrom;
    int restaurantIDTo;
};

#endif // DISTANCE_H
