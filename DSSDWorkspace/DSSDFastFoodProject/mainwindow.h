#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "admin.h"
#include "dbmanager.h"
#include "tripscreen.h"
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
    void on_menuListWidget_itemActivated(QListWidgetItem*);
    void listRestaurants();

    void on_AddRestaurant_clicked();

    void on_Remove_clicked();

private:
    Ui::MainWindow *ui;
    Admin *AdminWindow;
    std::vector<QString> shoppingCart;
    double cartTotal;
    TripScreen *tripWindow;
};

#endif // MAINWINDOW_H
