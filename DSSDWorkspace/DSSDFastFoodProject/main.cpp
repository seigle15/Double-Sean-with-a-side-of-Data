#include "mainwindow.h"
#include "dbmanager.h"
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

    MainWindow w;
    w.show();

    return a.exec();
}
