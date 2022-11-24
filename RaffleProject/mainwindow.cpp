#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include <QPainter>
#include "inputform.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/Ticket.png");
    ui->LabelTicket->setPixmap(pix);
    ui->LabelTicket->setPixmap(pix.scaled(140, 140,Qt::KeepAspectRatio));

    QPixmap background(":/img/img/confetti-png.png");
    ui->LandingBackground->setPixmap(background);
    ui->LandingBackground->setPixmap(background.scaled(1300, 600,Qt::KeepAspectRatio));

    QPainter painter(this);
    painter.setOpacity(0.2);
    // use scaled image or if needed not scaled m_avatar
    painter.drawPixmap(0, 0, background);

    //Z-order
    ui->LandingBackground->lower();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btCreate_clicked()
{
    close();
    InputForm inputForm;
    inputForm.setModal(true);
    inputForm.exec();
}

