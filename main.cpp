#include "UI/mainwindow.h"
#include "UI/predialog.h"
#include <QApplication>
////
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    PreDialog pd;
    unique_ptr<MainWindow> mw;

    /*
     * [local_vars](parameterList) {lambdaBody}
     */

    //NON è una connect classica signal-->slot.
    QObject::connect(&pd, &PreDialog::INIT_pressed, &pd,
    [&mw, &pd]()
    {
     if(!mw) { mw = make_unique<MainWindow>(); }
         pd.hide();
         mw->show();
    }
    );

    pd.show();

    return a.exec();
}
