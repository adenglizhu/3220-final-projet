/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *giftButton;
    QLabel *background_5;
    QLabel *label_4;
    QLabel *label_6;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *add2;
    QLabel *eyeliner1;
    QPushButton *delete_3;
    QLabel *eyeliner2;
    QLabel *eyeliner3;
    QPushButton *deleteEyeliner3;
    QPushButton *addEyeliner3;
    QLabel *eyeliner4;
    QPushButton *deleteEyeliner4;
    QPushButton *addEyeliner4;
    QLabel *eyelinePlayer;
    QWidget *tab_2;
    QPushButton *addLipstick2;
    QLabel *lipstick4;
    QLabel *lipstick3;
    QLabel *lipstick1;
    QPushButton *deleteLipstick4;
    QPushButton *deleteLipstick1;
    QPushButton *addLipstick4;
    QPushButton *deleteLipstick2;
    QLabel *lipstick2;
    QPushButton *deleteLipstick3;
    QPushButton *addLipstick1;
    QPushButton *addLipstick3;
    QWidget *tab_5;
    QPushButton *addFoundation2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *deleteFoundation4;
    QPushButton *deleteFoundation1;
    QPushButton *addFoundation4;
    QPushButton *deleteFoundation2;
    QLabel *label_18;
    QPushButton *deleteFoundation3;
    QPushButton *addFoundation1;
    QPushButton *addFoundation3;
    QLabel *price;
    QPushButton *shoppingCart;
    QLabel *itemCount;
    QPushButton *nextButton;
    QPushButton *backButton;
    QLabel *background;
    QWidget *page_4;
    QLabel *label_3;
    QPushButton *backButton3;
    QPushButton *buyButton;
    QLabel *warp1;
    QLabel *warp2;
    QLabel *warp3;
    QRadioButton *warpButton;
    QRadioButton *warpButton2;
    QRadioButton *warpButton3;
    QLabel *totalPrice;
    QLabel *background_2;
    QWidget *page_5;
    QPushButton *backButtonG;
    QRadioButton *visaGift;
    QRadioButton *MasterGift;
    QRadioButton *discoverGift;
    QRadioButton *americanGift;
    QLineEdit *numberEnter;
    QPushButton *pay;
    QLabel *total;
    QLabel *background_3;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *address1;
    QLineEdit *address2;
    QLabel *label_11;
    QLineEdit *city;
    QLabel *label_12;
    QLineEdit *state;
    QLabel *label_13;
    QLineEdit *zipCode;
    QWidget *page_6;
    QLabel *label_5;
    QLabel *shoppingList;
    QPushButton *pushButton;
    QLabel *background_4;
    QLabel *label_8;
    QWidget *page_3;
    QLabel *label;
    QLabel *summary;
    QLabel *label_2;
    QPushButton *endButton_2;
    QLabel *payInfo;
    QLabel *label_7;
    QLabel *addressOne;
    QLabel *addressTwo;
    QLabel *cityy;
    QLabel *statee;
    QLabel *zip;
    QMenuBar *menubar;
    QMenu *menumake_up;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(890, 698);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 871, 651));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->setLineWidth(1000);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        giftButton = new QPushButton(page);
        giftButton->setObjectName(QString::fromUtf8("giftButton"));
        giftButton->setGeometry(QRect(300, 480, 251, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Papyrus"));
        font.setPointSize(16);
        giftButton->setFont(font);
        background_5 = new QLabel(page);
        background_5->setObjectName(QString::fromUtf8("background_5"));
        background_5->setGeometry(QRect(0, 0, 871, 621));
        background_5->setAutoFillBackground(false);
        background_5->setStyleSheet(QString::fromUtf8("border-image: url(:/image/image/background.jpg);"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 140, 571, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MV Boli"));
        font1.setPointSize(22);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 290, 831, 141));
        QFont font2;
        font2.setPointSize(11);
        label_6->setFont(font2);
        stackedWidget->addWidget(page);
        background_5->raise();
        giftButton->raise();
        label_4->raise();
        label_6->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(50, 60, 621, 481));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        add = new QPushButton(tab);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(40, 280, 31, 31));
        add->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        add->setIconSize(QSize(30, 30));
        delete_2 = new QPushButton(tab);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(170, 280, 31, 31));
        delete_2->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        delete_2->setIconSize(QSize(30, 30));
        add2 = new QPushButton(tab);
        add2->setObjectName(QString::fromUtf8("add2"));
        add2->setGeometry(QRect(40, 410, 31, 31));
        add2->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        eyeliner1 = new QLabel(tab);
        eyeliner1->setObjectName(QString::fromUtf8("eyeliner1"));
        eyeliner1->setGeometry(QRect(40, 180, 161, 81));
        delete_3 = new QPushButton(tab);
        delete_3->setObjectName(QString::fromUtf8("delete_3"));
        delete_3->setGeometry(QRect(170, 410, 31, 31));
        delete_3->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        eyeliner2 = new QLabel(tab);
        eyeliner2->setObjectName(QString::fromUtf8("eyeliner2"));
        eyeliner2->setGeometry(QRect(40, 330, 161, 81));
        eyeliner3 = new QLabel(tab);
        eyeliner3->setObjectName(QString::fromUtf8("eyeliner3"));
        eyeliner3->setGeometry(QRect(350, 180, 161, 81));
        deleteEyeliner3 = new QPushButton(tab);
        deleteEyeliner3->setObjectName(QString::fromUtf8("deleteEyeliner3"));
        deleteEyeliner3->setGeometry(QRect(480, 280, 31, 31));
        deleteEyeliner3->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        addEyeliner3 = new QPushButton(tab);
        addEyeliner3->setObjectName(QString::fromUtf8("addEyeliner3"));
        addEyeliner3->setGeometry(QRect(350, 280, 31, 31));
        addEyeliner3->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        eyeliner4 = new QLabel(tab);
        eyeliner4->setObjectName(QString::fromUtf8("eyeliner4"));
        eyeliner4->setGeometry(QRect(350, 330, 161, 81));
        deleteEyeliner4 = new QPushButton(tab);
        deleteEyeliner4->setObjectName(QString::fromUtf8("deleteEyeliner4"));
        deleteEyeliner4->setGeometry(QRect(480, 410, 31, 31));
        deleteEyeliner4->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        addEyeliner4 = new QPushButton(tab);
        addEyeliner4->setObjectName(QString::fromUtf8("addEyeliner4"));
        addEyeliner4->setGeometry(QRect(350, 410, 31, 31));
        addEyeliner4->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        eyelinePlayer = new QLabel(tab);
        eyelinePlayer->setObjectName(QString::fromUtf8("eyelinePlayer"));
        eyelinePlayer->setGeometry(QRect(150, 10, 291, 161));
        tabWidget->addTab(tab, QString());
        delete_2->raise();
        add2->raise();
        eyeliner1->raise();
        delete_3->raise();
        eyeliner2->raise();
        eyeliner3->raise();
        deleteEyeliner3->raise();
        addEyeliner3->raise();
        eyeliner4->raise();
        deleteEyeliner4->raise();
        addEyeliner4->raise();
        add->raise();
        eyelinePlayer->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        addLipstick2 = new QPushButton(tab_2);
        addLipstick2->setObjectName(QString::fromUtf8("addLipstick2"));
        addLipstick2->setGeometry(QRect(40, 390, 31, 31));
        addLipstick2->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        lipstick4 = new QLabel(tab_2);
        lipstick4->setObjectName(QString::fromUtf8("lipstick4"));
        lipstick4->setGeometry(QRect(350, 260, 171, 101));
        lipstick3 = new QLabel(tab_2);
        lipstick3->setObjectName(QString::fromUtf8("lipstick3"));
        lipstick3->setGeometry(QRect(350, 30, 171, 101));
        lipstick1 = new QLabel(tab_2);
        lipstick1->setObjectName(QString::fromUtf8("lipstick1"));
        lipstick1->setGeometry(QRect(50, 30, 171, 101));
        deleteLipstick4 = new QPushButton(tab_2);
        deleteLipstick4->setObjectName(QString::fromUtf8("deleteLipstick4"));
        deleteLipstick4->setGeometry(QRect(480, 390, 31, 31));
        deleteLipstick4->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        deleteLipstick1 = new QPushButton(tab_2);
        deleteLipstick1->setObjectName(QString::fromUtf8("deleteLipstick1"));
        deleteLipstick1->setGeometry(QRect(170, 150, 31, 31));
        deleteLipstick1->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        addLipstick4 = new QPushButton(tab_2);
        addLipstick4->setObjectName(QString::fromUtf8("addLipstick4"));
        addLipstick4->setGeometry(QRect(350, 390, 31, 31));
        addLipstick4->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        deleteLipstick2 = new QPushButton(tab_2);
        deleteLipstick2->setObjectName(QString::fromUtf8("deleteLipstick2"));
        deleteLipstick2->setGeometry(QRect(170, 390, 31, 31));
        deleteLipstick2->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        lipstick2 = new QLabel(tab_2);
        lipstick2->setObjectName(QString::fromUtf8("lipstick2"));
        lipstick2->setGeometry(QRect(50, 260, 171, 101));
        deleteLipstick3 = new QPushButton(tab_2);
        deleteLipstick3->setObjectName(QString::fromUtf8("deleteLipstick3"));
        deleteLipstick3->setGeometry(QRect(480, 150, 31, 31));
        deleteLipstick3->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        addLipstick1 = new QPushButton(tab_2);
        addLipstick1->setObjectName(QString::fromUtf8("addLipstick1"));
        addLipstick1->setGeometry(QRect(40, 150, 31, 31));
        addLipstick1->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        addLipstick1->setIconSize(QSize(30, 30));
        addLipstick3 = new QPushButton(tab_2);
        addLipstick3->setObjectName(QString::fromUtf8("addLipstick3"));
        addLipstick3->setGeometry(QRect(350, 150, 31, 31));
        addLipstick3->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        addFoundation2 = new QPushButton(tab_5);
        addFoundation2->setObjectName(QString::fromUtf8("addFoundation2"));
        addFoundation2->setGeometry(QRect(40, 390, 31, 31));
        addFoundation2->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(360, 260, 171, 101));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(350, 30, 171, 101));
        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(50, 30, 171, 101));
        deleteFoundation4 = new QPushButton(tab_5);
        deleteFoundation4->setObjectName(QString::fromUtf8("deleteFoundation4"));
        deleteFoundation4->setGeometry(QRect(480, 390, 31, 31));
        deleteFoundation4->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        deleteFoundation1 = new QPushButton(tab_5);
        deleteFoundation1->setObjectName(QString::fromUtf8("deleteFoundation1"));
        deleteFoundation1->setGeometry(QRect(170, 150, 31, 31));
        deleteFoundation1->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        addFoundation4 = new QPushButton(tab_5);
        addFoundation4->setObjectName(QString::fromUtf8("addFoundation4"));
        addFoundation4->setGeometry(QRect(350, 390, 31, 31));
        addFoundation4->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        deleteFoundation2 = new QPushButton(tab_5);
        deleteFoundation2->setObjectName(QString::fromUtf8("deleteFoundation2"));
        deleteFoundation2->setGeometry(QRect(170, 390, 31, 31));
        deleteFoundation2->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        label_18 = new QLabel(tab_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(50, 260, 171, 101));
        deleteFoundation3 = new QPushButton(tab_5);
        deleteFoundation3->setObjectName(QString::fromUtf8("deleteFoundation3"));
        deleteFoundation3->setGeometry(QRect(480, 150, 31, 31));
        deleteFoundation3->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/min_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        addFoundation1 = new QPushButton(tab_5);
        addFoundation1->setObjectName(QString::fromUtf8("addFoundation1"));
        addFoundation1->setGeometry(QRect(40, 150, 31, 31));
        addFoundation1->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        addFoundation3 = new QPushButton(tab_5);
        addFoundation3->setObjectName(QString::fromUtf8("addFoundation3"));
        addFoundation3->setGeometry(QRect(350, 150, 31, 31));
        addFoundation3->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/plus_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        tabWidget->addTab(tab_5, QString());
        price = new QLabel(page_2);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(670, 250, 181, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MV Boli"));
        font3.setPointSize(20);
        price->setFont(font3);
        shoppingCart = new QPushButton(page_2);
        shoppingCart->setObjectName(QString::fromUtf8("shoppingCart"));
        shoppingCart->setGeometry(QRect(690, 90, 51, 51));
        shoppingCart->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/image/cart.png);"));
        itemCount = new QLabel(page_2);
        itemCount->setObjectName(QString::fromUtf8("itemCount"));
        itemCount->setGeometry(QRect(740, 110, 71, 20));
        QFont font4;
        font4.setPointSize(14);
        itemCount->setFont(font4);
        itemCount->setAlignment(Qt::AlignCenter);
        nextButton = new QPushButton(page_2);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(810, 570, 41, 41));
        nextButton->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/next_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        backButton = new QPushButton(page_2);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(20, 570, 41, 41));
        backButton->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/back_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        background = new QLabel(page_2);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 871, 621));
        background->setAutoFillBackground(false);
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/image/image/background.jpg);"));
        stackedWidget->addWidget(page_2);
        background->raise();
        tabWidget->raise();
        price->raise();
        shoppingCart->raise();
        itemCount->raise();
        nextButton->raise();
        backButton->raise();
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 30, 321, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("MV Boli"));
        font5.setPointSize(26);
        label_3->setFont(font5);
        label_3->setAlignment(Qt::AlignCenter);
        backButton3 = new QPushButton(page_4);
        backButton3->setObjectName(QString::fromUtf8("backButton3"));
        backButton3->setGeometry(QRect(40, 540, 51, 51));
        backButton3->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/back_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        buyButton = new QPushButton(page_4);
        buyButton->setObjectName(QString::fromUtf8("buyButton"));
        buyButton->setGeometry(QRect(730, 530, 51, 51));
        buyButton->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/check.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        warp1 = new QLabel(page_4);
        warp1->setObjectName(QString::fromUtf8("warp1"));
        warp1->setGeometry(QRect(90, 180, 161, 141));
        warp2 = new QLabel(page_4);
        warp2->setObjectName(QString::fromUtf8("warp2"));
        warp2->setGeometry(QRect(380, 180, 161, 141));
        warp3 = new QLabel(page_4);
        warp3->setObjectName(QString::fromUtf8("warp3"));
        warp3->setGeometry(QRect(660, 180, 161, 141));
        warpButton = new QRadioButton(page_4);
        warpButton->setObjectName(QString::fromUtf8("warpButton"));
        warpButton->setGeometry(QRect(50, 330, 241, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("MV Boli"));
        font6.setPointSize(14);
        warpButton->setFont(font6);
        warpButton2 = new QRadioButton(page_4);
        warpButton2->setObjectName(QString::fromUtf8("warpButton2"));
        warpButton2->setGeometry(QRect(350, 330, 241, 41));
        warpButton2->setFont(font6);
        warpButton3 = new QRadioButton(page_4);
        warpButton3->setObjectName(QString::fromUtf8("warpButton3"));
        warpButton3->setGeometry(QRect(630, 340, 231, 24));
        warpButton3->setFont(font6);
        totalPrice = new QLabel(page_4);
        totalPrice->setObjectName(QString::fromUtf8("totalPrice"));
        totalPrice->setGeometry(QRect(40, 440, 221, 61));
        totalPrice->setFont(font3);
        background_2 = new QLabel(page_4);
        background_2->setObjectName(QString::fromUtf8("background_2"));
        background_2->setGeometry(QRect(0, 0, 871, 621));
        background_2->setAutoFillBackground(false);
        background_2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/image/background.jpg);"));
        stackedWidget->addWidget(page_4);
        background_2->raise();
        label_3->raise();
        backButton3->raise();
        buyButton->raise();
        warp1->raise();
        warp2->raise();
        warp3->raise();
        warpButton->raise();
        warpButton2->raise();
        warpButton3->raise();
        totalPrice->raise();
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        backButtonG = new QPushButton(page_5);
        backButtonG->setObjectName(QString::fromUtf8("backButtonG"));
        backButtonG->setGeometry(QRect(40, 540, 51, 51));
        backButtonG->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/back_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        visaGift = new QRadioButton(page_5);
        visaGift->setObjectName(QString::fromUtf8("visaGift"));
        visaGift->setGeometry(QRect(60, 160, 120, 24));
        QFont font7;
        font7.setFamily(QString::fromUtf8("MV Boli"));
        font7.setPointSize(12);
        visaGift->setFont(font7);
        MasterGift = new QRadioButton(page_5);
        MasterGift->setObjectName(QString::fromUtf8("MasterGift"));
        MasterGift->setGeometry(QRect(60, 220, 120, 24));
        MasterGift->setFont(font7);
        discoverGift = new QRadioButton(page_5);
        discoverGift->setObjectName(QString::fromUtf8("discoverGift"));
        discoverGift->setGeometry(QRect(60, 280, 120, 24));
        discoverGift->setFont(font7);
        americanGift = new QRadioButton(page_5);
        americanGift->setObjectName(QString::fromUtf8("americanGift"));
        americanGift->setGeometry(QRect(60, 340, 161, 31));
        americanGift->setFont(font7);
        numberEnter = new QLineEdit(page_5);
        numberEnter->setObjectName(QString::fromUtf8("numberEnter"));
        numberEnter->setGeometry(QRect(50, 400, 291, 31));
        pay = new QPushButton(page_5);
        pay->setObjectName(QString::fromUtf8("pay"));
        pay->setGeometry(QRect(250, 450, 381, 61));
        pay->setFont(font);
        total = new QLabel(page_5);
        total->setObjectName(QString::fromUtf8("total"));
        total->setGeometry(QRect(60, 70, 271, 61));
        total->setFont(font1);
        background_3 = new QLabel(page_5);
        background_3->setObjectName(QString::fromUtf8("background_3"));
        background_3->setGeometry(QRect(0, 0, 871, 621));
        background_3->setAutoFillBackground(false);
        background_3->setStyleSheet(QString::fromUtf8("border-image: url(:/image/image/background.jpg);"));
        label_9 = new QLabel(page_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(460, 170, 81, 20));
        QFont font8;
        font8.setFamily(QString::fromUtf8("MV Boli"));
        label_9->setFont(font8);
        label_10 = new QLabel(page_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(460, 220, 81, 20));
        label_10->setFont(font8);
        address1 = new QLineEdit(page_5);
        address1->setObjectName(QString::fromUtf8("address1"));
        address1->setGeometry(QRect(570, 160, 271, 31));
        address2 = new QLineEdit(page_5);
        address2->setObjectName(QString::fromUtf8("address2"));
        address2->setGeometry(QRect(570, 210, 271, 31));
        label_11 = new QLabel(page_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(460, 270, 69, 20));
        label_11->setFont(font8);
        city = new QLineEdit(page_5);
        city->setObjectName(QString::fromUtf8("city"));
        city->setGeometry(QRect(570, 260, 111, 31));
        label_12 = new QLabel(page_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(460, 320, 69, 20));
        label_12->setFont(font8);
        state = new QLineEdit(page_5);
        state->setObjectName(QString::fromUtf8("state"));
        state->setGeometry(QRect(570, 310, 111, 31));
        label_13 = new QLabel(page_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(460, 370, 69, 20));
        label_13->setFont(font8);
        zipCode = new QLineEdit(page_5);
        zipCode->setObjectName(QString::fromUtf8("zipCode"));
        zipCode->setGeometry(QRect(570, 360, 111, 31));
        stackedWidget->addWidget(page_5);
        background_3->raise();
        backButtonG->raise();
        visaGift->raise();
        MasterGift->raise();
        discoverGift->raise();
        americanGift->raise();
        numberEnter->raise();
        pay->raise();
        total->raise();
        label_9->raise();
        label_10->raise();
        address1->raise();
        address2->raise();
        label_11->raise();
        city->raise();
        label_12->raise();
        state->raise();
        label_13->raise();
        zipCode->raise();
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        page_6->setStyleSheet(QString::fromUtf8(""));
        label_5 = new QLabel(page_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 30, 341, 61));
        label_5->setFont(font1);
        shoppingList = new QLabel(page_6);
        shoppingList->setObjectName(QString::fromUtf8("shoppingList"));
        shoppingList->setGeometry(QRect(50, 140, 531, 331));
        QFont font9;
        font9.setFamily(QString::fromUtf8("MS Sans Serif"));
        font9.setPointSize(10);
        font9.setBold(true);
        font9.setItalic(true);
        font9.setWeight(75);
        shoppingList->setFont(font9);
        shoppingList->setLineWidth(1000);
        shoppingList->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pushButton = new QPushButton(page_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(49, 540, 51, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border-image:url(:/icon/icon/back_button.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        background_4 = new QLabel(page_6);
        background_4->setObjectName(QString::fromUtf8("background_4"));
        background_4->setGeometry(QRect(0, 0, 871, 621));
        background_4->setAutoFillBackground(false);
        background_4->setStyleSheet(QString::fromUtf8("border-image: url(:/image/image/background.jpg);"));
        label_8 = new QLabel(page_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(540, 240, 291, 181));
        stackedWidget->addWidget(page_6);
        background_4->raise();
        label_5->raise();
        shoppingList->raise();
        pushButton->raise();
        label_8->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 871, 621));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/image/background.jpg);"));
        summary = new QLabel(page_3);
        summary->setObjectName(QString::fromUtf8("summary"));
        summary->setGeometry(QRect(60, 100, 241, 341));
        summary->setFont(font9);
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 30, 671, 61));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        endButton_2 = new QPushButton(page_3);
        endButton_2->setObjectName(QString::fromUtf8("endButton_2"));
        endButton_2->setGeometry(QRect(330, 520, 201, 51));
        endButton_2->setFont(font);
        endButton_2->setStyleSheet(QString::fromUtf8(""));
        payInfo = new QLabel(page_3);
        payInfo->setObjectName(QString::fromUtf8("payInfo"));
        payInfo->setGeometry(QRect(60, 400, 511, 71));
        QFont font10;
        font10.setPointSize(9);
        payInfo->setFont(font10);
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(540, 130, 231, 71));
        QFont font11;
        font11.setPointSize(10);
        label_7->setFont(font11);
        addressOne = new QLabel(page_3);
        addressOne->setObjectName(QString::fromUtf8("addressOne"));
        addressOne->setGeometry(QRect(540, 210, 250, 41));
        QFont font12;
        font12.setFamily(QString::fromUtf8("MS Sans Serif"));
        font12.setPointSize(10);
        addressOne->setFont(font12);
        addressTwo = new QLabel(page_3);
        addressTwo->setObjectName(QString::fromUtf8("addressTwo"));
        addressTwo->setGeometry(QRect(540, 260, 250, 41));
        addressTwo->setFont(font12);
        cityy = new QLabel(page_3);
        cityy->setObjectName(QString::fromUtf8("cityy"));
        cityy->setGeometry(QRect(540, 310, 81, 41));
        cityy->setFont(font12);
        statee = new QLabel(page_3);
        statee->setObjectName(QString::fromUtf8("statee"));
        statee->setGeometry(QRect(620, 310, 81, 41));
        statee->setFont(font12);
        zip = new QLabel(page_3);
        zip->setObjectName(QString::fromUtf8("zip"));
        zip->setGeometry(QRect(540, 370, 81, 21));
        zip->setFont(font12);
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 890, 30));
        menumake_up = new QMenu(menubar);
        menumake_up->setObjectName(QString::fromUtf8("menumake_up"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menumake_up->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        giftButton->setText(QApplication::translate("MainWindow", "Let's GO!!", nullptr));
        background_5->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Welcome to Wati Store", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\342\200\234She is clothed with strength and dignity, and she laughs without fear of the future.\342\200\235\n"
"\n"
"\342\200\224 Proverbs 31:25", nullptr));
        add->setText(QString());
        delete_2->setText(QString());
        add2->setText(QString());
        eyeliner1->setText(QApplication::translate("MainWindow", "eyeline1", nullptr));
        delete_3->setText(QString());
        eyeliner2->setText(QApplication::translate("MainWindow", "eyeline2", nullptr));
        eyeliner3->setText(QApplication::translate("MainWindow", "eyeline3", nullptr));
        deleteEyeliner3->setText(QString());
        addEyeliner3->setText(QString());
        eyeliner4->setText(QApplication::translate("MainWindow", "eyeline4", nullptr));
        deleteEyeliner4->setText(QString());
        addEyeliner4->setText(QString());
        eyelinePlayer->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", nullptr));
        addLipstick2->setText(QString());
        lipstick4->setText(QApplication::translate("MainWindow", "lipstick4", nullptr));
        lipstick3->setText(QApplication::translate("MainWindow", "lipstick3", nullptr));
        lipstick1->setText(QApplication::translate("MainWindow", "lipstick1", nullptr));
        deleteLipstick4->setText(QString());
        deleteLipstick1->setText(QString());
        addLipstick4->setText(QString());
        deleteLipstick2->setText(QString());
        lipstick2->setText(QApplication::translate("MainWindow", "lipsitck2", nullptr));
        deleteLipstick3->setText(QString());
        addLipstick1->setText(QString());
        addLipstick3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
        addFoundation2->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "foundation4", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "foundation3", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "foundation1", nullptr));
        deleteFoundation4->setText(QString());
        deleteFoundation1->setText(QString());
        addFoundation4->setText(QString());
        deleteFoundation2->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "foundation2", nullptr));
        deleteFoundation3->setText(QString());
        addFoundation1->setText(QString());
        addFoundation3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Page", nullptr));
        price->setText(QApplication::translate("MainWindow", "Price: ", nullptr));
        shoppingCart->setText(QString());
        itemCount->setText(QString());
        nextButton->setText(QString());
        backButton->setText(QString());
        background->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Gift warp", nullptr));
        backButton3->setText(QString());
        buyButton->setText(QString());
        warp1->setText(QApplication::translate("MainWindow", "warp1", nullptr));
        warp2->setText(QApplication::translate("MainWindow", "warp2", nullptr));
        warp3->setText(QApplication::translate("MainWindow", "warp3", nullptr));
        warpButton->setText(QApplication::translate("MainWindow", "Standard Wrap", nullptr));
        warpButton2->setText(QApplication::translate("MainWindow", "Classic Wrap", nullptr));
        warpButton3->setText(QApplication::translate("MainWindow", "Luxury Wrap", nullptr));
        totalPrice->setText(QApplication::translate("MainWindow", "Price:", nullptr));
        background_2->setText(QString());
        backButtonG->setText(QString());
        visaGift->setText(QApplication::translate("MainWindow", "VISA", nullptr));
        MasterGift->setText(QApplication::translate("MainWindow", "Master", nullptr));
        discoverGift->setText(QApplication::translate("MainWindow", "Discover", nullptr));
        americanGift->setText(QApplication::translate("MainWindow", "American", nullptr));
        pay->setText(QApplication::translate("MainWindow", "Pay Here", nullptr));
        total->setText(QApplication::translate("MainWindow", "Total: ", nullptr));
        background_3->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Address 1", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Address 2", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "City", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "State", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "zip code", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "shopping cart", nullptr));
        shoppingList->setText(QString());
        pushButton->setText(QString());
        background_4->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "\342\200\234Let all that you do be done in love.\342\200\235\n"
"\n"
"\342\200\224 1 Corinthians 16:14", nullptr));
        label->setText(QString());
        summary->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Grateful for Your Payment", nullptr));
        endButton_2->setText(QApplication::translate("MainWindow", "END", nullptr));
        payInfo->setText(QApplication::translate("MainWindow", "Paid wieth credit card ending with ", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Shipping Address:", nullptr));
        addressOne->setText(QApplication::translate("MainWindow", "1", nullptr));
        addressTwo->setText(QApplication::translate("MainWindow", "1", nullptr));
        cityy->setText(QApplication::translate("MainWindow", "1", nullptr));
        statee->setText(QApplication::translate("MainWindow", "1", nullptr));
        zip->setText(QApplication::translate("MainWindow", "1", nullptr));
        menumake_up->setTitle(QApplication::translate("MainWindow", "make up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
