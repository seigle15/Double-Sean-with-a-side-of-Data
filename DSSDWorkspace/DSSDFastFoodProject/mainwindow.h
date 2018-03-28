#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "admin.h"
#include "dbmanager.h"
#include "restaurant.h"

/**
 * @brief MainWindow
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
    /**
     * @brief on_pushButton_Login_clicked
     */
    void on_pushButton_Login_clicked();
    /**
     * @brief on_restaurantListWidget_itemActivated
     */
    void on_restaurantListWidget_itemActivated(QListWidgetItem*);
    /**
     * @brief on_addItemButton_clicked
     */
    void on_addItemButton_clicked();
    /**
     * @brief addToCart
     * @param foodName
     * @param restaurantName
     * @return  MenuItem
     */
    MenuItem addToCart(QString foodName, QString restaurantName);
    /**
     * @brief on_removeItemButton_clicked
     */
    void on_removeItemButton_clicked();
    /**
     * @brief on_menuAndTripListWidget_itemActivated
     */
    void on_menuAndTripListWidget_itemActivated(QListWidgetItem*);
    /**
     * @brief listRestaurants
     */
    void listRestaurants();
    /**
     * @brief listNormalRestView
     */
    void listNormalRestView();
    /**
     * @brief on_AddRestaurant_clicked
     */
    void on_AddRestaurant_clicked();
    /**
     * @brief isDuplicateRestaurant
     * @param restaurantName
     * @return bool
     */
    bool isDuplicateRestaurant(QString restaurantName);
    /**
     * @brief addToMyTrip
     * @param toAdd
     */
    void addToMyTrip(Restaurant toAdd);
    /**
     * @brief isInCart
     * @param itemToDelete
     * @return bool
     */
    bool isInCart(MenuItem itemToDelete);
    /**
     * @brief on_Remove_clicked
     */
    void on_Remove_clicked();
    /**
     * @brief removeFromMyTrip
     * @param RestToDelete
     */
    void removeFromMyTrip(Restaurant RestToDelete);
    /**
     * @brief isOnMyTrip
     * @param restToDelete
     * @return bool
     */
    bool isOnMyTrip(Restaurant restToDelete);
    /**
     * @brief on_viewTripButton_clicked
     */
    void on_viewTripButton_clicked();
    /**
     * @brief listMyTrip
     */
    void listMyTrip();
    /**
     * @brief on_restaurantListWidget_clicked
     * @param index
     */
    void on_restaurantListWidget_clicked(const QModelIndex &index);
    /**
     * @brief on_newTripButton_clicked
     */
    void on_newTripButton_clicked();
    /**
     * @brief on_startTripButton_clicked
     */
    void on_startTripButton_clicked();
    /**
     * @brief on_StartNormalTrip_clicked
     */
    void on_StartNormalTrip_clicked();
    /**
     * @brief TripCreator
     *
     * All Recusive algorithm functions
     *
     * @param current
     * @param numOfRest
     * @param restaurants
     * @param totalMiles
     */
    void TripCreator(Restaurant current,
                     int numOfRest,
                     QVector<Restaurant> restaurants,
                     double &totalMiles);
    /**
     * @brief FindNextRestaurant
     * @param current
     * @param totalMiles
     * @param IDs
     * @return int
     */
    int FindNextRestaurant(Restaurant current,
                            double &totalMiles,
                           std::vector<int> IDs);
    /**
     * @brief LoadIDs
     * @param list
     * @return vector
     */
    std::vector<int> LoadIDs(QVector<Restaurant> list);
    /**
     * @brief convertIDToRest
     * @param ID
     * @param list
     * @return Restaurant
     */
    Restaurant convertIDToRest(int ID, QVector<Restaurant> list);
    /**
     * @brief PrintOrder
     */
    void PrintOrder();
    /**
     * @brief populateStartLocCB
     */
    void populateStartLocCB();
    /**
     * @brief findClosestRestToSB
     * @return
     */
    Restaurant findClosestRestToSB();
    /**
     * @brief stringToRest
     * @param name
     * @return Restaurant
     */
    Restaurant stringToRest(QString name);
    /**
     * @brief on_restaurantListWidget_2_itemActivated
     * @param item
     */
    void on_restaurantListWidget_2_itemActivated(QListWidgetItem *item);
    /**
     * @brief on_addItemButton_2_clicked
     */
    void on_addItemButton_2_clicked();
    /**
     * @brief on_removeItemButton_2_clicked
     */
    void on_removeItemButton_2_clicked();
    /**
     * @brief on_restaurantListWidget_2_activated
     * @param index
     */
    void on_restaurantListWidget_2_activated(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    Admin *AdminWindow;
    QVector<MenuItem> shoppingCart;
    QVector<Restaurant> myTrip;
    QVector<Restaurant> efficientOrder;
    QVector<double> allDistances;
    double totalDistance;
    double cartTotal;
    bool tripStarted;
};

#endif // MAINWINDOW_H
