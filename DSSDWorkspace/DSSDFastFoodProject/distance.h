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

private:
    double distanceInMiles;
    int restaurantIDFrom;
    int restaurantIDTo;
};

#endif // DISTANCE_H
