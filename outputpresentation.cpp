#include "outputpresentation.h"
//#include "ui_outputpresentation.h"

#include "inputform.h"

OutputPresentation::OutputPresentation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputPresentation)
{
    ui->setupUi(this);
    //Z-order
    ui->btnEdit->raise();

    //Icons
    ui->btnDeleteName->setIcon(QIcon(":/img/img/trash.png"));
    ui->btnEdit->setIcon(QIcon(":/img/img/edit.png"));
}

OutputPresentation::~OutputPresentation()
{
    delete ui;
}

void OutputPresentation::on_btnEdit_clicked()
{
    hide();
    InputForm inputForm;
    inputForm.setModal(true);
    inputForm.exec();
}

