#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    connect(ui->restaurantListWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)),
//            this, SLOT(on_restaurantListWidget_itemActivated(QListWidgetItem*)));

    listRestaurants();
    tripWindow = new TripScreen();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

    if(username == "test" && password == "test")
    {
        AdminWindow = new Admin();
        AdminWindow->show();

        this->close();
        tripWindow->close();
    }
    else
    {
        QMessageBox::warning(this,"Login", "Username and password is not correct");
    }
}

void MainWindow::listRestaurants()
{
    std::vector<Restaurant> myRestaurants(DBManager::getInstance()->getRestaurants());
    for(int i = 0; i < myRestaurants.size(); i++)
    {
        ui->restaurantListWidget->addItem(myRestaurants.at(i).getName());
    }
}

void MainWindow::on_addItemButton_clicked()
{
    qDebug() << "button pushed";
    std::vector<Restaurant> myRestaurants(DBManager::getInstance()->getRestaurants());
    QString foodName = ui->itemNameToRemove_lineEdit->text();

    if(foodName == NULL)
    {
        qDebug() << "ERROR----Must select item to be added to cart.";
    }
    else
    {
        for(int i = 0; i < myRestaurants.size(); i++)
        {
            for(int j = 0; j < myRestaurants.at(i).getMenu().size(); j++)
            {
                if(myRestaurants.at(i).getMenu().at(j).getItemName() == foodName)
                {
                    //--------------------------------------
                    // This is where the error is occuring.
                    //--------------------------------------
                        qDebug() << "added item to shopping cart.";
                        shoppingCart.push_back(foodName);
                        double price = myRestaurants.at(i).getMenu().at(j).getPrice();
                        cartTotal += price;
                        QString cartTotalStr = QString::number(cartTotal);
                        ui->displayTotalLine->setText(cartTotalStr);
                        //qDebug() << cartTotal;
                }

            }
        }
    }

    qDebug() << "---Shopping Cart List---";
    for(int i = 0; i < shoppingCart.size(); i++)
    {
        qDebug() << "food item #" << i + 1 << ": " << shoppingCart[i];
    }
    qDebug() << "------------------------";

}

void MainWindow::on_removeItemButton_clicked()
{
    qDebug() << "button pushed";
    if(shoppingCart.size() == 0)
    {
        qDebug() << "ERROR---There are no items in the shopping cart.";
        cartTotal = 0.00;
    }
    else
    {
        std::vector<Restaurant> myRestaurants(DBManager::getInstance()->getRestaurants());
        QString foodName = shoppingCart.at(shoppingCart.size() - 1);
        for(int i = 0; i < myRestaurants.size(); i++)
        {
            for(int j = 0; j < myRestaurants.at(i).getMenu().size(); j++)
            {
                if(myRestaurants.at(i).getMenu().at(j).getItemName() == foodName)
                {
                    //--------------------------------------
                    // This is where the error is occuring.
                    //--------------------------------------
                        qDebug() << "removed item from shopping cart.";
                        shoppingCart.pop_back();
                        double price = myRestaurants.at(i).getMenu().at(j).getPrice();
                        cartTotal -= price;
                        QString cartTotalStr = QString::number(cartTotal);
                        ui->displayTotalLine->setText(cartTotalStr);
                        //qDebug() << cartTotal;
                }

            }
        }
    }

    qDebug() << "---Shopping Cart List---";
    for(int i = 0; i < shoppingCart.size(); i++)
    {
        qDebug() << "food item #" << i + 1 << ": " << shoppingCart[i];
    }
    qDebug() << "------------------------";
}

void MainWindow::on_menuListWidget_itemActivated(QListWidgetItem* item)
{
    qDebug() << "Item clicked";
    ui->itemNameToRemove_lineEdit->setText(item->text());
    std::vector<Restaurant> myRestaurants(DBManager::getInstance()->getRestaurants());
    for(int i = 0; i < myRestaurants.size(); i++)
    {
        for(int j = 0; j < myRestaurants.at(i).getMenu().size(); j++)
        {
            if(myRestaurants.at(i).getMenu().at(j).getItemName() == item->text())
            {
                double price = myRestaurants.at(i).getMenu().at(j).getPrice();
                QString priceStr = QString::number(price);
                ui->itemPrice_lineEdit->setText(priceStr);
            }
        }
    }
}

void MainWindow::on_restaurantListWidget_itemActivated(QListWidgetItem* item)
{
    ui->menuListWidget->clear();
    ui->itemPrice_lineEdit->clear();
    ui->itemNameToRemove_lineEdit->clear();
    std::vector<Restaurant> myRestaurants(DBManager::getInstance()->getRestaurants());
    for(int i = 0; i < myRestaurants.size(); i++)
    {
        if(item->text() == myRestaurants.at(i).getName())
        {
            for(int j = 0; j < myRestaurants.at(i).getMenuSize(); j++)
            {
                QString itemName = myRestaurants.at(i).getMenu().at(j).getItemName();
                ui->menuListWidget->addItem(itemName);
            }
        }
    }
}

void MainWindow::on_AddRestaurant_clicked()
{

    //getting a restuarant name
    QString restaurantName = ui->restaurantListWidget->currentItem()->text();
    qDebug() << restaurantName;
    Restaurant RestToAdd;
    std::vector<Restaurant> fullList(DBManager::getInstance()->getRestaurants());
    for(int i = 0; i < fullList.size(); i++){
        if(restaurantName == fullList[i].getName()){
            RestToAdd = fullList[i];
        }
    }
    tripWindow->addRestaurant(RestToAdd);
//    std::vector<Distance> distances = RestToAdd.getDistances();
//    qDebug() << distances[0].getDistanceInMiles();

//    if(!ui->restaurantListWidget->is){
//        qDebug() << "Please select an item";
//    }
//    else{
//        QString restaurantName = ui->restaurantListWidget->currentItem()->text();
//        qDebug() << restaurantName;
//    }
    if(tripWindow->isHidden()){
        tripWindow->show();
    }
    if(!tripWindow->isActiveWindow()){
        tripWindow->activateWindow();
    }

}


void MainWindow::on_Remove_clicked()
{
    tripWindow->pushButton();
}
