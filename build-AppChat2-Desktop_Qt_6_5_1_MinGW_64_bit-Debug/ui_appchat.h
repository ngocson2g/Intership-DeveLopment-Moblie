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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Appchat
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_My_ID;
    QComboBox *comboBox_list_address;
    QPushButton *pushButton_Connect;
    QTextEdit *textEdit_show_chat;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_msg;
    QPushButton *pushButton_Send_Msg;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Appchat)
    {
        if (Appchat->objectName().isEmpty())
            Appchat->setObjectName("Appchat");
        Appchat->resize(800, 600);
        centralwidget = new QWidget(Appchat);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 70, 601, 401));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_My_ID = new QLabel(widget);
        label_My_ID->setObjectName("label_My_ID");

        horizontalLayout_2->addWidget(label_My_ID);

        comboBox_list_address = new QComboBox(widget);
        comboBox_list_address->setObjectName("comboBox_list_address");

        horizontalLayout_2->addWidget(comboBox_list_address);

        pushButton_Connect = new QPushButton(widget);
        pushButton_Connect->setObjectName("pushButton_Connect");

        horizontalLayout_2->addWidget(pushButton_Connect);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        textEdit_show_chat = new QTextEdit(widget);
        textEdit_show_chat->setObjectName("textEdit_show_chat");

        gridLayout->addWidget(textEdit_show_chat, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_msg = new QLineEdit(widget);
        lineEdit_msg->setObjectName("lineEdit_msg");

        horizontalLayout->addWidget(lineEdit_msg);

        pushButton_Send_Msg = new QPushButton(widget);
        pushButton_Send_Msg->setObjectName("pushButton_Send_Msg");

        horizontalLayout->addWidget(pushButton_Send_Msg);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        Appchat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Appchat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Appchat->setMenuBar(menubar);
        statusbar = new QStatusBar(Appchat);
        statusbar->setObjectName("statusbar");
        Appchat->setStatusBar(statusbar);

        retranslateUi(Appchat);

        QMetaObject::connectSlotsByName(Appchat);
    } // setupUi

    void retranslateUi(QMainWindow *Appchat)
    {
        Appchat->setWindowTitle(QCoreApplication::translate("Appchat", "Appchat", nullptr));
        label_My_ID->setText(QCoreApplication::translate("Appchat", "My_ID", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("Appchat", "connect", nullptr));
        pushButton_Send_Msg->setText(QCoreApplication::translate("Appchat", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Appchat: public Ui_Appchat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCHAT_H
