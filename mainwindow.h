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
using namespace SSET;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void displayLOG(const QString& str);

signals:

private slots:
    void on_pushButton_Set_Vars_clicked();

private:
    Ui::MainWindow *ui;

    SSET_c* SSET;
};

#endif // MAINWINDOW_H
