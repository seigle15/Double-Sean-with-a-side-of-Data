#ifndef TRIPSCREEN_H
#define TRIPSCREEN_H

#include <QWidget>
#include "restaurant.h"
namespace Ui {
class TripScreen;
}

class TripScreen : public QWidget
{
    Q_OBJECT

public:
    explicit TripScreen(QWidget *parent = 0);
    ~TripScreen();
    void setIsWindowOpen(bool open){ isWindowOpen = open;}
    bool getIsWindowOpen(){return isWindowOpen;}
    void addRestaurant(Restaurant toAdd);
    void TripCreator(Restaurant current,
                     int numOfRest,
                     QVector<Restaurant> restaurants,
                     double &totalMiles);
    int FindNextRestaurant(Restaurant current,
                            double &totalMiles,
                           std::vector<int> IDs);
    std::vector<int>LoadIDs(QVector<Restaurant> list);
    void pushButton();
    Restaurant convertIDToRest(int ID, QVector<Restaurant> list);
    void PrintOrder();
private slots:
    void on_StartButton_clicked();

    void on_StartingLocation_activated(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::TripScreen *ui;
    bool isWindowOpen;
    QVector<Restaurant> restaurantList;
    std::vector<Restaurant> efficientOrder;
    double startingDistance;
    QVector<double> allDistances;
    void setStartingDistance(Restaurant toAdd);
    double totalMiles;

};

#endif // TRIPSCREEN_H
