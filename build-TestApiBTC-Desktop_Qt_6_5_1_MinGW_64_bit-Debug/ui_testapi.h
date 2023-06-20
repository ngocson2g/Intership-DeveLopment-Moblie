/********************************************************************************
** Form generated from reading UI file 'testapi.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTAPI_H
#define UI_TESTAPI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestAPI
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestAPI)
    {
        if (TestAPI->objectName().isEmpty())
            TestAPI->setObjectName("TestAPI");
        TestAPI->resize(800, 600);
        centralwidget = new QWidget(TestAPI);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 60, 711, 461));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        TestAPI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestAPI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        TestAPI->setMenuBar(menubar);
        statusbar = new QStatusBar(TestAPI);
        statusbar->setObjectName("statusbar");
        TestAPI->setStatusBar(statusbar);

        retranslateUi(TestAPI);

        QMetaObject::connectSlotsByName(TestAPI);
    } // setupUi

    void retranslateUi(QMainWindow *TestAPI)
    {
        TestAPI->setWindowTitle(QCoreApplication::translate("TestAPI", "TestAPI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestAPI: public Ui_TestAPI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTAPI_H
