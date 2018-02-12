/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QListWidget *listWidget_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QWidget *page_6;
    QWidget *tab;
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
        layoutWidget->setGeometry(QRect(20, 20, 831, 481));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
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

        verticalLayout_7->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
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

        listWidget = new QListWidget(layoutWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QFont font3;
        font3.setFamily(QStringLiteral("Roboto"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        listWidget->setFont(font3);
        listWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(listWidget);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font);

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
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

        listWidget_2 = new QListWidget(layoutWidget);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setFont(font3);
        listWidget_2->setFrameShape(QFrame::NoFrame);

        verticalLayout_3->addWidget(listWidget_2);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);

        horizontalLayout_5->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font);

        horizontalLayout_5->addWidget(pushButton_5);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
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
        label_6->setPalette(palette5);
        label_6->setFont(font);
        label_6->setAutoFillBackground(true);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_6);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setFont(font);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_6);

        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        stackedWidget_2->addWidget(page_6);
        MenuTabs->addTab(customTripTab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
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

        MenuTabs->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 960, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        MenuTabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        MenuTabs->setTabText(MenuTabs->indexOf(homeTab), QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Plan Your Custom Trip Now!", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Restaurants", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "RESTAURANT LIST                           DISTANCE FROM SADDLEBACK", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "MacDonald's                                                      8    Miles", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "Chipotle                                                            29   Miles", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "Domino's Pizza                                                 41   Miles", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "KFC                                                                    56   Miles", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "Subway                                                             67   Miles", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "In-N-Out Burger                                              94   Miles", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "Wendy's                                                            44   Miles", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "Jack in the Box                                                 75   Miles", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "El Pollo Loco                                                     19   Miles", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "Papa John's Pizza                                             54   Miles", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton_2->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));

        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem11 = listWidget_2->item(0);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "Menu items will display here...", Q_NULLPTR));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        pushButton_4->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "    Total    ", Q_NULLPTR));
        MenuTabs->setTabText(MenuTabs->indexOf(customTripTab), QApplication::translate("MainWindow", "Custom Trip", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Admin Login", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        lineEdit_Username->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Password: ", Q_NULLPTR));
        lineEdit_Password->setText(QString());
        pushButton_Login->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        MenuTabs->setTabText(MenuTabs->indexOf(tab), QApplication::translate("MainWindow", "Admin Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
