#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql/QSqlDatabase>
#include<QDebug>
//#include<QSqlDriver>
//#include<QSql>
#include<QSqlQuery>
#include<QMessageBox>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
   QSqlDatabase db;

private slots:
//where?

    void departviewtable();
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_homebutton_clicked();

    void on_homebutton_2_clicked();

    void on_homebutton_3_clicked();

    void on_homebutton_4_clicked();
    void homenaviagte();

  //  void on_pushButton_4_clicked();

    void on_homebutton_5_clicked();

    void on_pushButton_5_clicked();

    void on_homebutton_32_clicked();

    void on_homebutton_31_clicked();

    void on_homebutton_15_clicked();

    void on_homebutton_14_clicked();

    void on_homebutton_13_clicked();

    void on_homebutton_12_clicked();

    void on_homebutton_11_clicked();

    void on_homebutton_10_clicked();

    void on_homebutton_9_clicked();

    void on_homebutton_8_clicked();

    void on_homebutton_6_clicked();

    void on_pushButton_79_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();



    void on_pushButton_80_clicked();

    void on_pushButton_30_clicked();

 //   void on_pushButton_29_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_17_clicked();


    void on_pushButton_28_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_33_clicked();
    void projectview();
    void employeeview();
    void departmentview();
    void teamview();

    void on_pushButton_37_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_46_clicked();


    void on_homebutton_16_clicked();

    void on_homebutton_17_clicked();

    void on_homebutton_18_clicked();

    void on_homebutton_20_clicked();

    void on_homebutton_21_clicked();

    void on_homebutton_19_clicked();

    void on_homebutton_22_clicked();

    void on_homebutton_23_clicked();



    void on_homebutton_25_clicked();

    void on_homebutton_26_clicked();

    void on_homebutton_27_clicked();

    void on_homebutton_28_clicked();

    void on_homebutton_29_clicked();

    void on_homebutton_30_clicked();

    void managerview();

    void on_homebutton_33_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_51_clicked();



    void on_pushButton_29_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_ProjSubmit_clicked();

    void on_pushButton_54_clicked();


    void emprecords();
    void on_pushButton_52_clicked();

    void on_displayempup_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_39_clicked();


    void on_searchresetemp_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_4_clicked();

    void on_delempbut_clicked();


    void empviewtable();


    void on_pushButton_55_clicked();

    void on_pushButton_56_clicked();

    void on_searchdepbutton_clicked();

    void on_pushButton_57_clicked();

private:
    Ui::MainWindow *ui;


};
#endif
