/********************************************************************************
** Form generated from reading UI file 'inputform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTFORM_H
#define UI_INPUTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnQuit;
    QPushButton *btnClear;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *title;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QPushButton *btnInfromation;
    QLabel *logo;
    QGroupBox *groupBox;
    QLabel *titleNameEntries;
    QLabel *TitleNumberPrizes;
    QLabel *NameCount;
    QLabel *PrizeCount;
    QLabel *TitlePrizeSelection;
    QComboBox *PrizeSelectionMode;
    QLabel *TitleProgramTitle;
    QLineEdit *lineEdit;
    QFrame *frame_3;
    QFrame *frame_4;
    QLabel *ColumNameNumber;
    QLabel *ColumnName;
    QLineEdit *InputName;
    QPushButton *btnAddName;
    QScrollArea *ContestantArea;
    QWidget *ContestantContainer;
    QGroupBox *Contestant;
    QLabel *ContestantID;
    QLineEdit *ContestantName;
    QPushButton *NameEdit;
    QPushButton *NameDelete;
    QFrame *frame_5;
    QFrame *frame_6;
    QLabel *ColumPrizeNumber;
    QLabel *ColumnPrize;
    QLineEdit *InputPrize;
    QPushButton *btnAddPrize;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLineEdit *LineEditName1_2;
    QPushButton *PrizeEdit;
    QPushButton *PrizeDelete;
    QPushButton *btnStart;

    void setupUi(QDialog *InputForm)
    {
        if (InputForm->objectName().isEmpty())
            InputForm->setObjectName("InputForm");
        InputForm->resize(1280, 800);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(226, 226, 226, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(240, 240, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(113, 113, 113, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(151, 151, 151, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        QBrush brush7(QColor(227, 227, 227, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        QBrush brush8(QColor(160, 160, 160, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush9(QColor(105, 105, 105, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        QBrush brush10(QColor(245, 245, 245, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        InputForm->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/Ticket.png"), QSize(), QIcon::Normal, QIcon::Off);
        InputForm->setWindowIcon(icon);
        InputForm->setStyleSheet(QString::fromUtf8("background-color: #E2E2E2;"));
        horizontalLayoutWidget = new QWidget(InputForm);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(910, 710, 101, 42));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnQuit = new QPushButton(horizontalLayoutWidget);
        btnQuit->setObjectName("btnQuit");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnQuit->sizePolicy().hasHeightForWidth());
        btnQuit->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Leelawadee")});
        font.setPointSize(12);
        btnQuit->setFont(font);
        btnQuit->setCursor(QCursor(Qt::PointingHandCursor));
        btnQuit->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"color: #46433C;\n"
"background-color: #FFFFFF; \n"
"qproperty-icon: url(:/img/img/sign-out.png);\n"
"qproperty-iconSize: 30px 30px;"));

        horizontalLayout->addWidget(btnQuit);

        btnClear = new QPushButton(horizontalLayoutWidget);
        btnClear->setObjectName("btnClear");
        sizePolicy.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy);
        btnClear->setFont(font);
        btnClear->setCursor(QCursor(Qt::PointingHandCursor));
        btnClear->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"color: #46433C;\n"
"background-color: #FFFFFF; \n"
"qproperty-icon: url(:/img/img/eraser.png);\n"
"qproperty-iconSize: 40px 40px;"));

        horizontalLayout->addWidget(btnClear);

        frame = new QFrame(InputForm);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-10, 0, 1291, 64));
        frame->setStyleSheet(QString::fromUtf8("background-color: #FAC213;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(10, 0, 1281, 53));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #46433C;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        title = new QLabel(frame_2);
        title->setObjectName("title");
        title->setGeometry(QRect(250, 0, 231, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Megrim")});
        font1.setPointSize(30);
        title->setFont(font1);
        title->setStyleSheet(QString::fromUtf8("color: white;"));
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(870, 0, 221, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnOpen = new QPushButton(layoutWidget);
        btnOpen->setObjectName("btnOpen");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnOpen->sizePolicy().hasHeightForWidth());
        btnOpen->setSizePolicy(sizePolicy1);
        btnOpen->setCursor(QCursor(Qt::PointingHandCursor));
        btnOpen->setStyleSheet(QString::fromUtf8("border: none;"));
        btnOpen->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(btnOpen);

        btnSave = new QPushButton(layoutWidget);
        btnSave->setObjectName("btnSave");
        sizePolicy1.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy1);
        btnSave->setCursor(QCursor(Qt::PointingHandCursor));
        btnSave->setStyleSheet(QString::fromUtf8("border: none;"));
        btnSave->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(btnSave);

        btnInfromation = new QPushButton(layoutWidget);
        btnInfromation->setObjectName("btnInfromation");
        sizePolicy1.setHeightForWidth(btnInfromation->sizePolicy().hasHeightForWidth());
        btnInfromation->setSizePolicy(sizePolicy1);
        btnInfromation->setCursor(QCursor(Qt::PointingHandCursor));
        btnInfromation->setStyleSheet(QString::fromUtf8("border: none;"));
        btnInfromation->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(btnInfromation);

        logo = new QLabel(frame_2);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(190, 0, 61, 51));
        groupBox = new QGroupBox(InputForm);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(180, 90, 931, 104));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF; \n"
"border-radius: 20px;"));
        titleNameEntries = new QLabel(groupBox);
        titleNameEntries->setObjectName("titleNameEntries");
        titleNameEntries->setGeometry(QRect(30, 20, 141, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Leelawadee")});
        font2.setPointSize(13);
        titleNameEntries->setFont(font2);
        titleNameEntries->setStyleSheet(QString::fromUtf8("color: #5B5959; "));
        TitleNumberPrizes = new QLabel(groupBox);
        TitleNumberPrizes->setObjectName("TitleNumberPrizes");
        TitleNumberPrizes->setGeometry(QRect(30, 60, 171, 21));
        TitleNumberPrizes->setFont(font2);
        TitleNumberPrizes->setStyleSheet(QString::fromUtf8("color: #5B5959; "));
        NameCount = new QLabel(groupBox);
        NameCount->setObjectName("NameCount");
        NameCount->setGeometry(QRect(190, 20, 21, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Leelawadee")});
        font3.setPointSize(13);
        font3.setBold(true);
        NameCount->setFont(font3);
        NameCount->setStyleSheet(QString::fromUtf8("color: #46433C;"));
        NameCount->setAlignment(Qt::AlignCenter);
        PrizeCount = new QLabel(groupBox);
        PrizeCount->setObjectName("PrizeCount");
        PrizeCount->setGeometry(QRect(190, 60, 21, 21));
        PrizeCount->setFont(font3);
        PrizeCount->setStyleSheet(QString::fromUtf8("color: #46433C;"));
        PrizeCount->setAlignment(Qt::AlignCenter);
        TitlePrizeSelection = new QLabel(groupBox);
        TitlePrizeSelection->setObjectName("TitlePrizeSelection");
        TitlePrizeSelection->setGeometry(QRect(320, 20, 121, 21));
        TitlePrizeSelection->setFont(font2);
        TitlePrizeSelection->setStyleSheet(QString::fromUtf8("color: #5B5959;"));
        PrizeSelectionMode = new QComboBox(groupBox);
        PrizeSelectionMode->setObjectName("PrizeSelectionMode");
        PrizeSelectionMode->setGeometry(QRect(320, 50, 158, 31));
        PrizeSelectionMode->setFont(font2);
        PrizeSelectionMode->setStyleSheet(QString::fromUtf8("border: 1px solid #E2E2E2; \n"
"border-radius: 5px;\n"
"background-color: white;\n"
"\n"
"color: #5B5959; "));
        TitleProgramTitle = new QLabel(groupBox);
        TitleProgramTitle->setObjectName("TitleProgramTitle");
        TitleProgramTitle->setGeometry(QRect(570, 20, 121, 21));
        TitleProgramTitle->setFont(font2);
        TitleProgramTitle->setStyleSheet(QString::fromUtf8("color: #5B5959;"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(570, 50, 325, 31));
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid #E2E2E2;\n"
"background-color: #ffffff;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        frame_3 = new QFrame(InputForm);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(180, 230, 535, 437));
        frame_3->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #FFFFFF;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(10, 10, 511, 40));
        frame_4->setAutoFillBackground(false);
        frame_4->setStyleSheet(QString::fromUtf8("background-color: #E2E2E2;\n"
"border-top-left-radius : 20px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        ColumNameNumber = new QLabel(frame_4);
        ColumNameNumber->setObjectName("ColumNameNumber");
        ColumNameNumber->setGeometry(QRect(30, 10, 16, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Leelawadee")});
        font4.setPointSize(18);
        font4.setBold(true);
        ColumNameNumber->setFont(font4);
        ColumNameNumber->setStyleSheet(QString::fromUtf8("color: #5B5959;"));
        ColumnName = new QLabel(frame_4);
        ColumnName->setObjectName("ColumnName");
        ColumnName->setGeometry(QRect(110, 10, 91, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Leelawadee")});
        font5.setPointSize(14);
        font5.setBold(false);
        ColumnName->setFont(font5);
        ColumnName->setLayoutDirection(Qt::LeftToRight);
        ColumnName->setStyleSheet(QString::fromUtf8("color: #5B5959;"));
        InputName = new QLineEdit(frame_3);
        InputName->setObjectName("InputName");
        InputName->setGeometry(QRect(20, 380, 421, 41));
        InputName->setFont(font2);
        InputName->setStyleSheet(QString::fromUtf8("border: 1px solid #707070;\n"
"border-radius: 15px;\n"
"padding-left: 15px;"));
        btnAddName = new QPushButton(frame_3);
        btnAddName->setObjectName("btnAddName");
        btnAddName->setGeometry(QRect(460, 380, 41, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Leelawadee")});
        font6.setPointSize(20);
        font6.setBold(true);
        btnAddName->setFont(font6);
        btnAddName->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddName->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #FAC213;\n"
"alig-text: center;\n"
"color: white; "));
        ContestantArea = new QScrollArea(frame_3);
        ContestantArea->setObjectName("ContestantArea");
        ContestantArea->setGeometry(QRect(20, 54, 501, 311));
        ContestantArea->setFrameShape(QFrame::StyledPanel);
        ContestantArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ContestantArea->setWidgetResizable(true);
        ContestantContainer = new QWidget();
        ContestantContainer->setObjectName("ContestantContainer");
        ContestantContainer->setGeometry(QRect(0, 0, 501, 311));
        Contestant = new QGroupBox(ContestantContainer);
        Contestant->setObjectName("Contestant");
        Contestant->setGeometry(QRect(0, 10, 471, 41));
        Contestant->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid #E2E2E2;\n"
"border-radius: 1px;"));
        ContestantID = new QLabel(Contestant);
        ContestantID->setObjectName("ContestantID");
        ContestantID->setGeometry(QRect(20, 4, 61, 31));
        ContestantID->setFont(font2);
        ContestantID->setStyleSheet(QString::fromUtf8("color: #5B5959; \n"
"border: none;"));
        ContestantName = new QLineEdit(Contestant);
        ContestantName->setObjectName("ContestantName");
        ContestantName->setGeometry(QRect(100, 0, 251, 31));
        QFont font7;
        font7.setPointSize(13);
        ContestantName->setFont(font7);
        ContestantName->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #5B5959;\n"
"background-color: transparent;"));
        NameEdit = new QPushButton(Contestant);
        NameEdit->setObjectName("NameEdit");
        NameEdit->setGeometry(QRect(380, 0, 35, 35));
        NameEdit->setCursor(QCursor(Qt::PointingHandCursor));
        NameEdit->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: #FAC213;"));
        NameEdit->setIconSize(QSize(20, 20));
        NameDelete = new QPushButton(Contestant);
        NameDelete->setObjectName("NameDelete");
        NameDelete->setGeometry(QRect(420, 0, 35, 35));
        NameDelete->setCursor(QCursor(Qt::PointingHandCursor));
        NameDelete->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: #FEBDBD;"));
        NameDelete->setIconSize(QSize(20, 20));
        ContestantArea->setWidget(ContestantContainer);
        ContestantArea->raise();
        frame_4->raise();
        InputName->raise();
        btnAddName->raise();
        frame_5 = new QFrame(InputForm);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(750, 230, 361, 437));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF; \n"
"border-radius: 20px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(10, 10, 341, 40));
        frame_6->setAutoFillBackground(false);
        frame_6->setStyleSheet(QString::fromUtf8("background-color: #E2E2E2;\n"
"border-top-left-radius : 20px;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        ColumPrizeNumber = new QLabel(frame_6);
        ColumPrizeNumber->setObjectName("ColumPrizeNumber");
        ColumPrizeNumber->setGeometry(QRect(30, 10, 16, 21));
        ColumPrizeNumber->setFont(font4);
        ColumPrizeNumber->setStyleSheet(QString::fromUtf8("color: #5B5959;"));
        ColumnPrize = new QLabel(frame_6);
        ColumnPrize->setObjectName("ColumnPrize");
        ColumnPrize->setGeometry(QRect(90, 10, 91, 21));
        ColumnPrize->setFont(font5);
        ColumnPrize->setLayoutDirection(Qt::LeftToRight);
        ColumnPrize->setStyleSheet(QString::fromUtf8("color: #5B5959;"));
        InputPrize = new QLineEdit(frame_5);
        InputPrize->setObjectName("InputPrize");
        InputPrize->setGeometry(QRect(20, 380, 261, 41));
        InputPrize->setFont(font2);
        InputPrize->setStyleSheet(QString::fromUtf8("border: 1px solid #707070;\n"
"border-radius: 15px;\n"
"padding-left: 15px;"));
        btnAddPrize = new QPushButton(frame_5);
        btnAddPrize->setObjectName("btnAddPrize");
        btnAddPrize->setGeometry(QRect(300, 380, 41, 41));
        btnAddPrize->setFont(font6);
        btnAddPrize->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddPrize->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #FAC213;\n"
"alig-text: center;\n"
"color: white; "));
        groupBox_3 = new QGroupBox(frame_5);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 60, 341, 41));
        groupBox_3->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid #E2E2E2;\n"
"border-radius: 1px;"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 0, 61, 31));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: #5B5959; \n"
"border: none;"));
        LineEditName1_2 = new QLineEdit(groupBox_3);
        LineEditName1_2->setObjectName("LineEditName1_2");
        LineEditName1_2->setGeometry(QRect(90, 0, 251, 31));
        LineEditName1_2->setFont(font7);
        LineEditName1_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #5B5959;\n"
"background-color: transparent;"));
        PrizeEdit = new QPushButton(groupBox_3);
        PrizeEdit->setObjectName("PrizeEdit");
        PrizeEdit->setGeometry(QRect(290, 0, 35, 35));
        PrizeEdit->setCursor(QCursor(Qt::PointingHandCursor));
        PrizeEdit->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: #FAC213;"));
        PrizeEdit->setIconSize(QSize(20, 20));
        PrizeDelete = new QPushButton(groupBox_3);
        PrizeDelete->setObjectName("PrizeDelete");
        PrizeDelete->setGeometry(QRect(250, 0, 35, 35));
        PrizeDelete->setCursor(QCursor(Qt::PointingHandCursor));
        PrizeDelete->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: #FEBDBD;"));
        PrizeDelete->setIconSize(QSize(20, 20));
        btnStart = new QPushButton(InputForm);
        btnStart->setObjectName("btnStart");
        btnStart->setGeometry(QRect(1020, 710, 89, 39));
        sizePolicy.setHeightForWidth(btnStart->sizePolicy().hasHeightForWidth());
        btnStart->setSizePolicy(sizePolicy);
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Leelawadee")});
        font8.setPointSize(12);
        font8.setBold(false);
        btnStart->setFont(font8);
        btnStart->setCursor(QCursor(Qt::PointingHandCursor));
        btnStart->setStyleSheet(QString::fromUtf8("background-color: #FAC213;\n"
"border-radius: 5px;\n"
"color: #46433C;\n"
"qproperty-icon: url(:/img/img/next.png);\n"
"qproperty-iconSize: 20px 20px;"));

        retranslateUi(InputForm);

        QMetaObject::connectSlotsByName(InputForm);
    } // setupUi

    void retranslateUi(QDialog *InputForm)
    {
        InputForm->setWindowTitle(QCoreApplication::translate("InputForm", "Victor Hunt", nullptr));
#if QT_CONFIG(tooltip)
        btnQuit->setToolTip(QCoreApplication::translate("InputForm", "Quit", nullptr));
#endif // QT_CONFIG(tooltip)
        btnQuit->setText(QString());
#if QT_CONFIG(tooltip)
        btnClear->setToolTip(QCoreApplication::translate("InputForm", "Clear", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClear->setText(QString());
        title->setText(QCoreApplication::translate("InputForm", "Victor Hunt", nullptr));
#if QT_CONFIG(tooltip)
        btnOpen->setToolTip(QCoreApplication::translate("InputForm", "Open", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOpen->setText(QString());
#if QT_CONFIG(tooltip)
        btnSave->setToolTip(QCoreApplication::translate("InputForm", "Save", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSave->setText(QString());
#if QT_CONFIG(tooltip)
        btnInfromation->setToolTip(QCoreApplication::translate("InputForm", "Instructions", nullptr));
#endif // QT_CONFIG(tooltip)
        btnInfromation->setText(QString());
        logo->setText(QCoreApplication::translate("InputForm", "TextLabel", nullptr));
        groupBox->setTitle(QString());
        titleNameEntries->setText(QCoreApplication::translate("InputForm", "Name Entries:", nullptr));
        TitleNumberPrizes->setText(QCoreApplication::translate("InputForm", "Number of Prizes:", nullptr));
        NameCount->setText(QCoreApplication::translate("InputForm", "0", nullptr));
        PrizeCount->setText(QCoreApplication::translate("InputForm", "0", nullptr));
        TitlePrizeSelection->setText(QCoreApplication::translate("InputForm", "Prize Selection", nullptr));
        TitleProgramTitle->setText(QCoreApplication::translate("InputForm", "Program Title", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("InputForm", "Raffle Application", nullptr));
        ColumNameNumber->setText(QCoreApplication::translate("InputForm", "#", nullptr));
        ColumnName->setText(QCoreApplication::translate("InputForm", "Name", nullptr));
#if QT_CONFIG(tooltip)
        InputName->setToolTip(QCoreApplication::translate("InputForm", "Enter Name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnAddName->setToolTip(QCoreApplication::translate("InputForm", "Add", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddName->setText(QCoreApplication::translate("InputForm", "+", nullptr));
        Contestant->setTitle(QString());
        ContestantID->setText(QCoreApplication::translate("InputForm", "1", nullptr));
        ContestantName->setText(QCoreApplication::translate("InputForm", "Sample Name", nullptr));
        NameEdit->setText(QString());
        NameDelete->setText(QString());
        ColumPrizeNumber->setText(QCoreApplication::translate("InputForm", "#", nullptr));
        ColumnPrize->setText(QCoreApplication::translate("InputForm", "Prize", nullptr));
#if QT_CONFIG(tooltip)
        InputPrize->setToolTip(QCoreApplication::translate("InputForm", "Enter Prize", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnAddPrize->setToolTip(QCoreApplication::translate("InputForm", "Add", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddPrize->setText(QCoreApplication::translate("InputForm", "+", nullptr));
        groupBox_3->setTitle(QString());
        label_2->setText(QCoreApplication::translate("InputForm", "1     -", nullptr));
        LineEditName1_2->setText(QCoreApplication::translate("InputForm", "Sample Prize", nullptr));
        PrizeEdit->setText(QString());
        PrizeDelete->setText(QString());
        btnStart->setText(QCoreApplication::translate("InputForm", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputForm: public Ui_InputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTFORM_H
