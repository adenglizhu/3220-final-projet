#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <iostream>
#include <QTimer>
#include <QUrl>
#include <QMediaPlayer>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    timer(new QTimer)
{
    ui->setupUi(this);
    ui->tabWidget->setTabText(0, "eyeliner");
    ui->tabWidget->setTabText(1, "lipstick");
    ui->tabWidget->setTabText(2, "foundation");
    connect(timer,SIGNAL(timeout()),this,SLOT(updateImage()));
    music();
    updateImage();
    timer->start(2300);
    makeupItem();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_giftButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/*void MainWindow::on_backButton2_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}*/

void MainWindow::on_nextButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Gift Wrapping");
    msgBox.setText("Do you warp it up?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
     else
    {
        ui->stackedWidget->setCurrentIndex(3);
    }
}

void MainWindow::on_backButton3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_buyButton_clicked()
{
   ui->stackedWidget->setCurrentIndex(3);
   QString currentText = ui->totalPrice->text();
    ui->total->setText(currentText);
}


void MainWindow::on_backButtonG_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::calculateWarp()
{
    double totalPrice;

    if(ui->warpButton->isChecked())
    {
        totalPrice = itemsPrice()+3;
    }

    if(ui->warpButton2->isChecked())
    {
        totalPrice = itemsPrice()+4;
    }
    if(ui->warpButton3->isChecked())
    {
        totalPrice = itemsPrice()+5;
    }

    ui->totalPrice->setText("Price: " + QString::number(totalPrice));
     ui->total->setText("Total: " + QString::number(totalPrice));
}

void MainWindow::on_warpButton_clicked()
{
    calculateWarp();
}

void MainWindow::on_warpButton2_clicked()
{
   calculateWarp();
}

void MainWindow::on_warpButton3_clicked()
{
    calculateWarp();
}

void MainWindow::on_visaGift_clicked()
{
    ui->numberEnter->setInputMask("4999-9999-9999-9999;_");
         ui->numberEnter->setText("");

}

void MainWindow::on_MasterGift_clicked()
{
    ui->numberEnter->setInputMask("5999-9999-9999-9999;_");
         ui->numberEnter->setText("");
}

void MainWindow::on_discoverGift_clicked()
{
    ui->numberEnter->setInputMask("6999-9999-9999-9999;_");
         ui->numberEnter->setText("");
}

void MainWindow::on_americanGift_clicked()
{
    ui->numberEnter->setInputMask("3999-999999-99999;_");
         ui->numberEnter->setText("");
}

void MainWindow::on_pay_clicked()
{
    QMessageBox::information(this, tr("Payment"),tr("Payment Success"));
        ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_shoppingCart_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_add_clicked()
{

    items.push_back("eyeline1");
    price.push_back(1);
    itemsPrice();
    printItems();
}

void MainWindow::on_delete_2_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="eyeline1")
        {
            index = i;
            break;
        }
    }
    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 1)
        {
            pos = j;
            break;
        }
    }

    price.erase(price.begin() + pos);
    items.erase(items.begin() + index);
    itemsPrice();

    printItems();

}

void MainWindow::printItems()
{
    QString writeToLabel = "";
    for (QString item : items)
    {
        writeToLabel += item + "\n\n";
    }


    ui->itemCount->setText(QString::number (items.size()));
    ui->shoppingList->setText(writeToLabel);
    ui->summary->setText(writeToLabel);

}

void MainWindow::on_add2_clicked()
{
    items.push_back("eyeline2");
    price.push_back(2);
    itemsPrice();
    printItems();
}

void MainWindow::on_delete_3_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="eyeline2")
        {
            index = i;
            break;
        }
    }

    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 2)
        {
            pos = j;
            break;
        }
    }

    price.erase(price.begin() + pos);
    items.erase(items.begin() + index);
    itemsPrice();
    printItems();
}

void MainWindow::on_addEyeliner3_clicked()
{
    items.push_back("eyeline3");
    price.push_back(3);
     itemsPrice();
    printItems();
}

void MainWindow::on_deleteEyeliner3_clicked()
{
    size_t index = 0;
    size_t pos=0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="eyeline3")
        {
            index = i;
            break;
        }
    }
    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 3)
        {
            pos = j;
            break;
        }
    }

    price.erase(price.begin() + pos);
    items.erase(items.begin() + index);
    itemsPrice();
    printItems();
}

void MainWindow::on_addEyeliner4_clicked()
{
    items.push_back("eyeline4");
    price.push_back(4);
    itemsPrice();
    printItems();
}

void MainWindow::on_deleteEyeliner4_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="eyeline4")
        {
            index = i;
            break;
        }
    }

    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 4)
        {
            pos = j;
            break;
        }
    }

    items.erase(items.begin() + index);
    price.erase(price.begin() + pos);
    itemsPrice();
    printItems();
}

