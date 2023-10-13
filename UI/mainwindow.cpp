#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    this->setWindowTitle(SOFTWARE_NAME " v" SOFTWARE_VERSION);

    class SSET SSET; //SSTT avrei detto che non ci voleva la keyword class...
}

MainWindow::~MainWindow()
{
}

void MainWindow::on_pushButton_Set_Vars_clicked(void)
{
    SSET.set_a((ui.lineEdit_var_a->text()).toUInt(NULL, 10));
    SSET.set_b((ui.lineEdit_var_b->text()).toUInt(NULL, 10));
    SSET.set_c((ui.lineEdit_var_c->text()).toFloat(NULL)); //SSTT best way to get a user-texted float?

    QString str{"Vars set correctly."}; //string literal :-)

    displayMessage(str);
    ui.statusBar->showMessage(str);

    return;
}

void MainWindow::displayMessage(const QString& str) const
{
    ui.textBrowser->append(str);
}
