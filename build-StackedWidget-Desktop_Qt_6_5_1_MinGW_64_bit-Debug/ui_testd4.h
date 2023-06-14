/********************************************************************************
** Form generated from reading UI file 'testd4.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTD4_H
#define UI_TESTD4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testD4
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QWidget *page_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *testD4)
    {
        if (testD4->objectName().isEmpty())
            testD4->setObjectName("testD4");
        testD4->resize(800, 600);
        centralwidget = new QWidget(testD4);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(620, 400, 80, 24));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(660, 410, 80, 24));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        testD4->setCentralWidget(centralwidget);
        menubar = new QMenuBar(testD4);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        testD4->setMenuBar(menubar);
        statusbar = new QStatusBar(testD4);
        statusbar->setObjectName("statusbar");
        testD4->setStatusBar(statusbar);

        retranslateUi(testD4);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(testD4);
    } // setupUi

    void retranslateUi(QMainWindow *testD4)
    {
        testD4->setWindowTitle(QCoreApplication::translate("testD4", "testD4", nullptr));
        pushButton->setText(QCoreApplication::translate("testD4", "next", nullptr));
        pushButton_2->setText(QCoreApplication::translate("testD4", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testD4: public Ui_testD4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTD4_H
