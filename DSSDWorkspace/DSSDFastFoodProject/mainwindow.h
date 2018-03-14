#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "admin.h"
#include "dbmanager.h"
#include "restaurant.h"
/**
 * @brief
 * This is the baseline UI
 */

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_Login_clicked();
    void on_restaurantListWidget_itemActivated(QListWidgetItem*);
    void on_addItemButton_clicked();
    void on_removeItemButton_clicked();
    void on_menuAndTripListWidget_itemActivated(QListWidgetItem*);
    void listRestaurants();
    void listNormalRestView();
    void on_AddRestaurant_clicked();
    bool isDuplicateRestaurant(QString restaurantName);
    void addToMyTrip(Restaurant toAdd);

    void on_Remove_clicked();
    void removeFromMyTrip(Restaurant RestToDelete);
    bool isOnMyTrip(Restaurant restToDelete);

    void on_viewTripButton_clicked();
    void listMyTrip();

    void on_restaurantListWidget_clicked(const QModelIndex &index);

    void on_newTripButton_clicked();

    void on_startTripButton_clicked();
    void on_StartNormalTrip_clicked();

    //All Recusive algorithm functions
    void TripCreator(Restaurant current,
                     int numOfRest,
                     QVector<Restaurant> restaurants,
                     double &totalMiles);
    int FindNextRestaurant(Restaurant current,
                            double &totalMiles,
                           std::vector<int> IDs);
    std::vector<int> LoadIDs(QVector<Restaurant> list);
    Restaurant convertIDToRest(int ID, QVector<Restaurant> list);
    void PrintOrder();
    void populateStartLocCB();
    Restaurant findClosestRestToSB();
    //to add: function to find starting location from saddleback
    Restaurant stringToRest(QString name);

    void on_restaurantListWidget_2_doubleClicked(const QModelIndex &index);

    void on_restaurantListWidget_2_itemActivated(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    Admin *AdminWindow;
    std::vector<QString> shoppingCart;
    QVector<Restaurant> myTrip;
    QVector<Restaurant> efficientOrder;
    QVector<double> allDistances;
    double totalDistance;
    double cartTotal;
    bool tripStarted;
};

#endif // MAINWINDOW_H
