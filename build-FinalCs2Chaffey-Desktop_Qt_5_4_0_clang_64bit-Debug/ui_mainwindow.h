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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_add_2;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *a;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_Factorial;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_add;
    QPushButton *PushButton_equal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(343, 309);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 23, 340, 31));
        lineEdit->setAcceptDrops(true);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAutoFillBackground(true);
        lineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit->setMaxLength(200);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 331, 31));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 40, 342, 178));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_Clear = new QPushButton(widget);
        pushButton_Clear->setObjectName(QStringLiteral("pushButton_Clear"));

        gridLayout->addWidget(pushButton_Clear, 0, 0, 1, 1);

        pushButton_add_2 = new QPushButton(widget);
        pushButton_add_2->setObjectName(QStringLiteral("pushButton_add_2"));

        gridLayout->addWidget(pushButton_add_2, 0, 1, 1, 1);

        pushButton_Multiply = new QPushButton(widget);
        pushButton_Multiply->setObjectName(QStringLiteral("pushButton_Multiply"));

        gridLayout->addWidget(pushButton_Multiply, 0, 2, 1, 1);

        pushButton_divide = new QPushButton(widget);
        pushButton_divide->setObjectName(QStringLiteral("pushButton_divide"));

        gridLayout->addWidget(pushButton_divide, 0, 3, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        a = new QPushButton(widget);
        a->setObjectName(QStringLiteral("a"));

        gridLayout->addWidget(a, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_Factorial = new QPushButton(widget);
        pushButton_Factorial->setObjectName(QStringLiteral("pushButton_Factorial"));

        gridLayout->addWidget(pushButton_Factorial, 2, 3, 1, 1);

        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_minus = new QPushButton(widget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));

        gridLayout->addWidget(pushButton_minus, 3, 3, 1, 1);

        pushButton_0 = new QPushButton(widget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 4, 0, 1, 2);

        pushButton_add = new QPushButton(widget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        gridLayout->addWidget(pushButton_add, 4, 2, 1, 1);

        PushButton_equal = new QPushButton(widget);
        PushButton_equal->setObjectName(QStringLiteral("PushButton_equal"));

        gridLayout->addWidget(PushButton_equal, 4, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 343, 22));
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
        label->setText(QString());
        pushButton_Clear->setText(QApplication::translate("MainWindow", "C", 0));
        pushButton_add_2->setText(QApplication::translate("MainWindow", "+", 0));
        pushButton_Multiply->setText(QApplication::translate("MainWindow", "X", 0));
        pushButton_divide->setText(QApplication::translate("MainWindow", "/", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", 0));
        a->setText(QApplication::translate("MainWindow", "/", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", 0));
        pushButton_Factorial->setText(QApplication::translate("MainWindow", "!", 0));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", 0));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_add->setText(QApplication::translate("MainWindow", "+", 0));
        PushButton_equal->setText(QApplication::translate("MainWindow", "=", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
