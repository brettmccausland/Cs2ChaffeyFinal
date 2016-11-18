/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
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
    QLineEdit *lineEdit;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *a;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_add;
    QPushButton *pushButton_add_2;
    QPushButton *a_2;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_Factorial;
    QPushButton *PushButton_equal;
    QPushButton *a_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(324, 360);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(-10, 0, 331, 51));
        pushButton_Clear = new QPushButton(centralWidget);
        pushButton_Clear->setObjectName(QStringLiteral("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(0, 50, 81, 41));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 90, 81, 51));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 140, 81, 51));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 190, 81, 51));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 90, 81, 51));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 140, 81, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 190, 81, 51));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(160, 90, 81, 51));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 140, 81, 51));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 190, 81, 51));
        a = new QPushButton(centralWidget);
        a->setObjectName(QStringLiteral("a"));
        a->setGeometry(QRect(240, 90, 81, 51));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(240, 190, 81, 51));
        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(160, 240, 81, 51));
        pushButton_add_2 = new QPushButton(centralWidget);
        pushButton_add_2->setObjectName(QStringLiteral("pushButton_add_2"));
        pushButton_add_2->setGeometry(QRect(80, 50, 81, 41));
        a_2 = new QPushButton(centralWidget);
        a_2->setObjectName(QStringLiteral("a_2"));
        a_2->setGeometry(QRect(0, 240, 161, 51));
        pushButton_Multiply = new QPushButton(centralWidget);
        pushButton_Multiply->setObjectName(QStringLiteral("pushButton_Multiply"));
        pushButton_Multiply->setGeometry(QRect(160, 50, 81, 41));
        pushButton_Factorial = new QPushButton(centralWidget);
        pushButton_Factorial->setObjectName(QStringLiteral("pushButton_Factorial"));
        pushButton_Factorial->setGeometry(QRect(240, 140, 81, 51));
        PushButton_equal = new QPushButton(centralWidget);
        PushButton_equal->setObjectName(QStringLiteral("PushButton_equal"));
        PushButton_equal->setGeometry(QRect(240, 240, 81, 51));
        a_3 = new QPushButton(centralWidget);
        a_3->setObjectName(QStringLiteral("a_3"));
        a_3->setGeometry(QRect(240, 50, 81, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 324, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_Clear->setText(QApplication::translate("MainWindow", "C", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", 0));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", 0));
        a->setText(QApplication::translate("MainWindow", "/", 0));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton_add->setText(QApplication::translate("MainWindow", "+", 0));
        pushButton_add_2->setText(QApplication::translate("MainWindow", "+", 0));
        a_2->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_Multiply->setText(QApplication::translate("MainWindow", "X", 0));
        pushButton_Factorial->setText(QApplication::translate("MainWindow", "!", 0));
        PushButton_equal->setText(QApplication::translate("MainWindow", "=", 0));
        a_3->setText(QApplication::translate("MainWindow", "/", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
