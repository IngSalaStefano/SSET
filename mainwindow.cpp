#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QNetworkInterface>
////
#include "sset.h"
using namespace SSET;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(SOFTWARE_NAME " v" SOFTWARE_VERSION);

    SSET = new SSET_c();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Set_Vars_clicked()
{
    SSET->set_a((ui->lineEdit_var_a->text()).toUInt(NULL, 10));
    SSET->set_b((ui->lineEdit_var_b->text()).toUInt(NULL, 10));

    displayLOG("Vars set correctly.");

    ui->statusBar->showMessage("Vars set correctly.");
    return;
}

void MainWindow::displayLOG(const QString& str)
{
    ui->textBrowser_LOG->append(str);
}
