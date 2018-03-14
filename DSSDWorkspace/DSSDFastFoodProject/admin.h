#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "dbmanager.h"

namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = 0);
    ~Admin();

private slots:
    void on_pushButton_Logout_clicked();
    void listRestaurants();
    void on_itemsListWidget_itemActivated(QListWidgetItem*);
    void on_priceListWidget_itemActivated(QListWidgetItem*);
    void on_restaurantListWidget_itemActivated(QListWidgetItem*);


    void on_pushButton_RemoveRestaurant_clicked();

    void on_pushButton_RemoveMenuItem_clicked();

    void on_pushButton_AddFromFile_clicked();

    void on_pushButton_AddMenuItem_clicked();

    void on_pushButton_ChangePrice_clicked();

private:
    Ui::Admin *ui;
};


#endif // ADMIN_H
