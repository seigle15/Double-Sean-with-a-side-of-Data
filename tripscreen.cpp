#include "tripscreen.h"
#include "ui_tripscreen.h"
#include "distance.h"
#include <QDebug>
TripScreen::TripScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TripScreen)
{
    isWindowOpen = false;
    startingDistance = 0.0;
    totalMiles = 0.0;
}

TripScreen::~TripScreen()
{
    delete ui;
}

void TripScreen::addRestaurant(Restaurant toAdd){
    restaurantList.push_back(toAdd);
}

void TripScreen::setStartingDistance(Restaurant toAdd){
    startingDistance = restaurantList[0].getDistanceFromSaddleback();
    if(toAdd.getDistanceFromSaddleback() <
       restaurantList[0].getDistanceFromSaddleback())
    {
        startingDistance = toAdd.getDistanceFromSaddleback();
        restaurantList.push_back(toAdd);
    }
}
void TripScreen::TripCreator(Restaurant current,
                             int numOfRest,
                             QVector<Restaurant> restaurants,
                             double &totalMiles){
    qDebug() << "\nComplete Run";
    qDebug() << restaurants.size();
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
        qDebug() << "Just before the convert Function";

        TripCreator(convertIDToRest(ID, restaurants), restaurants.size(), restaurants, totalMiles);
    }
}

int TripScreen::FindNextRestaurant(Restaurant current,
                                   double &totalMiles,
                                   std::vector<int> IDs){

    int next = 0;
    qDebug() << "next = currentID " << next;

    std::vector<Distance> currentDistances = current.getDistances();
    double closest = currentDistances[IDs[0]].getDistanceInMiles();
    for(int i = 0; i < IDs.size(); i++){
        //qDebug() << "ID[i]: " << IDs[i];
        if(closest > currentDistances[IDs[i]].getDistanceInMiles()){
            closest = currentDistances[IDs[i]].getDistanceInMiles();
            next = i;
        }

    }
    qDebug() << "returning ID " << IDs[next];
    totalMiles += currentDistances[IDs[next]].getDistanceInMiles();
    allDistances.push_back(currentDistances[IDs[next]].getDistanceInMiles());
    return IDs[next];
}

void TripScreen::on_StartButton_clicked()
{
    LoadIDs(restaurantList);
    TripCreator(restaurantList[0], restaurantList.size(), restaurantList, totalMiles);
}

void TripScreen::on_StartingLocation_activated(const QString &arg1)
{
    //ui->StartingLocation->addItem();
}
std::vector<int> TripScreen::LoadIDs(QVector<Restaurant> list){
    std::vector<int> getIDs;
    for(int i = 0; i < list.size(); i++){
        getIDs.push_back(list[i].getID());
        //qDebug() << getIDs[i];
    }
    for(int i = 0; i < getIDs.size(); i++){
        //qDebug() << "getID Values: " << getIDs[i];
    }
    //qDebug() << "IDs.size() " <<getIDs.size();
    return getIDs;
}


void TripScreen::on_pushButton_clicked()
{
    //LoadIDs(restaurantList);
    TripCreator(restaurantList[0], restaurantList.size(), restaurantList, totalMiles);
}
void TripScreen::pushButton(){
    //LoadIDs(restaurantList);
    TripCreator(restaurantList[0], restaurantList.size(), restaurantList, totalMiles);
}

Restaurant TripScreen::convertIDToRest(int ID, QVector<Restaurant> list){
    Restaurant found;
    qDebug() << "In the convertID funtion";
    for(int i = 0; i < list.size(); i++){
        qDebug() << list[i].getName();
        if(ID == list[i].getID()){
            //qDebug() << "Found " << list[i].getName();
           found = list[i];
        }
    }
    qDebug() << "returning " << found.getName();
    return found;
}

void TripScreen::PrintOrder(){
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

}