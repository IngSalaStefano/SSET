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
    void ALT_pressed (QString str);
    void INIT_pressed(QString str);

protected:
    void keyReleaseEvent(QKeyEvent* e);

private slots:
    void on_pushButton_INIT_clicked(void);

private:
    void displayMessage(const QString& str) const;

    Ui::PreDialog ui;
    int m_altPresses;
    int m_passParam;
};

#endif // PREDIALOG_H
