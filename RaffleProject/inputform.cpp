#include "inputform.h"
#include "ui_inputform.h"
#include <QMessageBox>
InputForm::InputForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputForm)
{
    ui->setupUi(this);
    //DropDown
    ui->PrizeSelectionMode->addItem("Random");
    ui->PrizeSelectionMode->addItem("Descending");
    ui->PrizeSelectionMode->addItem("Ascending");

    //Icon
    ui->NameDelete->setIcon(QIcon(":/img/img/trash.png"));
    ui->NameEdit->setIcon(QIcon(":/img/img/edit.png"));

    ui->btnInfromation->setIcon(QIcon(":/img/img/about.png"));
    ui->btnSave->setIcon(QIcon(":/img/img/diskette.png"));
    ui->btnOpen->setIcon(QIcon(":/img/img/folder.png"));

    //Name Line Edit
    ui->LineEditName1->setDisabled(true);



}

InputForm::~InputForm()
{
    delete ui;
}

void InputForm::on_btnStart_clicked()
{
    hide();
    OutputPresentation outputPresentation;
    outputPresentation.setModal(true);
    outputPresentation.exec();
}


void InputForm::on_btnQuit_clicked()
{
    QMessageBox::StandardButton answer = QMessageBox::question(
                this, "Quit", "Recent changes may not have been saved. Are you sure you want to quit?",
                QMessageBox::Yes | QMessageBox::No);

    if (answer == QMessageBox::Yes) {
        QApplication::quit();
    }


}

