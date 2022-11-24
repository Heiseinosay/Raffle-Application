#ifndef INPUTFORM_H
#define INPUTFORM_H

#include <QDialog>
#include "outputpresentation.h"

namespace Ui {
class InputForm;
}

class InputForm : public QDialog
{
    Q_OBJECT

public:
    explicit InputForm(QWidget *parent = nullptr);
    ~InputForm();

private slots:
    void on_btnStart_clicked();

    void on_btnQuit_clicked();

    void on_btnInfromation_clicked();

    void on_btnClear_clicked();

private:
    Ui::InputForm *ui;

};

#endif // INPUTFORM_H
