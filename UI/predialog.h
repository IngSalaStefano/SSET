#ifndef PREDIALOG_H
#define PREDIALOG_H

#include "ui_predialog.h"
#include <QDialog>
#include <QKeyEvent>
////
using namespace std;

class PreDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PreDialog(QWidget *parent = nullptr);
    ~PreDialog();

signals:
void ALT_pressed(QString str);

protected:
void keyReleaseEvent(QKeyEvent* e);

private slots:

private:
    Ui::PreDialog ui;
    size_t m_altPresses{0};

    void displayMessage(const QString& str);
};

#endif // PREDIALOG_H
