/********************************************************************************
** Form generated from reading UI file 'testqchart.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTQCHART_H
#define UI_TESTQCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "form.h"

QT_BEGIN_NAMESPACE

class Ui_testQchart
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Page_1;
    QPushButton *pushButton_Page_2;
    QStackedWidget *stackedWidget;
    Form *page;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *testQchart)
    {
        if (testQchart->objectName().isEmpty())
            testQchart->setObjectName("testQchart");
        testQchart->resize(856, 665);
        centralwidget = new QWidget(testQchart);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_Page_1 = new QPushButton(centralwidget);
        pushButton_Page_1->setObjectName("pushButton_Page_1");

        horizontalLayout->addWidget(pushButton_Page_1);

        pushButton_Page_2 = new QPushButton(centralwidget);
        pushButton_Page_2->setObjectName("pushButton_Page_2");

        horizontalLayout->addWidget(pushButton_Page_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new Form();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        testQchart->setCentralWidget(centralwidget);
        menubar = new QMenuBar(testQchart);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 856, 21));
        testQchart->setMenuBar(menubar);
        statusbar = new QStatusBar(testQchart);
        statusbar->setObjectName("statusbar");
        testQchart->setStatusBar(statusbar);

        retranslateUi(testQchart);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(testQchart);
    } // setupUi

    void retranslateUi(QMainWindow *testQchart)
    {
        testQchart->setWindowTitle(QCoreApplication::translate("testQchart", "testQchart", nullptr));
        pushButton_Page_1->setText(QCoreApplication::translate("testQchart", "Page 1", nullptr));
        pushButton_Page_2->setText(QCoreApplication::translate("testQchart", "Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testQchart: public Ui_testQchart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTQCHART_H
