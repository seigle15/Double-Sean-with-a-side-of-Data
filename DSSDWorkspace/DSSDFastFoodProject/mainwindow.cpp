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
    totalDistance = 0.0;

    ui->AddRestaurant->setEnabled(false);
    ui->Remove->setEnabled(false);
    ui->viewTripButton->setEnabled(false);
    ui->startTripButton->setEnabled(false);

    ui->totalDistanceLabel->hide();
    ui->totalDistance_lineEdit->hide();

    ui->displayRestaurantTotal_Label->hide();
    ui->displayRestaurantTotal_lineEdit->hide();
    ui->addItemButton->hide();
    ui->removeItemButton->hide();
    ui->qtyToAddLabel->hide();
    ui->qtyToAddLine->hide();
    ui->qtyToRemoveLabel->hide();
    ui->qtyToRemoveLine->hide();
    ui->displayTotalLabel->hide();
    ui->displayTotalLine->hide();
    
    populateStartLocCB();
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
                        shoppingCart.push_back(MenuItem(foodName, myRestaurants.at(i).getID(), myRestaurants.at(i).getMenu().at(j).getPrice()));
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
        qDebug() << "food item #" << i + 1 << ": " << shoppingCart[i].getItemName();
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
        //QString foodName = shoppingCart.at(shoppingCart.size() - 1);
        QString foodName = ui->itemNameToRemove_lineEdit->text();
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
                        int index = shoppingCart.indexOf(myRestaurants.at(i).getMenu().at(j));
                        shoppingCart.remove(index);
                        //shoppingCart.pop_back();
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
        qDebug() << "food item #" << i + 1 << ": " << shoppingCart[i].getItemName();
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
    Restaurant current = stringToRest(item->text());
    QString strDistanceToSaddleback = QString::number(current.getDistanceFromSaddleback());
    strDistanceToSaddleback.append(" miles");
    ui->distanceFromSaddleback_lineEdit->setText(strDistanceToSaddleback);
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
    ui->startTripButton->setEnabled(true);

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
    if(isOnMyTrip(restToDelete))
    {
        int index = myTrip.indexOf(restToDelete);
        myTrip.remove(index);
    }
}

bool MainWindow::isOnMyTrip(Restaurant restToDelete)
{
    for(int i = 0; i < myTrip.size(); i++)
    {
        if(myTrip[i].getName() == restToDelete.getName())
        {
            return true;
        }
    }
    qDebug() << "Error: restaurant isn't in list...";
    return false;
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
        if(!myTrip.empty())
        {
            ui->Remove->setEnabled(true);
        }
    }
}

void MainWindow::on_newTripButton_clicked()
{
    qDebug() << "New trip button pressed. Clearing previous trip...";

    tripStarted = false;

    myTrip.clear();
    efficientOrder.clear();
    allDistances.clear();
    totalDistance = 0.0;
    ui->restaurantListWidget->clear();

    ui->totalDistanceLabel->hide();
    ui->totalDistance_lineEdit->hide();

    ui->distanceFromSaddleback_label->show();
    ui->distanceFromSaddleback_lineEdit->show();
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

    ui->distanceFromSaddleback_label->hide();
    ui->distanceFromSaddleback_lineEdit->hide();

    ui->displayRestaurantTotal_Label->show();
    ui->displayRestaurantTotal_lineEdit->show();
    // disable the add and remove buttons since we are now allowing the customer to make orders for their trip, and changes to the list are locked
    ui->AddRestaurant->setEnabled(false);
    ui->Remove->setEnabled(false);
    ui->viewTripButton->setEnabled(false);
    ui->startTripButton->setEnabled(false);

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

    TripCreator(myTrip[0], myTrip.size(), myTrip, totalDistance);
    for(int i = 0; i < myTrip.size(); i++)
    {
        ui->restaurantListWidget->addItem(efficientOrder[i].getName());
    }
    // revealing total distance travelled
    ui->totalDistanceLabel->show();
    QString strTotalDistance = QString::number(totalDistance);
    strTotalDistance.append(" miles");
    ui->totalDistance_lineEdit->setText(strTotalDistance);
    ui->totalDistance_lineEdit->show();
}

void MainWindow::TripCreator(Restaurant current,
                             int numOfRest,
                             QVector<Restaurant> restaurants,
                             double &totalMiles){
    qDebug() << "\nComplete Run";
//    qDebug() << restaurants.size();
    qDebug() << current.getName();

    if(numOfRest == 1){
        //exits the function when all of the restaurants have been visited
        efficientOrder.push_back(current);
        PrintOrder();
        return;
    }
    else{
        int ID;
        efficientOrder.push_back(current);
        //qDebug() << efficientOrder.back().getName();
        int index = restaurants.indexOf(current);
        restaurants.remove(index);
        std::vector<int> IDs = LoadIDs(restaurants);
        ID = FindNextRestaurant(current, totalMiles, IDs);
        TripCreator(convertIDToRest(ID, restaurants), restaurants.size(), restaurants, totalMiles);
    }
}

