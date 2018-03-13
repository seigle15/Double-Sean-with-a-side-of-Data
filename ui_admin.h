/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QListWidget *restaurantListWidget;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QListWidget *itemsListWidget;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QListWidget *priceListWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_AddRestaurant;
    QLineEdit *lineEdit;
    QPushButton *pushButton_RemoveRestaurant;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_AddMenuItem;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_RemoveMenuItem;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_ChangePrice;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_Logout;
    QPushButton *pushButton_AddFromFile;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(810, 600);
        QPalette palette;
        QBrush brush(QColor(198, 197, 185, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(39, 41, 50, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(2, 2, 2, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        Admin->setPalette(palette);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 681, 571));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget_2 = new QWidget(tab);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 251, 531));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush4(QColor(94, 128, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label_4->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setAutoFillBackground(true);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        restaurantListWidget = new QListWidget(layoutWidget_2);
        restaurantListWidget->setObjectName(QStringLiteral("restaurantListWidget"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        restaurantListWidget->setPalette(palette2);
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        restaurantListWidget->setFont(font2);
        restaurantListWidget->setAutoFillBackground(false);
        restaurantListWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout_3->addWidget(restaurantListWidget);

        layoutWidget_3 = new QWidget(tab);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(260, 0, 261, 369));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label_5->setPalette(palette3);
        label_5->setFont(font1);
        label_5->setAutoFillBackground(true);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        itemsListWidget = new QListWidget(layoutWidget_3);
        itemsListWidget->setObjectName(QStringLiteral("itemsListWidget"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        itemsListWidget->setPalette(palette4);
        itemsListWidget->setFont(font2);
        itemsListWidget->setAutoFillBackground(false);
        itemsListWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout_4->addWidget(itemsListWidget);

        layoutWidget_4 = new QWidget(tab);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(530, 0, 141, 369));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label_6->setPalette(palette5);
        label_6->setFont(font1);
        label_6->setAutoFillBackground(true);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        priceListWidget = new QListWidget(layoutWidget_4);
        priceListWidget->setObjectName(QStringLiteral("priceListWidget"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        priceListWidget->setPalette(palette6);
        priceListWidget->setFont(font2);
        priceListWidget->setAutoFillBackground(false);
        priceListWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout_5->addWidget(priceListWidget);

        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(261, 378, 411, 152));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_AddRestaurant = new QPushButton(layoutWidget);
        pushButton_AddRestaurant->setObjectName(QStringLiteral("pushButton_AddRestaurant"));

        horizontalLayout_2->addWidget(pushButton_AddRestaurant);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_RemoveRestaurant = new QPushButton(layoutWidget);
        pushButton_RemoveRestaurant->setObjectName(QStringLiteral("pushButton_RemoveRestaurant"));

        verticalLayout->addWidget(pushButton_RemoveRestaurant);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_AddMenuItem = new QPushButton(layoutWidget);
        pushButton_AddMenuItem->setObjectName(QStringLiteral("pushButton_AddMenuItem"));

        horizontalLayout_3->addWidget(pushButton_AddMenuItem);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_RemoveMenuItem = new QPushButton(layoutWidget);
        pushButton_RemoveMenuItem->setObjectName(QStringLiteral("pushButton_RemoveMenuItem"));

        verticalLayout->addWidget(pushButton_RemoveMenuItem);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_ChangePrice = new QPushButton(layoutWidget);
        pushButton_ChangePrice->setObjectName(QStringLiteral("pushButton_ChangePrice"));

        horizontalLayout->addWidget(pushButton_ChangePrice);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        layoutWidget->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();
        layoutWidget_4->raise();
        pushButton_Logout = new QPushButton(centralwidget);
        pushButton_Logout->setObjectName(QStringLiteral("pushButton_Logout"));
        pushButton_Logout->setGeometry(QRect(700, 260, 101, 41));
        pushButton_AddFromFile = new QPushButton(centralwidget);
        pushButton_AddFromFile->setObjectName(QStringLiteral("pushButton_AddFromFile"));
        pushButton_AddFromFile->setGeometry(QRect(700, 470, 101, 41));
        Admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 810, 17));
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "MainWindow", 0));
        label_4->setText(QApplication::translate("Admin", "Restaurants", 0));
#ifndef QT_NO_TOOLTIP
        restaurantListWidget->setToolTip(QApplication::translate("Admin", "double-click to see menu", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        restaurantListWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("Admin", "Items", 0));
#ifndef QT_NO_TOOLTIP
        itemsListWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        itemsListWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_6->setText(QApplication::translate("Admin", "Prices", 0));
#ifndef QT_NO_TOOLTIP
        priceListWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        priceListWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton_AddRestaurant->setText(QApplication::translate("Admin", "Add Restaurant", 0));
        pushButton_RemoveRestaurant->setText(QApplication::translate("Admin", "Remove Restaurant", 0));
        pushButton_AddMenuItem->setText(QApplication::translate("Admin", "Add Menu Item", 0));
        pushButton_RemoveMenuItem->setText(QApplication::translate("Admin", "Remove Menu Item", 0));
        pushButton_ChangePrice->setText(QApplication::translate("Admin", "Change Item Price", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Admin", "Admin", 0));
        pushButton_Logout->setText(QApplication::translate("Admin", "Logout", 0));
        pushButton_AddFromFile->setText(QApplication::translate("Admin", "Add File Restaurants", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
