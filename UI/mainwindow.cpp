#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(SOFTWARE_NAME " v" SOFTWARE_VERSION);

    class SSET SSET;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Set_Vars_clicked()
{
#if 1
    SSET.set_a((ui->lineEdit_var_a->text()).toUInt(NULL, 10));
    SSET.set_b((ui->lineEdit_var_b->text()).toUInt(NULL, 10));
    SSET.set_c((ui->lineEdit_var_c->text()).toFloat(NULL)); //SSTT best way to get a user-texted float?

    QString str{"Vars set correctly."};

    display_LOG(str);
    ui->statusBar->showMessage(str);
#endif
    return;
}

void MainWindow::display_LOG(const QString& str)
{
    ui->textBrowser_LOG->append(str);
}
