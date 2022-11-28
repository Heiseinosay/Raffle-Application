/********************************************************************************
** Form generated from reading UI file 'outputpresentation.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTPRESENTATION_H
#define UI_OUTPUTPRESENTATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_OutputPresentation
{
public:
    QPushButton *btnEdit;
    QLabel *BackgroundConfetti;
    QLabel *BackgroundTheme;
    QLabel *BackgroundGoldDrop;
    QLabel *CelebrationTitle;
    QLabel *Congratulationsto;
    QLabel *WinnerName;
    QLabel *Congratulationsto_2;
    QLabel *PrizeName;
    QPushButton *btnRoll;
    QPushButton *btnDeleteName;
    QComboBox *themeSelection;

    void setupUi(QDialog *OutputPresentation)
    {
        if (OutputPresentation->objectName().isEmpty())
            OutputPresentation->setObjectName("OutputPresentation");
        OutputPresentation->resize(1280, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/Ticket.png"), QSize(), QIcon::Normal, QIcon::Off);
        OutputPresentation->setWindowIcon(icon);
        btnEdit = new QPushButton(OutputPresentation);
        btnEdit->setObjectName("btnEdit");
        btnEdit->setGeometry(QRect(1110, 720, 41, 41));
        btnEdit->setCursor(QCursor(Qt::PointingHandCursor));
        btnEdit->setFocusPolicy(Qt::StrongFocus);
        btnEdit->setStyleSheet(QString::fromUtf8("background-color:#54C475; \n"
"border: none;\n"
"border-radius: 10px;"));
        BackgroundConfetti = new QLabel(OutputPresentation);
        BackgroundConfetti->setObjectName("BackgroundConfetti");
        BackgroundConfetti->setGeometry(QRect(-90, -20, 1341, 801));
        BackgroundConfetti->setStyleSheet(QString::fromUtf8("background-image: url(:/img/img/confetti.png);"));
        BackgroundTheme = new QLabel(OutputPresentation);
        BackgroundTheme->setObjectName("BackgroundTheme");
        BackgroundTheme->setGeometry(QRect(0, 0, 1281, 801));
        BackgroundGoldDrop = new QLabel(OutputPresentation);
        BackgroundGoldDrop->setObjectName("BackgroundGoldDrop");
        BackgroundGoldDrop->setGeometry(QRect(0, 20, 1281, 781));
        BackgroundGoldDrop->setStyleSheet(QString::fromUtf8("background-image: url(:/img/img/confetti-png.png);\n"
""));
        CelebrationTitle = new QLabel(OutputPresentation);
        CelebrationTitle->setObjectName("CelebrationTitle");
        CelebrationTitle->setGeometry(QRect(190, 90, 891, 171));
        QFont font;
        font.setFamilies({QString::fromUtf8("Astronout")});
        font.setPointSize(120);
        CelebrationTitle->setFont(font);
        CelebrationTitle->setStyleSheet(QString::fromUtf8("color: #C49503;\n"
"-webkit-text-stroke: 1px red;"));
        CelebrationTitle->setAlignment(Qt::AlignCenter);
        Congratulationsto = new QLabel(OutputPresentation);
        Congratulationsto->setObjectName("Congratulationsto");
        Congratulationsto->setGeometry(QRect(440, 260, 391, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Felix Titling")});
        font1.setPointSize(20);
        Congratulationsto->setFont(font1);
        Congratulationsto->setAlignment(Qt::AlignCenter);
        WinnerName = new QLabel(OutputPresentation);
        WinnerName->setObjectName("WinnerName");
        WinnerName->setGeometry(QRect(30, 320, 1211, 101));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Felix Titling")});
        font2.setPointSize(60);
        WinnerName->setFont(font2);
        WinnerName->setStyleSheet(QString::fromUtf8("color: #C49503; "));
        WinnerName->setAlignment(Qt::AlignCenter);
        Congratulationsto_2 = new QLabel(OutputPresentation);
        Congratulationsto_2->setObjectName("Congratulationsto_2");
        Congratulationsto_2->setGeometry(QRect(530, 420, 211, 51));
        Congratulationsto_2->setFont(font1);
        Congratulationsto_2->setAlignment(Qt::AlignCenter);
        PrizeName = new QLabel(OutputPresentation);
        PrizeName->setObjectName("PrizeName");
        PrizeName->setGeometry(QRect(180, 470, 911, 101));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Felix Titling")});
        font3.setPointSize(50);
        PrizeName->setFont(font3);
        PrizeName->setStyleSheet(QString::fromUtf8("color: #C49503; "));
        PrizeName->setAlignment(Qt::AlignCenter);
        btnRoll = new QPushButton(OutputPresentation);
        btnRoll->setObjectName("btnRoll");
        btnRoll->setGeometry(QRect(590, 720, 99, 39));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Felix Titling")});
        font4.setPointSize(13);
        btnRoll->setFont(font4);
        btnRoll->setCursor(QCursor(Qt::PointingHandCursor));
        btnRoll->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: #C49503;\n"
"color: #ffffff;"));
        btnDeleteName = new QPushButton(OutputPresentation);
        btnDeleteName->setObjectName("btnDeleteName");
        btnDeleteName->setGeometry(QRect(1160, 720, 41, 41));
        btnDeleteName->setCursor(QCursor(Qt::PointingHandCursor));
        btnDeleteName->setFocusPolicy(Qt::StrongFocus);
        btnDeleteName->setStyleSheet(QString::fromUtf8("background-color:#D97C7C; \n"
"border: none;\n"
"border-radius: 10px;"));
        themeSelection = new QComboBox(OutputPresentation);
        themeSelection->setObjectName("themeSelection");
        themeSelection->setGeometry(QRect(1200, 10, 71, 31));
        themeSelection->setCursor(QCursor(Qt::PointingHandCursor));
        BackgroundTheme->raise();
        BackgroundConfetti->raise();
        BackgroundGoldDrop->raise();
        btnEdit->raise();
        CelebrationTitle->raise();
        Congratulationsto->raise();
        WinnerName->raise();
        Congratulationsto_2->raise();
        PrizeName->raise();
        btnRoll->raise();
        btnDeleteName->raise();
        themeSelection->raise();

        retranslateUi(OutputPresentation);

        QMetaObject::connectSlotsByName(OutputPresentation);
    } // setupUi

    void retranslateUi(QDialog *OutputPresentation)
    {
        OutputPresentation->setWindowTitle(QCoreApplication::translate("OutputPresentation", "Victor Hunt", nullptr));
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(QCoreApplication::translate("OutputPresentation", "Edit", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(QString());
        BackgroundConfetti->setText(QString());
        BackgroundTheme->setText(QString());
        BackgroundGoldDrop->setText(QString());
        CelebrationTitle->setText(QCoreApplication::translate("OutputPresentation", "Sample Text", nullptr));
        Congratulationsto->setText(QCoreApplication::translate("OutputPresentation", "Congratulations to", nullptr));
        WinnerName->setText(QCoreApplication::translate("OutputPresentation", "Juan Dela Cruz", nullptr));
        Congratulationsto_2->setText(QCoreApplication::translate("OutputPresentation", "Winner of", nullptr));
        PrizeName->setText(QCoreApplication::translate("OutputPresentation", "House & Lot", nullptr));
        btnRoll->setText(QCoreApplication::translate("OutputPresentation", "Hunt", nullptr));
#if QT_CONFIG(tooltip)
        btnDeleteName->setToolTip(QCoreApplication::translate("OutputPresentation", "Discard", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDeleteName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OutputPresentation: public Ui_OutputPresentation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTPRESENTATION_H
