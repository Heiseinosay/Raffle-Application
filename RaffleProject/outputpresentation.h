#ifndef OUTPUTPRESENTATION_H
#define OUTPUTPRESENTATION_H

#include <QDialog>

namespace Ui {
class OutputPresentation;
}

class OutputPresentation : public QDialog
{
    Q_OBJECT

public:
    explicit OutputPresentation(QWidget *parent = nullptr);
    ~OutputPresentation();

private slots:
    void on_btnEdit_clicked();

private:
    Ui::OutputPresentation *ui;
};

#endif // OUTPUTPRESENTATION_H
