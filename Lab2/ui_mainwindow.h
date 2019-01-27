/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *picture;
    QLabel *label_2;
    QLabel *namePrice_Label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *todaySoup_Button;
    QPushButton *chefSpecial_Button;
    QPushButton *dailyFish_Button;
    QPushButton *exit_Button;
    QMenuBar *menuBar;
    QMenu *menuCline_Diner;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(589, 526);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        picture = new QLabel(centralWidget);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setGeometry(QRect(140, 60, 311, 300));
        picture->setFrameShape(QFrame::Box);
        picture->setFrameShadow(QFrame::Sunken);
        picture->setLineWidth(3);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 0, 231, 51));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(10, 14, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_2->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Kozuka Mincho Pr6N R"));
        font.setPointSize(24);
        label_2->setFont(font);
        label_2->setCursor(QCursor(Qt::ArrowCursor));
        label_2->setAutoFillBackground(true);
        label_2->setFrameShape(QFrame::Panel);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setAlignment(Qt::AlignCenter);
        namePrice_Label = new QLabel(centralWidget);
        namePrice_Label->setObjectName(QString::fromUtf8("namePrice_Label"));
        namePrice_Label->setGeometry(QRect(140, 360, 311, 20));
        namePrice_Label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 390, 571, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        todaySoup_Button = new QPushButton(layoutWidget);
        todaySoup_Button->setObjectName(QString::fromUtf8("todaySoup_Button"));
        todaySoup_Button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(todaySoup_Button);

        chefSpecial_Button = new QPushButton(layoutWidget);
        chefSpecial_Button->setObjectName(QString::fromUtf8("chefSpecial_Button"));
        chefSpecial_Button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(chefSpecial_Button);

        dailyFish_Button = new QPushButton(layoutWidget);
        dailyFish_Button->setObjectName(QString::fromUtf8("dailyFish_Button"));
        dailyFish_Button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(dailyFish_Button);

        exit_Button = new QPushButton(layoutWidget);
        exit_Button->setObjectName(QString::fromUtf8("exit_Button"));
        exit_Button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(exit_Button);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 589, 21));
        menuCline_Diner = new QMenu(menuBar);
        menuCline_Diner->setObjectName(QString::fromUtf8("menuCline_Diner"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCline_Diner->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Cline Diner Specials", nullptr));
        picture->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Cline Diner", nullptr));
        namePrice_Label->setText(QString());
        todaySoup_Button->setText(QApplication::translate("MainWindow", "Today's Soup", nullptr));
        chefSpecial_Button->setText(QApplication::translate("MainWindow", "Chef's Special", nullptr));
        dailyFish_Button->setText(QApplication::translate("MainWindow", "Daily Fish", nullptr));
        exit_Button->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        menuCline_Diner->setTitle(QApplication::translate("MainWindow", "Cline Diner", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
