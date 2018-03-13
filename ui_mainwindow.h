/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *MenuTabs;
    QWidget *homeTab;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *customTripTab;
    QStackedWidget *stackedWidget_2;
    QWidget *page_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QListWidget *restaurantListWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *AddRestaurant;
    QPushButton *Remove;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QListWidget *menuListWidget;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QPushButton *addItemButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *itemPrice_lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QVBoxLayout *verticalLayout_7;
    QPushButton *removeItemButton;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *itemNameToRemove_lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *displayTotalLine;
    QWidget *page_6;
    QWidget *TripTab;
    QStackedWidget *stackedWidget_3;
    QWidget *page_7;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_12;
    QListWidget *restaurantListWidget_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_19;
    QLineEdit *lineEdit;
    QPushButton *addItemButton_3;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_13;
    QListWidget *menuListWidget_2;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_18;
    QPushButton *addItemButton_2;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *itemPrice_lineEdit_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_20;
    QPushButton *removeItemButton_2;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QLineEdit *itemNameToRemove_lineEdit_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLineEdit *displayTotalLine_2;
    QWidget *page_8;
    QWidget *AdminTab;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(960, 620);
        QPalette palette;
        QBrush brush(QColor(198, 197, 185, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(39, 41, 50, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(2, 2, 2, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MenuTabs = new QTabWidget(centralWidget);
        MenuTabs->setObjectName(QStringLiteral("MenuTabs"));
        MenuTabs->setGeometry(QRect(46, 9, 871, 551));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush2);
        MenuTabs->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        MenuTabs->setFont(font);
        MenuTabs->setAutoFillBackground(true);
        homeTab = new QWidget();
        homeTab->setObjectName(QStringLiteral("homeTab"));
        stackedWidget = new QStackedWidget(homeTab);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, -1, 871, 521));
        stackedWidget->setAutoFillBackground(true);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget->addWidget(page_4);
        MenuTabs->addTab(homeTab, QString());
        customTripTab = new QWidget();
        customTripTab->setObjectName(QStringLiteral("customTripTab"));
        stackedWidget_2 = new QStackedWidget(customTripTab);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(-1, -1, 871, 521));
        stackedWidget_2->setAutoFillBackground(true);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        layoutWidget = new QWidget(page_5);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 12, 841, 501));
        verticalLayout_11 = new QVBoxLayout(layoutWidget);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_7->setPalette(palette2);
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_7->setAutoFillBackground(true);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush4(QColor(94, 128, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label_4->setPalette(palette3);
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setAutoFillBackground(true);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        restaurantListWidget = new QListWidget(layoutWidget);
        restaurantListWidget->setObjectName(QStringLiteral("restaurantListWidget"));
        QFont font3;
        font3.setFamily(QStringLiteral("Roboto"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        restaurantListWidget->setFont(font3);
        restaurantListWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(restaurantListWidget);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        AddRestaurant = new QPushButton(layoutWidget);
        AddRestaurant->setObjectName(QStringLiteral("AddRestaurant"));
        AddRestaurant->setFont(font);

        horizontalLayout_3->addWidget(AddRestaurant);

        Remove = new QPushButton(layoutWidget);
        Remove->setObjectName(QStringLiteral("Remove"));
        Remove->setFont(font);

        horizontalLayout_3->addWidget(Remove);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_10->addLayout(verticalLayout_4);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label_5->setPalette(palette4);
        label_5->setFont(font2);
        label_5->setAutoFillBackground(true);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);

        menuListWidget = new QListWidget(layoutWidget);
        menuListWidget->setObjectName(QStringLiteral("menuListWidget"));
        menuListWidget->setFont(font3);
        menuListWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout_3->addWidget(menuListWidget);


        verticalLayout_9->addLayout(verticalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        addItemButton = new QPushButton(layoutWidget);
        addItemButton->setObjectName(QStringLiteral("addItemButton"));
        addItemButton->setFont(font);

        verticalLayout_5->addWidget(addItemButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush5(QColor(175, 27, 63, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_3->setPalette(palette5);
        label_3->setAutoFillBackground(true);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_3);

        itemPrice_lineEdit = new QLineEdit(layoutWidget);
        itemPrice_lineEdit->setObjectName(QStringLiteral("itemPrice_lineEdit"));
        itemPrice_lineEdit->setAlignment(Qt::AlignCenter);
        itemPrice_lineEdit->setReadOnly(true);

        horizontalLayout_6->addWidget(itemPrice_lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_8->setPalette(palette6);
        label_8->setAutoFillBackground(true);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_8);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_5->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout);


        horizontalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        removeItemButton = new QPushButton(layoutWidget);
        removeItemButton->setObjectName(QStringLiteral("removeItemButton"));
        removeItemButton->setFont(font);

        verticalLayout_7->addWidget(removeItemButton);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_9->setPalette(palette7);
        label_9->setAutoFillBackground(true);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_9);

        itemNameToRemove_lineEdit = new QLineEdit(layoutWidget);
        itemNameToRemove_lineEdit->setObjectName(QStringLiteral("itemNameToRemove_lineEdit"));
        itemNameToRemove_lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(itemNameToRemove_lineEdit);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_10->setPalette(palette8);
        label_10->setAutoFillBackground(true);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_10);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_8->addWidget(lineEdit_4);


        verticalLayout_6->addLayout(horizontalLayout_8);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout_9->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_9);


        verticalLayout_10->addLayout(verticalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_6->setPalette(palette9);
        label_6->setFont(font);
        label_6->setAutoFillBackground(true);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_6);

        displayTotalLine = new QLineEdit(layoutWidget);
        displayTotalLine->setObjectName(QStringLiteral("displayTotalLine"));
        displayTotalLine->setFont(font);
        displayTotalLine->setAlignment(Qt::AlignCenter);
        displayTotalLine->setReadOnly(true);

        horizontalLayout_4->addWidget(displayTotalLine);


        verticalLayout_10->addLayout(horizontalLayout_4);


        horizontalLayout_10->addLayout(verticalLayout_10);


        verticalLayout_11->addLayout(horizontalLayout_10);

        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        stackedWidget_2->addWidget(page_6);
        MenuTabs->addTab(customTripTab, QString());
        TripTab = new QWidget();
        TripTab->setObjectName(QStringLiteral("TripTab"));
        stackedWidget_3 = new QStackedWidget(TripTab);
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(0, 0, 1151, 601));
        stackedWidget_3->setAutoFillBackground(true);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        layoutWidget_2 = new QWidget(page_7);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(12, 12, 841, 501));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_11->setPalette(palette10);
        label_11->setFont(font1);
        label_11->setAutoFillBackground(true);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_11);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label_12->setPalette(palette11);
        label_12->setFont(font2);
        label_12->setAutoFillBackground(true);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(label_12);

        restaurantListWidget_2 = new QListWidget(layoutWidget_2);
        restaurantListWidget_2->setObjectName(QStringLiteral("restaurantListWidget_2"));
        restaurantListWidget_2->setFont(font3);
        restaurantListWidget_2->setFrameShape(QFrame::NoFrame);

        verticalLayout_14->addWidget(restaurantListWidget_2);


        verticalLayout_13->addLayout(verticalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_19 = new QLabel(layoutWidget_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_19->setPalette(palette12);
        label_19->setAutoFillBackground(true);
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_19);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_12->addWidget(lineEdit);

        addItemButton_3 = new QPushButton(layoutWidget_2);
        addItemButton_3->setObjectName(QStringLiteral("addItemButton_3"));
        addItemButton_3->setFont(font);

        horizontalLayout_12->addWidget(addItemButton_3);


        verticalLayout_13->addLayout(horizontalLayout_12);


        horizontalLayout_11->addLayout(verticalLayout_13);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label_13->setPalette(palette13);
        label_13->setFont(font2);
        label_13->setAutoFillBackground(true);
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(label_13);

        menuListWidget_2 = new QListWidget(layoutWidget_2);
        menuListWidget_2->setObjectName(QStringLiteral("menuListWidget_2"));
        menuListWidget_2->setFont(font3);
        menuListWidget_2->setFrameShape(QFrame::NoFrame);

        verticalLayout_17->addWidget(menuListWidget_2);


        verticalLayout_16->addLayout(verticalLayout_17);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        addItemButton_2 = new QPushButton(layoutWidget_2);
        addItemButton_2->setObjectName(QStringLiteral("addItemButton_2"));
        addItemButton_2->setFont(font);

        verticalLayout_18->addWidget(addItemButton_2);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_14->setPalette(palette14);
        label_14->setAutoFillBackground(true);
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_14);

        itemPrice_lineEdit_2 = new QLineEdit(layoutWidget_2);
        itemPrice_lineEdit_2->setObjectName(QStringLiteral("itemPrice_lineEdit_2"));
        itemPrice_lineEdit_2->setAlignment(Qt::AlignCenter);
        itemPrice_lineEdit_2->setReadOnly(true);

        horizontalLayout_14->addWidget(itemPrice_lineEdit_2);


        verticalLayout_19->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_15->setPalette(palette15);
        label_15->setAutoFillBackground(true);
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_15);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_15->addWidget(lineEdit_3);


        verticalLayout_19->addLayout(horizontalLayout_15);


        verticalLayout_18->addLayout(verticalLayout_19);


        horizontalLayout_13->addLayout(verticalLayout_18);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        removeItemButton_2 = new QPushButton(layoutWidget_2);
        removeItemButton_2->setObjectName(QStringLiteral("removeItemButton_2"));
        removeItemButton_2->setFont(font);

        verticalLayout_20->addWidget(removeItemButton_2);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_16->setPalette(palette16);
        label_16->setAutoFillBackground(true);
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_16);

        itemNameToRemove_lineEdit_2 = new QLineEdit(layoutWidget_2);
        itemNameToRemove_lineEdit_2->setObjectName(QStringLiteral("itemNameToRemove_lineEdit_2"));
        itemNameToRemove_lineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(itemNameToRemove_lineEdit_2);


        verticalLayout_21->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_17->setPalette(palette17);
        label_17->setAutoFillBackground(true);
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(label_17);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_17->addWidget(lineEdit_5);


        verticalLayout_21->addLayout(horizontalLayout_17);


        verticalLayout_20->addLayout(verticalLayout_21);


        horizontalLayout_13->addLayout(verticalLayout_20);


        verticalLayout_16->addLayout(horizontalLayout_13);


        verticalLayout_15->addLayout(verticalLayout_16);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_18->setPalette(palette18);
        label_18->setFont(font);
        label_18->setAutoFillBackground(true);
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label_18);

        displayTotalLine_2 = new QLineEdit(layoutWidget_2);
        displayTotalLine_2->setObjectName(QStringLiteral("displayTotalLine_2"));
        displayTotalLine_2->setFont(font);
        displayTotalLine_2->setAlignment(Qt::AlignCenter);
        displayTotalLine_2->setReadOnly(true);

        horizontalLayout_18->addWidget(displayTotalLine_2);


        verticalLayout_15->addLayout(horizontalLayout_18);


        horizontalLayout_11->addLayout(verticalLayout_15);


        verticalLayout_12->addLayout(horizontalLayout_11);

        stackedWidget_3->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        stackedWidget_3->addWidget(page_8);
        MenuTabs->addTab(TripTab, QString());
        AdminTab = new QWidget();
        AdminTab->setObjectName(QStringLiteral("AdminTab"));
        groupBox = new QGroupBox(AdminTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 140, 251, 161));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 40, 231, 111));
        verticalLayout_8 = new QVBoxLayout(layoutWidget1);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_Username = new QLineEdit(layoutWidget1);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(lineEdit_Username);


        verticalLayout_8->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Password = new QLineEdit(layoutWidget1);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Password);


        verticalLayout_8->addLayout(horizontalLayout_2);

        pushButton_Login = new QPushButton(layoutWidget1);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));

        verticalLayout_8->addWidget(pushButton_Login);

        MenuTabs->addTab(AdminTab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 960, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        MenuTabs->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        MenuTabs->setTabText(MenuTabs->indexOf(homeTab), QApplication::translate("MainWindow", "Home", 0));
        label_7->setText(QApplication::translate("MainWindow", "Plan Your Custom Trip Now!", 0));
        label_4->setText(QApplication::translate("MainWindow", "Restaurants", 0));
#ifndef QT_NO_TOOLTIP
        restaurantListWidget->setToolTip(QApplication::translate("MainWindow", "double-click to see menu", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        restaurantListWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        AddRestaurant->setText(QApplication::translate("MainWindow", "Add", 0));
        Remove->setText(QApplication::translate("MainWindow", "Remove", 0));
        label_5->setText(QApplication::translate("MainWindow", "Menu", 0));
        addItemButton->setText(QApplication::translate("MainWindow", "Add", 0));
        label_3->setText(QApplication::translate("MainWindow", "    Price   ", 0));
        label_8->setText(QApplication::translate("MainWindow", "     Qty     ", 0));
        removeItemButton->setText(QApplication::translate("MainWindow", "Remove", 0));
        label_9->setText(QApplication::translate("MainWindow", "   Item   ", 0));
        label_10->setText(QApplication::translate("MainWindow", "    Qty    ", 0));
        label_6->setText(QApplication::translate("MainWindow", "    Total    ", 0));
        MenuTabs->setTabText(MenuTabs->indexOf(customTripTab), QApplication::translate("MainWindow", "Custom Trip", 0));
        label_11->setText(QApplication::translate("MainWindow", "Plan Your Trip Now!", 0));
        label_12->setText(QApplication::translate("MainWindow", "Locations", 0));
#ifndef QT_NO_TOOLTIP
        restaurantListWidget_2->setToolTip(QApplication::translate("MainWindow", "double-click to see menu", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        restaurantListWidget_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_19->setText(QApplication::translate("MainWindow", "Location", 0));
        addItemButton_3->setText(QApplication::translate("MainWindow", "Add", 0));
        label_13->setText(QApplication::translate("MainWindow", "Menu", 0));
        addItemButton_2->setText(QApplication::translate("MainWindow", "Add", 0));
        label_14->setText(QApplication::translate("MainWindow", "    Price   ", 0));
        label_15->setText(QApplication::translate("MainWindow", "     Qty     ", 0));
        removeItemButton_2->setText(QApplication::translate("MainWindow", "Remove", 0));
        label_16->setText(QApplication::translate("MainWindow", "   Item   ", 0));
        label_17->setText(QApplication::translate("MainWindow", "    Qty    ", 0));
        label_18->setText(QApplication::translate("MainWindow", "    Total    ", 0));
        MenuTabs->setTabText(MenuTabs->indexOf(TripTab), QApplication::translate("MainWindow", "Normal Trip", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Admin Login", 0));
        label->setText(QApplication::translate("MainWindow", "Username:", 0));
        lineEdit_Username->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Password: ", 0));
        lineEdit_Password->setText(QString());
        pushButton_Login->setText(QApplication::translate("MainWindow", "Login", 0));
        MenuTabs->setTabText(MenuTabs->indexOf(AdminTab), QApplication::translate("MainWindow", "Admin Login", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
