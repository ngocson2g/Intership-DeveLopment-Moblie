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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Appchat
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_app;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_send;
    QTextEdit *textEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QPushButton *pushButton_connect;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Appchat)
    {
        if (Appchat->objectName().isEmpty())
            Appchat->setObjectName("Appchat");
        Appchat->resize(800, 600);
        centralwidget = new QWidget(Appchat);
        centralwidget->setObjectName("centralwidget");
        pushButton_app = new QPushButton(centralwidget);
        pushButton_app->setObjectName("pushButton_app");
        pushButton_app->setGeometry(QRect(40, 50, 80, 24));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(520, 200, 258, 226));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton_send = new QPushButton(widget);
        pushButton_send->setObjectName("pushButton_send");

        horizontalLayout->addWidget(pushButton_send);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(150, 110, 160, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(widget1);
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);

        pushButton_connect = new QPushButton(widget1);
        pushButton_connect->setObjectName("pushButton_connect");

        horizontalLayout_2->addWidget(pushButton_connect);

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
        pushButton_app->setText(QCoreApplication::translate("Appchat", "app", nullptr));
        pushButton_send->setText(QCoreApplication::translate("Appchat", "send", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("Appchat", "connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Appchat: public Ui_Appchat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCHAT_H
