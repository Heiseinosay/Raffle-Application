#include "inputform.h"
#include "ui_inputform.h"
#include "dbmanager.h"
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>
#include <QGroupBox>
#include <QLabel>
#include <QPixmap>

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

    ui->PrizeDelete->setIcon(QIcon(":/img/img/trash.png"));
    ui->PrizeEdit->setIcon(QIcon(":/img/img/edit.png"));

    ui->btnInfromation->setIcon(QIcon(":/img/img/about.png"));
    ui->btnSave->setIcon(QIcon(":/img/img/diskette.png"));
    ui->btnOpen->setIcon(QIcon(":/img/img/folder.png"));

    //Logo
    QPixmap pix(":/img/img/Ticket.png");
    ui->logo->setPixmap(pix);
    ui->logo->setPixmap(pix.scaled(50, 50,Qt::KeepAspectRatio));

    //Name Line Edit
    ui->ContestantName->setDisabled(true);

    ui->ContestantArea->setFrameShape(QFrame::NoFrame);
    QVBoxLayout *postsLayout = new QVBoxLayout(ui->ContestantArea);

    postsLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
    qDebug() << "works here 2";
    //QString *dbcontent = dbm.selectEntry("contestants");
    QString *dbcontent = DbManager::selectEntry("contestants");
    QLabel *label;
    //qDebug() << dbcontent;
    //QGroupBox *contest = new QGroupBox(ui->ContestantArea);
    QGroupBox *contest;
    for (int i = 0; i < (int) sizeof(dbcontent); i++) {
        qDebug() << "yes bueno";
        //label = new QLabel(dbcontent[i]);
        contest = new QGroupBox(ui->Contestant);
        qDebug() << dbcontent[i];
        postsLayout->addWidget(contest);
        ui->ContestantArea->widget()->setLayout(postsLayout);
    }
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
    QMessageBox::StandardButton answerQuit = QMessageBox::question(
                this, "Quit", "Recent changes may not have been saved. Are you sure you want to quit?",
                QMessageBox::Yes | QMessageBox::No);

    if (answerQuit == QMessageBox::Yes) {
        QApplication::quit();
    }


}

// Instructions Message Box
void InputForm::on_btnInfromation_clicked()
{
    QMessageBox::information(this, "Instructions",
                             "Input form\n\t1. Click the text field button to add names and prizes. \n\t2. Click the \"+\" button to add more participants and prizes.\n\t3. Click the pencil button to edit, and the trash button to delete.\n\t4. Click the next button below when you are done, clear button\n\tto empty all fields and the quit button if you want to exit.\n\nRaffle Window\n\t1. Press the start button to begin the hunt. \n\t2. Click the pencil button to return to the input form and edit details.\n\t3. Click the trash button to exit.");

}

//Reboot to clear
void InputForm::on_btnClear_clicked()
{
    QMessageBox::StandardButton answerQuit = QMessageBox::question(
                this, "Clear", "Recent changes may not have been saved. Are you sure you want to clear all fields?",
                QMessageBox::Yes | QMessageBox::No);

    if (answerQuit == QMessageBox::Yes) {
        close();

        InputForm inputForm;
        inputForm.setModal(true);
        inputForm.exec();
    }

}






