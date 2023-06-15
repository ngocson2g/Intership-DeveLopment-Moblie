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

class Ui_AppChat
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_open_app;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_index_code;
    QComboBox *comboBox_ListAddress;
    QPushButton *pushButton_Connect;
    QTextEdit *textEdit_recied;
    QPushButton *pushButton_Send;
    QLineEdit *lineEdit_Message_Send;
    QPushButton *pushButton_back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AppChat)
    {
        if (AppChat->objectName().isEmpty())
            AppChat->setObjectName("AppChat");
        AppChat->resize(926, 623);
        centralwidget = new QWidget(AppChat);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        pushButton_open_app = new QPushButton(page);
        pushButton_open_app->setObjectName("pushButton_open_app");
        pushButton_open_app->setGeometry(QRect(280, 150, 80, 61));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(page_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_index_code = new QLabel(page_2);
        label_index_code->setObjectName("label_index_code");

        gridLayout->addWidget(label_index_code, 0, 2, 1, 1);

        comboBox_ListAddress = new QComboBox(page_2);
        comboBox_ListAddress->setObjectName("comboBox_ListAddress");

        gridLayout->addWidget(comboBox_ListAddress, 1, 1, 1, 1);

        pushButton_Connect = new QPushButton(page_2);
        pushButton_Connect->setObjectName("pushButton_Connect");

        gridLayout->addWidget(pushButton_Connect, 1, 2, 1, 1);

        textEdit_recied = new QTextEdit(page_2);
        textEdit_recied->setObjectName("textEdit_recied");
        textEdit_recied->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(textEdit_recied, 2, 0, 1, 3);

        pushButton_Send = new QPushButton(page_2);
        pushButton_Send->setObjectName("pushButton_Send");

        gridLayout->addWidget(pushButton_Send, 3, 2, 1, 1);

        lineEdit_Message_Send = new QLineEdit(page_2);
        lineEdit_Message_Send->setObjectName("lineEdit_Message_Send");

        gridLayout->addWidget(lineEdit_Message_Send, 3, 0, 1, 2);

        pushButton_back = new QPushButton(page_2);
        pushButton_back->setObjectName("pushButton_back");

        gridLayout->addWidget(pushButton_back, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        AppChat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AppChat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 926, 21));
        AppChat->setMenuBar(menubar);
        statusbar = new QStatusBar(AppChat);
        statusbar->setObjectName("statusbar");
        AppChat->setStatusBar(statusbar);

        retranslateUi(AppChat);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AppChat);
    } // setupUi

    void retranslateUi(QMainWindow *AppChat)
    {
        AppChat->setWindowTitle(QCoreApplication::translate("AppChat", "AppChat", nullptr));
        pushButton_open_app->setText(QCoreApplication::translate("AppChat", "App chat", nullptr));
        label->setText(QCoreApplication::translate("AppChat", "APP CHAT", nullptr));
        label_index_code->setText(QCoreApplication::translate("AppChat", "Code", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("AppChat", "connect", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("AppChat", "Send", nullptr));
        pushButton_back->setText(QCoreApplication::translate("AppChat", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppChat: public Ui_AppChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCHAT_H
