#include "predialog.h"

PreDialog::PreDialog(QWidget *parent) :
    QDialog(parent),
    m_altPresses{0},
    m_passParam {0}
{
    ui.setupUi(this);

    //sender(signal)                   --> receiver(slot)
    connect(this, &PreDialog::ALT_pressed, this, &PreDialog::displayMessage);
}

PreDialog::~PreDialog()
{
}

void PreDialog::on_pushButton_INIT_clicked(void)
{
    m_passParam = ui.lineEdit->text().toUInt(NULL, 10);
    emit INIT_pressed(QString("INIT !"));
    return;
}

void PreDialog::keyReleaseEvent(QKeyEvent* e)
{
    if(e->key() == Qt::Key_Alt)
    {
     m_altPresses++;
     emit ALT_pressed(QString("%1 ALT").arg(m_altPresses));
    }
    return;
}

void PreDialog::displayMessage(const QString& str) const
{
    ui.textBrowser->append(str);
}
