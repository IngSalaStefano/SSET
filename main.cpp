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
     * [local_vars](parameterList) -> type {lambdaBody}
     *
     * C++11 trailing return type syntax (-> type) eg. -> bool
     */

    //NON è una connect classica signal-->slot, è tra "oggetti"
    //quella classica è tra QMetaObject ..? //SSTT
    QObject::connect(&pd, &PreDialog::INIT_pressed, &pd,
    [&mw, &pd]()
     {
      if(!mw)
        {
          mw = make_unique<MainWindow>();
        }
          pd.hide();
          mw->show();
     }
    );

    pd.show();

    return a.exec();
}
