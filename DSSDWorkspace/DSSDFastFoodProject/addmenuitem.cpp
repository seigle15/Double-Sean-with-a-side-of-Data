#include "addmenuitem.h"
#include "ui_addmenuitem.h"
#include "restaurant.h"
#include "dbmanager.h"

addMenuItem::addMenuItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMenuItem)
{
    ui->setupUi(this);
}

addMenuItem::~addMenuItem()
{
    delete ui;
}

void addMenuItem::on_pushButton_clicked()
{
    std::vector<Restaurant> DBRestaurant(DBManager::getInstance()->getRestaurants());
    Restaurant newItem;


    DBRestaurant.push_back(newItem);
	ui->lineEdit_Restaurant->clear();
    ui->lineEdit_Item->clear();
    ui->lineEdit_Price->clear();
}
