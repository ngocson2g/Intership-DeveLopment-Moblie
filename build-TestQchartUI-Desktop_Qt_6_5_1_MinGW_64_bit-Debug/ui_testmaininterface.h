/********************************************************************************
** Form generated from reading UI file 'testmaininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTMAININTERFACE_H
#define UI_TESTMAININTERFACE_H

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
#include <form.h>
#include <form_2.h>
#include <form_3.h>

QT_BEGIN_NAMESPACE

class Ui_TestMainInterface
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Back;
    QPushButton *pushButton_Next;
    QStackedWidget *stackedWidget;
    Form *page;
    QPushButton *pushButton_page_1_test;
    Form_2 *page_2;
    QPushButton *pushButton_page_2_test;
    Form_3 *page_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestMainInterface)
    {
        if (TestMainInterface->objectName().isEmpty())
            TestMainInterface->setObjectName("TestMainInterface");
        TestMainInterface->resize(800, 600);
        centralwidget = new QWidget(TestMainInterface);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_Back = new QPushButton(centralwidget);
        pushButton_Back->setObjectName("pushButton_Back");

        horizontalLayout->addWidget(pushButton_Back);

        pushButton_Next = new QPushButton(centralwidget);
        pushButton_Next->setObjectName("pushButton_Next");

        horizontalLayout->addWidget(pushButton_Next);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new Form();
        page->setObjectName("page");
        pushButton_page_1_test = new QPushButton(page);
        pushButton_page_1_test->setObjectName("pushButton_page_1_test");
        pushButton_page_1_test->setGeometry(QRect(150, 0, 80, 24));
        stackedWidget->addWidget(page);
        page_2 = new Form_2();
        page_2->setObjectName("page_2");
        pushButton_page_2_test = new QPushButton(page_2);
        pushButton_page_2_test->setObjectName("pushButton_page_2_test");
        pushButton_page_2_test->setGeometry(QRect(510, 0, 80, 24));
        stackedWidget->addWidget(page_2);
        page_3 = new Form_3();
        page_3->setObjectName("page_3");
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 40, 80, 24));
        stackedWidget->addWidget(page_3);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        TestMainInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestMainInterface);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        TestMainInterface->setMenuBar(menubar);
        statusbar = new QStatusBar(TestMainInterface);
        statusbar->setObjectName("statusbar");
        TestMainInterface->setStatusBar(statusbar);

        retranslateUi(TestMainInterface);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TestMainInterface);
    } // setupUi

    void retranslateUi(QMainWindow *TestMainInterface)
    {
        TestMainInterface->setWindowTitle(QCoreApplication::translate("TestMainInterface", "TestMainInterface", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("TestMainInterface", "Back", nullptr));
        pushButton_Next->setText(QCoreApplication::translate("TestMainInterface", "Next", nullptr));
        pushButton_page_1_test->setText(QCoreApplication::translate("TestMainInterface", "page 1 ok", nullptr));
        pushButton_page_2_test->setText(QCoreApplication::translate("TestMainInterface", "page 2 ok", nullptr));
        pushButton->setText(QCoreApplication::translate("TestMainInterface", "page 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestMainInterface: public Ui_TestMainInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTMAININTERFACE_H
