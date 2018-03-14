#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    listRestaurants();

    tripStarted = false;

    ui->AddRestaurant->setEnabled(false);
    ui->Remove->setEnabled(false);
    ui->viewTripButton->setEnabled(false);

    ui->addItemButton->hide();
    ui->removeItemButton->hide();
    ui->qtyToAddLabel->hide();
    ui->qtyToAddLine->hide();
    ui->qtyToRemoveLabel->hide();
    ui->qtyToRemoveLine->hide();
    ui->displayTotalLabel->hide();
    ui->displayTotalLine->hide();
    //tripWindow = new TripScreen();
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

void MainWindow::on_menuAndTripListWidget_itemActivated(QListWidgetItem* item)
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
    if(this->tripStarted)
    {
        ui->AddRestaurant->setEnabled(false);
        ui->Remove->setEnabled(false);
    }
    else
    {
        ui->AddRestaurant->setEnabled(true);
    }

    ui->menuAndTripListLabel->setText("Menu");
    ui->itemNameLabel->show();
    ui->itemNameToRemove_lineEdit->show();
    ui->itemPriceLabel->show();
    ui->itemPrice_lineEdit->show();

    ui->menuAndTripListWidget->clear();
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
                ui->menuAndTripListWidget->addItem(itemName);
            }
        }
    }
}

void MainWindow::on_AddRestaurant_clicked()
{
    qDebug() << "Add button clicked";

    //getting a restuarant name
    QString restaurantName = ui->restaurantListWidget->currentItem()->text();

    qDebug() << restaurantName;

    Restaurant RestToAdd;
    std::vector<Restaurant> fullList(DBManager::getInstance()->getRestaurants());

    for(int i = 0; i < fullList.size(); i++)
    {
        if(restaurantName == fullList[i].getName())
        {
            if(isDuplicateRestaurant(restaurantName))
            {
                qDebug() << "Error: Can not add more than one of the same restaurant to trip...";
                return;
            }
            RestToAdd = fullList[i];
            break;
        }
    }

    addToMyTrip(RestToAdd);
    if(ui->menuAndTripListLabel->text() == "My Trip")
    {
        listMyTrip();
    }

    ui->viewTripButton->setEnabled(true);


//    tripWindow->addRestaurant(RestToAdd);
//    std::vector<Distance> distances = RestToAdd.getDistances();
//    qDebug() << distances[0].getDistanceInMiles();

//    if(!ui->restaurantListWidget->is())
//    {
//        qDebug() << "Please select an item";
//    }
//    else
//    {
//        QString restaurantName = ui->restaurantListWidget->currentItem()->text();
//        qDebug() << restaurantName;
//    }
//    if(tripWindow->isHidden()){
//        tripWindow->show();
//    }
//    if(!tripWindow->isActiveWindow()){
//        tripWindow->activateWindow();
//    }


}

bool MainWindow::isDuplicateRestaurant(QString restaurantName)
{
    for(int i = 0; i < myTrip.size(); i++)
    {
        if(restaurantName == myTrip[i].getName())
        {
            return true;
        }
    }
    return false;
}

void MainWindow::addToMyTrip(Restaurant toAdd)
{
    myTrip.push_back(toAdd);
}

void MainWindow::on_Remove_clicked()
{
    //tripWindow->pushButton();

    qDebug() << "Remove button clicked";

    //getting a restuarant name
    QString restaurantName = ui->restaurantListWidget->currentItem()->text();

    qDebug() << restaurantName;

    Restaurant restToDelete;
    std::vector<Restaurant> fullList(DBManager::getInstance()->getRestaurants());

    for(int i = 0; i < fullList.size(); i++)
    {
        if(restaurantName == fullList[i].getName())
        {
            restToDelete = fullList[i];

            removeFromMyTrip(restToDelete);
            if(ui->menuAndTripListLabel->text() == "My Trip")
            {
                listMyTrip();
            }
            break;
        }
    }
}

void MainWindow::removeFromMyTrip(Restaurant restToDelete)
{
    int index = myTrip.indexOf(restToDelete);
    myTrip.remove(index);
}

void MainWindow::on_viewTripButton_clicked()
{
    ui->menuAndTripListLabel->setText("My Trip");
    ui->itemNameLabel->hide();
    ui->itemNameToRemove_lineEdit->hide();
    ui->itemPriceLabel->hide();
    ui->itemPrice_lineEdit->hide();

    ui->menuAndTripListWidget->clear();
    listMyTrip();
}

void MainWindow::listMyTrip()
{
    ui->menuAndTripListWidget->clear();
    for(int i = 0; i < myTrip.size(); i++)
    {
        ui->menuAndTripListWidget->addItem(myTrip[i].getName());
    }
}

void MainWindow::on_restaurantListWidget_clicked(const QModelIndex &index)
{
    qDebug() << "valid index = " << index.isValid();

    if(this->tripStarted)
    {
        ui->AddRestaurant->setEnabled(false);
        ui->Remove->setEnabled(false);
    }
    else
    {
        ui->AddRestaurant->setEnabled(true);
        ui->Remove->setEnabled(true);
    }
}

void MainWindow::on_newTripButton_clicked()
{
    qDebug() << "New trip button pressed. Clearing previous trip...";

    tripStarted = false;

    myTrip.clear();

    ui->restaurantListWidget->clear();

    if(ui->menuAndTripListLabel->text() == "My Trip")
    {
        ui->menuAndTripListLabel->setText("Menu");
        ui->menuAndTripListWidget->clear();
        ui->itemPriceLabel->show();
        ui->itemPrice_lineEdit->show();
        ui->itemNameLabel->show();
        ui->itemNameToRemove_lineEdit->show();
    }

    listRestaurants();

    ui->AddRestaurant->setEnabled(false);
    ui->Remove->setEnabled(false);
    ui->viewTripButton->setEnabled(false);

    ui->addItemButton->hide();
    ui->removeItemButton->hide();
    ui->qtyToAddLabel->hide();
    ui->qtyToAddLine->hide();
    ui->qtyToRemoveLabel->hide();
    ui->qtyToRemoveLine->hide();
    ui->displayTotalLabel->hide();
    ui->displayTotalLine->hide();
}

void MainWindow::on_startTripButton_clicked()
{
    qDebug() << "Starting trip...";

    this->tripStarted = true;

    // disable the add and remove buttons since we are now allowing the customer to make orders for their trip, and changes to the list are locked
    ui->AddRestaurant->setEnabled(false);
    ui->Remove->setEnabled(false);
    ui->viewTripButton->setEnabled(false);

    // revealing order options on screen
    ui->itemPriceLabel->show();
    ui->itemPrice_lineEdit->show();
    ui->itemNameLabel->show();
    ui->itemNameToRemove_lineEdit->show();
    ui->addItemButton->show();
    ui->removeItemButton->show();
    ui->qtyToAddLabel->show();
    ui->qtyToAddLine->show();
    ui->qtyToRemoveLabel->show();
    ui->qtyToRemoveLine->show();
    ui->displayTotalLabel->show();
    ui->displayTotalLine->show();

    ui->menuAndTripListLabel->setText("Menu");
    ui->menuAndTripListWidget->clear();
    ui->restaurantListWidget->clear();

    for(int i = 0; i < myTrip.size(); i++)
    {
        ui->restaurantListWidget->addItem(myTrip[i].getName());
    }
}
