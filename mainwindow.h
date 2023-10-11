#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QMetaType>
#include <QSet>
#include <QStandardPaths>
#include <QTcpServer>
#include <QTcpSocket>
////
#include "sset.h"
using namespace SSET_NS;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //SSTT explicit vuol dire che devo mettere per forza il tipo? (...boh)
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void display_LOG(const QString& str);

signals:

private slots:
    void on_pushButton_Set_Vars_clicked();

private:
    Ui::MainWindow *ui; //SSTT non ho capito bene il "giro" di ui...

    SSET SSET;
};

#endif // MAINWINDOW_H
