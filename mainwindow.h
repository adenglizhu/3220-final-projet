#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_giftButton_clicked();

    //void on_makeupButton_clicked();

    void on_backButton_clicked();

    //void on_backButton2_clicked();

    void on_nextButton_clicked();

    void on_backButton3_clicked();

    void on_buyButton_clicked();

    //void on_buyButton2_clicked();

    //void on_backButtonM_clicked();

    void on_backButtonG_clicked();

    //void on_endButton_clicked();

    //void on_endButton2_clicked();

   // void on_testBox1_clicked();

    //void on_testBox2_clicked();

    //void on_testBox3_clicked();

    void on_warpButton_clicked();

    void on_warpButton2_clicked();

    void on_warpButton3_clicked();

    void on_visaGift_clicked();

    void on_MasterGift_clicked();

    void on_discoverGift_clicked();

    void on_americanGift_clicked();

    void on_pay_clicked();

    void on_shoppingCart_clicked();

    void on_pushButton_clicked();

    void on_add_clicked();

    void on_delete_2_clicked();

    void on_add2_clicked();

    void on_delete_3_clicked();

    void on_addEyeliner3_clicked();

    void on_deleteEyeliner3_clicked();

    void on_addEyeliner4_clicked();

    void on_deleteEyeliner4_clicked();

    void on_addLipstick1_clicked();

    void on_deleteLipstick1_clicked();

    void on_addLipstick2_clicked();

    void on_deleteLipstick2_clicked();

    void on_addLipstick3_clicked();

    void on_deleteLipstick3_clicked();

    void on_addLipstick4_clicked();

    void on_deleteLipstick4_clicked();

    void on_addFoundation1_clicked();

    void on_deleteFoundation1_clicked();

    void on_addFoundation2_clicked();

    void on_deleteFoundation2_clicked();

    void on_addFoundation3_clicked();

    void on_deleteFoundation3_clicked();

    void on_addFoundation4_clicked();

    void on_deleteFoundation4_clicked();
private slots:
     void updateImage();

     void on_endButton_2_clicked();

     void on_numberEnter_textEdited(const QString &arg1);

     void on_address1_textEdited(const QString &arg1);

     void on_address2_cursorPositionChanged(int arg1, int arg2);

     void on_city_cursorPositionChanged(int arg1, int arg2);

     void on_state_cursorPositionChanged(int arg1, int arg2);

     //void on_lineEdit_textEdited(const QString &arg1);

     void on_zipCode_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    void calculateWarp();
    void printItems();
    double itemsPrice();
    std::vector<QString>items;
    std::vector<double>price;
    int counter = 0;
    void makeupItem();
    void music();
};


#endif // MAINWINDOW_H
