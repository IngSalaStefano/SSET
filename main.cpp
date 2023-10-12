#include "UI/mainwindow.h"
#include "UI/predialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    PreDialog pd;

    pd.show();

    return a.exec();
}
