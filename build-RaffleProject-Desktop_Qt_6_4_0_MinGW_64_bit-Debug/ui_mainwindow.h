/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *LabelTicket;
    QPushButton *btCreate;
    QLabel *LandingBackground;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(842, 449);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/Ticket.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(190, 170, 461, 142));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Megrim")});
        font.setPointSize(35);
        label->setFont(font);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Leelawadee UI")});
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        LabelTicket = new QLabel(centralwidget);
        LabelTicket->setObjectName("LabelTicket");
        LabelTicket->setGeometry(QRect(350, 10, 301, 181));
        btCreate = new QPushButton(centralwidget);
        btCreate->setObjectName("btCreate");
        btCreate->setGeometry(QRect(360, 330, 121, 51));
        btCreate->setFont(font1);
        btCreate->setCursor(QCursor(Qt::PointingHandCursor));
        btCreate->setLayoutDirection(Qt::LeftToRight);
        btCreate->setAutoFillBackground(false);
        btCreate->setStyleSheet(QString::fromUtf8("background-image: url(:/img/img/CreateBtn.png);\n"
" background-position: center; /* Center the image */\n"
" background-repeat: no-repeat; /* Do not repeat the image */\n"
"  background-size: cover; \n"
"background-color: transparent;\n"
"text-align: left;\n"
"padding-left: 36px;\n"
"padding-bottom: 6px;\n"
"color: #474A4A;\n"
"visibility: none;\n"
""));
        LandingBackground = new QLabel(centralwidget);
        LandingBackground->setObjectName("LandingBackground");
        LandingBackground->setGeometry(QRect(0, 0, 851, 431));
        LandingBackground->setStyleSheet(QString::fromUtf8("background-position: center; /* Center the image */\n"
"  background-repeat: no-repeat; /* Do not repeat the image */\n"
"  background-size: cover;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 842, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Victor Hunt", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Victor Hunt", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Offers a thrilling experience by randomly picking a lucky winner with its prizes.", nullptr));
        LabelTicket->setText(QString());
        btCreate->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        LandingBackground->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