double MainWindow::itemsPrice()
{
    double total=0;

    for (double price : price)
    {
        total += price;
    }

    ui->price->setText("Price: " +QString::number(total));
     ui->total->setText("Total: " + QString::number(total));
    return total;

}

void MainWindow::makeupItem()
{
    ui->eyeliner1->setPixmap(QPixmap(":/eyeline/image/e1.webp"));
    ui->eyeliner1->setScaledContents(true);
    ui->eyeliner1->show();
    ui->eyeliner2->setPixmap(QPixmap(":/eyeline/image/e2.jpg"));
    ui->eyeliner2->setScaledContents(true);
    ui->eyeliner2->show();
    ui->eyeliner3->setPixmap(QPixmap(":/eyeline/image/e3.jpg"));
    ui->eyeliner3->setScaledContents(true);
    ui->eyeliner3->show();
    ui->eyeliner4->setPixmap(QPixmap(":/eyeline/image/e4.png"));
    ui->eyeliner4->setScaledContents(true);
    ui->eyeliner4->show();
    ui->lipstick1->setPixmap(QPixmap(":/lipstick/image/l1.jpg"));
    ui->lipstick1->setScaledContents(true);
    ui->lipstick1->show();
    ui->lipstick2->setPixmap(QPixmap(":/lipstick/image/l2.jpg"));
    ui->lipstick2->setScaledContents(true);
    ui->lipstick2->show();
    ui->lipstick3->setPixmap(QPixmap(":/lipstick/image/l3.jpg"));
    ui->lipstick3->setScaledContents(true);
    ui->lipstick3->show();
    ui->lipstick4->setPixmap(QPixmap(":/lipstick/image/l4.jpg"));
    ui->lipstick4->setScaledContents(true);
    ui->lipstick4->show();
    ui->label_15->setPixmap(QPixmap(":/fundation/image/f1.jpg"));
    ui->label_15->setScaledContents(true);
    ui->label_15->show();
    ui->label_16->setPixmap(QPixmap(":/fundation/image/f2.jpg"));
    ui->label_16->setScaledContents(true);
    ui->label_16->show();
    ui->label_17->setPixmap(QPixmap(":/fundation/image/f3.jpg"));
    ui->label_17->setScaledContents(true);
    ui->label_17->show();
    ui->label_18->setPixmap(QPixmap(":/fundation/image/f4.jpg"));
    ui->label_18->setScaledContents(true);
    ui->label_18->show();
    ui->warp1->setPixmap(QPixmap(":/image/image/p1.jpg"));
    ui->warp1->setScaledContents(true);
    ui->warp1->show();
    ui->warp2->setPixmap(QPixmap(":/image/image/p2.jpg"));
    ui->warp2->setScaledContents(true);
    ui->warp2->show();
    ui->warp3->setPixmap(QPixmap(":/image/image/p3.jpg"));
    ui->warp3->setScaledContents(true);
    ui->warp3->show();

}

void MainWindow::music()
{
   QMediaPlayer* player = new QMediaPlayer();
   player->setMedia(QUrl("qrc:/mp3/mp3/background.mp3"));
   player->setVolume(15);
   player->play();
   qDebug()<<player->errorString();
}

void MainWindow::updateImage()
{
    switch(counter){
    case 0:
        ui->eyelinePlayer->setPixmap(QPixmap(":/image/image/eye1.jpg"));
        ui->eyelinePlayer->setScaledContents(true);
        ui->eyelinePlayer->show();
        counter++;
        break;
    case 1:
        ui->eyelinePlayer->setPixmap(QPixmap(":/image/image/eye2.jpg"));
        ui->eyelinePlayer->setScaledContents(true);
        ui->eyelinePlayer->show();
        counter++;
        break;
    case 2:
        ui->eyelinePlayer->setPixmap(QPixmap(":/image/image/eye3.jpg"));
        ui->eyelinePlayer->setScaledContents(true);
        ui->eyelinePlayer->show();
        counter++;
        break;
    case 3:
        ui->eyelinePlayer->setPixmap(QPixmap(":/image/image/eye4.jpg"));
        ui->eyelinePlayer->setScaledContents(true);
        ui->eyelinePlayer->show();
        counter++;
        break;
    case 4:
        counter = 0 ;
        ui->eyelinePlayer->setPixmap(QPixmap(":/image/image/eye5.jpg"));
        ui->eyelinePlayer->setScaledContents(true);
        ui->eyelinePlayer->show();
        break;
    }
}

void MainWindow::on_addLipstick1_clicked()
{
    items.push_back("lipsitck1");
    price.push_back(1);
    itemsPrice();
    printItems();
}

