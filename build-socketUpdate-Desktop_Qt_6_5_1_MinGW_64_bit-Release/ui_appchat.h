/********************************************************************************
** Form generated from reading UI file 'appchat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPCHAT_H
#define UI_APPCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Appchat
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QPushButton *pushButton_connect;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_send;
    QTextEdit *textEdit;
    QPushButton *pushButton_back;
    QPushButton *pushButton_app;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Appchat)
    {
        if (Appchat->objectName().isEmpty())
            Appchat->setObjectName("Appchat");
        Appchat->resize(800, 600);
        centralwidget = new QWidget(Appchat);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(240, 180, 160, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);

        pushButton_connect = new QPushButton(layoutWidget);
        pushButton_connect->setObjectName("pushButton_connect");

        horizontalLayout_2->addWidget(pushButton_connect);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton_send = new QPushButton(page_2);
        pushButton_send->setObjectName("pushButton_send");

        horizontalLayout->addWidget(pushButton_send);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        textEdit = new QTextEdit(page_2);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 1, 3, 1, 1);

        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");

        gridLayout_2->addWidget(pushButton_back, 0, 1, 1, 1);

        pushButton_app = new QPushButton(centralwidget);
        pushButton_app->setObjectName("pushButton_app");

        gridLayout_2->addWidget(pushButton_app, 0, 2, 1, 1);

        Appchat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Appchat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Appchat->setMenuBar(menubar);
        statusbar = new QStatusBar(Appchat);
        statusbar->setObjectName("statusbar");
        Appchat->setStatusBar(statusbar);

        retranslateUi(Appchat);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Appchat);
    } // setupUi

    void retranslateUi(QMainWindow *Appchat)
    {
        Appchat->setWindowTitle(QCoreApplication::translate("Appchat", "Appchat", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("Appchat", "connect", nullptr));
        pushButton_send->setText(QCoreApplication::translate("Appchat", "send", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Appchat", "Back", nullptr));
        pushButton_app->setText(QCoreApplication::translate("Appchat", "app", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Appchat: public Ui_Appchat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCHAT_H
