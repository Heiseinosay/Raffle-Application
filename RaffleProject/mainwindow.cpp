#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include "inputform.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("J:/Project sources/Ticket.png");
    ui->LabelTicket->setPixmap(pix);
    ui->LabelTicket->setPixmap(pix.scaled(100, 100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btCreate_clicked()
{
    hide();
    InputForm inputForm;
    inputForm.setModal(true);
    inputForm.exec();
}

