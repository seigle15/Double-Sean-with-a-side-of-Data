#include "mainwindow.h"
#include "dbmanager.h"
#include "restaurant.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   /* The following code has already ran once, it will just add more
    * entries if you run it again. Wait until we have a way to determine
    * if there has already been an exection before uncommenting this code
    */

//    DBManager::getInstance()->uploadFileToDatabase(":/res/CS1D Spring 2018 Fast Food Project.txt");
//    DBManager::getInstance()->uploadFileToDatabase(":/res/CS1D Spring 2018 New Fast Food Project.txt");

    DBManager::getInstance()->databaseToRestaurants();  // this line of code fills our class objects with the data from our database to be worked with in our project

//    Uncomment testDB() to see how the objects are filled the same as the data files
//    DBManager::getInstance()->testDB();

    MainWindow w;
    w.show();

    return a.exec();
}
