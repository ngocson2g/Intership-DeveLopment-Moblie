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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppChat
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_index_code;
    QComboBox *comboBox_ListAddress;
    QPushButton *pushButton_Connect;
    QTextEdit *textEdit_recied;
    QPushButton *pushButton_Send;
    QLineEdit *lineEdit_Message_Send;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AppChat)
    {
        if (AppChat->objectName().isEmpty())
            AppChat->setObjectName("AppChat");
        AppChat->resize(285, 370);
        centralwidget = new QWidget(AppChat);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(11, 44, 258, 276));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_index_code = new QLabel(widget);
        label_index_code->setObjectName("label_index_code");

        gridLayout->addWidget(label_index_code, 0, 2, 1, 1);

        comboBox_ListAddress = new QComboBox(widget);
        comboBox_ListAddress->setObjectName("comboBox_ListAddress");

        gridLayout->addWidget(comboBox_ListAddress, 1, 1, 1, 1);

        pushButton_Connect = new QPushButton(widget);
        pushButton_Connect->setObjectName("pushButton_Connect");

        gridLayout->addWidget(pushButton_Connect, 1, 2, 1, 1);

        textEdit_recied = new QTextEdit(widget);
        textEdit_recied->setObjectName("textEdit_recied");

        gridLayout->addWidget(textEdit_recied, 2, 0, 1, 3);

        pushButton_Send = new QPushButton(widget);
        pushButton_Send->setObjectName("pushButton_Send");

        gridLayout->addWidget(pushButton_Send, 3, 2, 1, 1);

        lineEdit_Message_Send = new QLineEdit(widget);
        lineEdit_Message_Send->setObjectName("lineEdit_Message_Send");

        gridLayout->addWidget(lineEdit_Message_Send, 3, 0, 1, 2);

        AppChat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AppChat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 285, 21));
        AppChat->setMenuBar(menubar);
        statusbar = new QStatusBar(AppChat);
        statusbar->setObjectName("statusbar");
        AppChat->setStatusBar(statusbar);

        retranslateUi(AppChat);

        QMetaObject::connectSlotsByName(AppChat);
    } // setupUi

    void retranslateUi(QMainWindow *AppChat)
    {
        AppChat->setWindowTitle(QCoreApplication::translate("AppChat", "AppChat", nullptr));
        label->setText(QCoreApplication::translate("AppChat", "APP CHAT", nullptr));
        label_index_code->setText(QCoreApplication::translate("AppChat", "Code", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("AppChat", "connect", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("AppChat", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppChat: public Ui_AppChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCHAT_H
