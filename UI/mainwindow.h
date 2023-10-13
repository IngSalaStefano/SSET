#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QMainWindow>
////
using namespace std;
////
#include "Objects/sset.h"
using namespace sset;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //SSTT explicit vuol dire che devo mettere per forza il tipo identico a quello della firma?
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void display_LOG(const QString& str);

signals: //(triggers!)

private slots:
    void on_pushButton_Set_Vars_clicked(void);

private:
    Ui::MainWindow ui; //SSTT non ho capito bene il "giro" di ui...

    SSET SSET;
};

#endif // MAINWINDOW_H
