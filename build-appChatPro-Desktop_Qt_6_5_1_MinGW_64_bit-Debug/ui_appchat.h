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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appChat
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_myAddress;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_appchat;
    QWidget *page_2;
    QComboBox *comboBox_listConnect;
    QPushButton *pushButton_connect;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_recied;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_send;
    QPushButton *pushButton_send;
    QPushButton *pushButton_back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *appChat)
    {
        if (appChat->objectName().isEmpty())
            appChat->setObjectName("appChat");
        appChat->resize(800, 600);
        centralwidget = new QWidget(appChat);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label_myAddress = new QLabel(centralwidget);
        label_myAddress->setObjectName("label_myAddress");
        label_myAddress->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_myAddress, 0, 1, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        pushButton_appchat = new QPushButton(page);
        pushButton_appchat->setObjectName("pushButton_appchat");
        pushButton_appchat->setGeometry(QRect(330, 230, 71, 61));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        comboBox_listConnect = new QComboBox(page_2);
        comboBox_listConnect->setObjectName("comboBox_listConnect");
        comboBox_listConnect->setGeometry(QRect(190, 200, 72, 24));
        pushButton_connect = new QPushButton(page_2);
        pushButton_connect->setObjectName("pushButton_connect");
        pushButton_connect->setGeometry(QRect(340, 200, 80, 24));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        textEdit_recied = new QTextEdit(page_3);
        textEdit_recied->setObjectName("textEdit_recied");

        gridLayout_2->addWidget(textEdit_recied, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_send = new QLineEdit(page_3);
        lineEdit_send->setObjectName("lineEdit_send");

        horizontalLayout->addWidget(lineEdit_send);

        pushButton_send = new QPushButton(page_3);
        pushButton_send->setObjectName("pushButton_send");

        horizontalLayout->addWidget(pushButton_send);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);

        gridLayout->addWidget(stackedWidget, 1, 1, 1, 1);

        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");

        gridLayout->addWidget(pushButton_back, 0, 0, 1, 1);

        appChat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(appChat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        appChat->setMenuBar(menubar);
        statusbar = new QStatusBar(appChat);
        statusbar->setObjectName("statusbar");
        appChat->setStatusBar(statusbar);

        retranslateUi(appChat);

        stackedWidget->setCurrentIndex(0);
        comboBox_listConnect->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(appChat);
    } // setupUi

    void retranslateUi(QMainWindow *appChat)
    {
        appChat->setWindowTitle(QCoreApplication::translate("appChat", "appChat", nullptr));
        label_myAddress->setText(QCoreApplication::translate("appChat", "My IP", nullptr));
        pushButton_appchat->setText(QCoreApplication::translate("appChat", "APP CHAT", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("appChat", "connect", nullptr));
        pushButton_send->setText(QCoreApplication::translate("appChat", "Send", nullptr));
        pushButton_back->setText(QCoreApplication::translate("appChat", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class appChat: public Ui_appChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCHAT_H
