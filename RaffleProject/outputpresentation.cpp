#include "outputpresentation.h"
#include "ui_outputpresentation.h"

#include "inputform.h"

OutputPresentation::OutputPresentation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputPresentation)
{
    ui->setupUi(this);
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

