#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "dbmanager.h"

namespace Ui {
class Admin;
}

/**
 * @brief The Admin class
 */
class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = 0);
    ~Admin();

private slots:
    /**
     * @brief on_pushButton_Logout_clicked
     */
    void on_pushButton_Logout_clicked();
    /**
     * @brief listRestaurants
     */
    void listRestaurants();
    /**
     * @brief on_itemsListWidget_itemActivated
     */
    void on_itemsListWidget_itemActivated(QListWidgetItem*);
    /**
     * @brief on_priceListWidget_itemActivated
     */
    void on_priceListWidget_itemActivated(QListWidgetItem*);
    /**
     * @brief on_restaurantListWidget_itemActivated
     */
    void on_restaurantListWidget_itemActivated(QListWidgetItem*);
    /**
     * @brief on_pushButton_RemoveRestaurant_clicked
     */
    void on_pushButton_RemoveRestaurant_clicked();
    /**
     * @brief on_pushButton_RemoveMenuItem_clicked
     */
    void on_pushButton_RemoveMenuItem_clicked();
    /**
     * @brief on_pushButton_AddFromFile_clicked
     */
    void on_pushButton_AddFromFile_clicked();
    /**
     * @brief on_pushButton_AddMenuItem_clicked
     */
    void on_pushButton_AddMenuItem_clicked();
    /**
     * @brief on_pushButton_ChangePrice_clicked
     */
    void on_pushButton_ChangePrice_clicked();

private:
    Ui::Admin *ui;
};


#endif // ADMIN_H