void MainWindow::on_deleteLipstick1_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="lipsitck1")
        {
            index = i;
            break;
        }
    }

    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 1)
        {
            pos = j;
            break;
        }
    }

    items.erase(items.begin() + index);
    price.erase(price.begin() + pos);
    itemsPrice();
    printItems();
}

void MainWindow::on_addLipstick2_clicked()
{
    items.push_back("lipsitck2");
    price.push_back(2);
    itemsPrice();
    printItems();
}

void MainWindow::on_deleteLipstick2_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="lipsitck2")
        {
            index = i;
            break;
        }
    }

    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 2)
        {
            pos = j;
            break;
        }
    }

    items.erase(items.begin() + index);
    price.erase(price.begin() + pos);
    itemsPrice();
    printItems();
}

void MainWindow::on_addLipstick3_clicked()
{
    items.push_back("lipsitck3");
    price.push_back(3);
    itemsPrice();
    printItems();
}

void MainWindow::on_deleteLipstick3_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="lipsitck3")
        {
            index = i;
            break;
        }
    }

    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 3)
        {
            pos = j;
            break;
        }
    }

    items.erase(items.begin() + index);
    price.erase(price.begin() + pos);
    itemsPrice();
    printItems();
}

void MainWindow::on_addLipstick4_clicked()
{
    items.push_back("lipsitck4");
    price.push_back(4);
    itemsPrice();
    printItems();
}

void MainWindow::on_deleteLipstick4_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="lipsitck4")
        {
            index = i;
            break;
        }
    }

    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 4)
        {
            pos = j;
            break;
        }
    }

    items.erase(items.begin() + index);
    price.erase(price.begin() + pos);
    itemsPrice();
    printItems();
}

void MainWindow::on_addFoundation1_clicked()
{
    items.push_back("foundation1");
    price.push_back(1);
    itemsPrice();
    printItems();
}

void MainWindow::on_deleteFoundation1_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="foundation1")
        {
            index = i;
            break;
        }
    }

    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 1)
        {
            pos = j;
            break;
        }
    }

    items.erase(items.begin() + index);
    price.erase(price.begin() + pos);
    itemsPrice();
    printItems();
}

void MainWindow::on_addFoundation2_clicked()
{
    items.push_back("foundation2");
    price.push_back(2);
    itemsPrice();
    printItems();
}

void MainWindow::on_deleteFoundation2_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="foundation2")
        {
            index = i;
            break;
        }
    }

    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 2)
        {
            pos = j;
            break;
        }
    }

    items.erase(items.begin() + index);
    price.erase(price.begin() + pos);
    itemsPrice();
    printItems();
}

void MainWindow::on_addFoundation3_clicked()
{
    items.push_back("foundation3");
    price.push_back(3);
    itemsPrice();
    printItems();
}

void MainWindow::on_deleteFoundation3_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="foundation3")
        {
            index = i;
            break;
        }
    }

    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 3)
        {
            pos = j;
            break;
        }
    }

    items.erase(items.begin() + index);
    price.erase(price.begin() + pos);
    itemsPrice();
    printItems();
}

void MainWindow::on_addFoundation4_clicked()
{
    items.push_back("foundation4");
    price.push_back(4);
    itemsPrice();
    printItems();
}

void MainWindow::on_deleteFoundation4_clicked()
{
    size_t index = 0;
    size_t pos = 0;
    for (size_t i = 0; i<items.size();i++)
    {
        if(items[i] =="foundation4")
        {
            index = i;
            break;
        }
    }

    for (size_t j = 0; j<items.size();j++)
    {
        if(price[j] == 4)
        {
            pos = j;
            break;
        }
    }

    items.erase(items.begin() + index);
    price.erase(price.begin() + pos);
    itemsPrice();
    printItems();
}


void MainWindow::on_endButton_2_clicked()
{
     QApplication::quit();
}

void MainWindow::on_numberEnter_textEdited(const QString &arg1)
{
    QString currentNumber = ui->numberEnter->text();
    QString lastFour = currentNumber.right(4);
    ui->payInfo->setText("Paid with credit card ending with " + lastFour);
}

void MainWindow::on_address1_textEdited(const QString &arg1)
{
   QString oneAddress = ui->address1->text();
   ui->addressOne->setText(oneAddress);
}

void MainWindow::on_address2_cursorPositionChanged(int arg1, int arg2)
{
    QString twoAddress = ui->address2->text();
    ui->addressTwo->setText(twoAddress);
}

void MainWindow::on_city_cursorPositionChanged(int arg1, int arg2)
{
    QString city = ui->city->text();
    ui->cityy->setText(city);
}

void MainWindow::on_state_cursorPositionChanged(int arg1, int arg2)
{
    QString state = ui->state->text();
    ui->statee->setText(state);
}

void MainWindow::on_zipCode_textEdited(const QString &arg1)
{
    QString zipp = ui->zipCode->text();
    ui->zip->setText(zipp);
}
