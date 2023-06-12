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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppChat
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit_recied;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_Message_Send;
    QPushButton *pushButton_Send;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AppChat)
    {
        if (AppChat->objectName().isEmpty())
            AppChat->setObjectName("AppChat");
        AppChat->resize(424, 385);
        centralwidget = new QWidget(AppChat);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 40, 260, 250));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        textEdit_recied = new QTextEdit(widget);
        textEdit_recied->setObjectName("textEdit_recied");

        verticalLayout->addWidget(textEdit_recied);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_Message_Send = new QLineEdit(widget);
        lineEdit_Message_Send->setObjectName("lineEdit_Message_Send");

        horizontalLayout->addWidget(lineEdit_Message_Send);

        pushButton_Send = new QPushButton(widget);
        pushButton_Send->setObjectName("pushButton_Send");

        horizontalLayout->addWidget(pushButton_Send);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        AppChat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AppChat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 424, 21));
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
        label->setText(QCoreApplication::translate("AppChat", "MsgName", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("AppChat", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppChat: public Ui_AppChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCHAT_H
