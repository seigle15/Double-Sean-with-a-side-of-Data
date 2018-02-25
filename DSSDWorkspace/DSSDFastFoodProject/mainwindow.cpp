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

        this->close();    }
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
//    qDebug() << "button pushed";
}

void MainWindow::on_menuListWidget_itemActivated(QListWidgetItem* item)
{
//    qDebug() << "Item clicked";
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
