#ifndef DISTANCE_H
#define DISTANCE_H

/**
 * @brief The Distance class
 * @author Sean O'Hearn
 * Container for distances between restaurants
 */

class Distance
{
public:
    Distance();
    Distance(double distanceInMiles, int restaurantIDFrom, int restaurantIDTo);
    /**
     * @brief setDistanceInMiles
     * @param distanceInMiles
     */
    void setDistanceInMiles(double distanceInMiles);
    /**
     * @brief setRestaurantIDFrom
     * @param restaurantIDFrom
     */
    void setRestaurantIDFrom(int restaurantIDFrom);
    /**
     * @brief setRestaurantIDTo
     * @param restaurantIDTo
     */
    void setRestaurantIDTo(int restaurantIDTo);
    /**
     * @brief getDistanceInMiles
     * @return distanceInMiles
     */
    double getDistanceInMiles();
    /**
     * @brief getRestaurantIDFrom
     * @return restaurantIDFrom
     */
    int getRestaurantIDFrom();
    /**
     * @brief getRestaurantIDTo
     * @return restaurantIDTo
     */
    int getRestaurantIDTo();

private:
    double distanceInMiles;
    int restaurantIDFrom;
    int restaurantIDTo;
};

#endif // DISTANCE_H