int MainWindow::FindNextRestaurant(Restaurant current,
                                   double &totalMiles,
                                   std::vector<int> IDs){
    int next = 0;
    std::vector<Distance> currentDistances = current.getDistances();
    qDebug() << "Starting ID" << IDs[0];
    double closest = currentDistances[IDs[next]-1].getDistanceInMiles();
    qDebug() << "Starting Closest distance " << closest;
    for(int i = 0; i < IDs.size(); i++){
        qDebug() << "Next Closest distance" << currentDistances[IDs[i]-1].getDistanceInMiles();
        qDebug() << "Current ID" << IDs[i];
        //if(current.getID() == IDs[i])
        if(currentDistances[IDs[i]-1].getDistanceInMiles() < 0){
            currentDistances[IDs[i]-1].setDistanceInMiles(10.0);
        }
        if(closest > currentDistances[IDs[i]-1].getDistanceInMiles()){
        closest = currentDistances[IDs[i]-1].getDistanceInMiles();
        next = i;
        }

    }
    qDebug() << "returning ID " << IDs[next];
    totalMiles += currentDistances[IDs[next]-1].getDistanceInMiles();
    allDistances.push_back(currentDistances[IDs[next]-1].getDistanceInMiles());
    return IDs[next];
}

std::vector<int> MainWindow::LoadIDs(QVector<Restaurant> list){
    std::vector<int> getIDs;
    for(int i = 0; i < list.size(); i++){
        getIDs.push_back(list[i].getID());
        qDebug() << "getID Values" << i << " " << getIDs[i];
    }
    return getIDs;
}

Restaurant MainWindow::convertIDToRest(int ID, QVector<Restaurant> list)
{
    Restaurant found;
    for(int i = 0; i < list.size(); i++){
        qDebug() << list[i].getName();
        if(ID == list[i].getID()){
            //qDebug() << "Found " << list[i].getName();
           found = list[i];
        }
    }
    return found;
}
void MainWindow::PrintOrder()
{
    qDebug() << "Printing order";

    for(int i = 0; i < efficientOrder.size(); i++){

        if(i > 0){
            qDebug() << "From" << efficientOrder[i-1].getName()
                     << "to" << efficientOrder[i].getName()
                     << "is" << allDistances[i-1];

        }
        else{
            qDebug() << "From Saddleback to"
                     << efficientOrder[i].getName() << "is"
                     << efficientOrder[i].getDistanceFromSaddleback();
        }

    }
    qDebug() << "Total Distance" << totalDistance;
}

void MainWindow::populateStartLocCB(){
    ui->StartingLocation->addItem("Sadddleback");
    std::vector<Restaurant> allRestaurants(DBManager::getInstance()->getRestaurants());
    for(int i = 0; i < allRestaurants.size(); i++){
        ui->StartingLocation->addItem(allRestaurants[i].getName());
    }
}

void MainWindow::on_StartNormalTrip_clicked()
{
    ui->restaurantListWidget_2->clear();
    efficientOrder.clear();
    allDistances.clear();
    totalDistance = 0.0;
    std::vector<Restaurant> allRestaurants(DBManager::getInstance()->getRestaurants());
    QVector<Restaurant> completeTrip;
    for(int i = 0; i < allRestaurants.size(); i++){
        completeTrip.push_front(allRestaurants[i]);
    }
    QString startingLocation = ui->StartingLocation->currentText();
    if(startingLocation == "Saddleback"){
        Restaurant closestToSB = findClosestRestToSB();
        totalDistance = closestToSB.getDistanceFromSaddleback();
        TripCreator(closestToSB, completeTrip.size(),
                    completeTrip, totalDistance);
    }
    else{
        TripCreator(stringToRest(startingLocation), completeTrip.size(),
                    completeTrip, totalDistance);
    }
    QString distance = QString::number(totalDistance);
    distance = distance + " miles";
    ui->totalDistance->setText(distance);
    listNormalRestView();
    efficientOrder.clear();
    allDistances.clear();
    totalDistance = 0.0;

}
Restaurant MainWindow::findClosestRestToSB(){
    std::vector<Restaurant> allRestaurants(DBManager::getInstance()->getRestaurants());
    Restaurant closest;
    closest = allRestaurants[0];
    for(int i = 0; i < allRestaurants.size(); i++){
        if(closest.getDistanceFromSaddleback() >
           allRestaurants[i].getDistanceFromSaddleback()){
            closest = allRestaurants[i];
        }
    }
    return closest;
}

void MainWindow::listNormalRestView(){
    for(int i = 0; i < efficientOrder.size(); i++)
    {
        ui->restaurantListWidget_2->addItem(efficientOrder[i].getName());
    }
}

Restaurant MainWindow::stringToRest(QString name){
    std::vector<Restaurant> allRestaurants(DBManager::getInstance()->getRestaurants());
    Restaurant toFind = allRestaurants[0];
    for(int i = 0; i < allRestaurants.size(); i++){
        if(name == allRestaurants[i].getName()){
            toFind = allRestaurants[i];
        }
    }
    return toFind;
}

void MainWindow::on_restaurantListWidget_2_itemActivated(QListWidgetItem *item)
{
    ui->menuListWidget_2->clear();
    ui->itemPrice_lineEdit_2->clear();
    ui->itemNameToRemove_lineEdit_2->clear();

    std::vector<Restaurant> myRestaurants(DBManager::getInstance()->getRestaurants());

    for(int i = 0; i < myRestaurants.size(); i++)
    {
        if(item->text() == myRestaurants.at(i).getName())
        {
            for(int j = 0; j < myRestaurants.at(i).getMenuSize(); j++)
            {
                QString itemName = myRestaurants.at(i).getMenu().at(j).getItemName();
                ui->menuListWidget_2->addItem(itemName);
            }
        }
    }
}
