#include "admin.h"
#include "ui_admin.h"
#include "mainwindow.h"
#include <qmessagebox.h>
#include "addmenuitem.h"
#include "changeprice.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
//    connect(ui->restaurantListWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)),
//            this, SLOT(on_restaurantListWidget_itemActivated(QListWidgetItem*)));

    listRestaurants();

}

Admin::~Admin()
{
    delete ui;
}



void Admin::on_pushButton_Logout_clicked()
{
    //DBManager::getInstance()->databaseToRestaurants();
    MainWindow *main = new MainWindow();
    main->show();
    this->close();   
}

void Admin::listRestaurants()
{
	ui->restaurantListWidget->clear();
    std::vector<Restaurant> myRestaurants(DBManager::getInstance()->getRestaurants());
    for(int i = 0; i < myRestaurants.size(); i++)
    {
        ui->restaurantListWidget->addItem(myRestaurants.at(i).getName());
    }
}

void Admin::on_itemsListWidget_itemActivated(QListWidgetItem* item)
{
    std::vector<Restaurant> myRestaurants(DBManager::getInstance()->getRestaurants());
    for(int i = 0; i < myRestaurants.size(); i++)
    {
        for(int j = 0; j < myRestaurants.at(i).getMenu().size(); j++)
        {
            if(myRestaurants.at(i).getMenu().at(j).getItemName() == item->text())
            {
                double price = myRestaurants.at(i).getMenu().at(j).getPrice();
                QString priceStr = QString::number(price);
            }
        }
    }
}

void Admin::on_restaurantListWidget_itemActivated(QListWidgetItem* item)
{
    ui->itemsListWidget->clear();
    ui->priceListWidget->clear();
    std::vector<Restaurant> myRestaurants(DBManager::getInstance()->getRestaurants());
    for(int i = 0; i < myRestaurants.size(); i++)
    {
        if(item->text() == myRestaurants.at(i).getName())
        {
            for(int j = 0; j < myRestaurants.at(i).getMenuSize(); j++)
            {
                QString itemName = myRestaurants.at(i).getMenu().at(j).getItemName();
                double price = myRestaurants.at(i).getMenu().at(j).getPrice();
                QString priceStr = QString::number(price);
                ui->itemsListWidget->addItem(itemName);
                ui->priceListWidget->addItem(priceStr);
            }
        }
    }
}

void Admin::on_priceListWidget_itemActivated(QListWidgetItem* item)
{
    std::vector<Restaurant> myRestaurants(DBManager::getInstance()->getRestaurants());
    for(int i = 0; i < myRestaurants.size(); i++)
    {
        for(int j = 0; j < myRestaurants.at(i).getMenu().size(); j++)
        {
            if(myRestaurants.at(i).getMenu().at(j).getItemName() == item->text())
            {
                double price = myRestaurants.at(i).getMenu().at(j).getPrice();
                QString priceStr = QString::number(price);
            }
        }
    }
}


void Admin::on_pushButton_RemoveRestaurant_clicked()
{
    QModelIndexList selected = ui->restaurantListWidget->selectionModel()->selectedRows();
    if(selected.isEmpty())
    {
        qDebug() << "Please select a restaurant.";
        return;
    }

    QString name = ui->restaurantListWidget->item(selected.at(0).row())->text();
    qDebug() << "Removing Restaurant: " << name;
    DBManager::getInstance()->DeleteFromDb(name);
    QList<QListWidgetItem*> items = ui->restaurantListWidget->selectedItems();

    foreach(QListWidgetItem* item, items){
        ui->restaurantListWidget->removeItemWidget(item);
        delete item;
    }
}

void Admin::on_pushButton_RemoveMenuItem_clicked()
{
    QModelIndexList selected = ui->itemsListWidget->selectionModel()->selectedRows();
    if(selected.isEmpty())
    {
        qDebug() << "Please select an Item.";
        return;
    }

    QString name = ui->itemsListWidget->item(selected.at(0).row())->text();
    qDebug() << "Removing Item: " << name;
    DBManager::getInstance()->DeleteFromDb(name);
    QList<QListWidgetItem*> items = ui->itemsListWidget->selectedItems();

    foreach(QListWidgetItem* item, items){
        ui->itemsListWidget->removeItemWidget(item);
        delete item;
    }
}

void Admin::on_pushButton_AddFromFile_clicked()
{
    DBManager::getInstance()->uploadFileToDatabase(":/res/CS1D Spring 2018 New Fast Food Project.txt");
	
	listRestaurants();
	ui->pushButton_AddFromFile->setEnabled(false);
}

void Admin::on_pushButton_AddMenuItem_clicked()
{
    addMenuItem *addMenuItemWindow = new addMenuItem();
    addMenuItemWindow->show();

    QString restaurant;
    QString item;
    double price;

    std::vector<Restaurant>::iterator it;
}

void Admin::on_pushButton_ChangePrice_clicked()
{
    changePrice *priceWindow = new changePrice();
    priceWindow->show();
}
