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

class Ui_appchat
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_appchat;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton_connect;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_send;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *appchat)
    {
        if (appchat->objectName().isEmpty())
            appchat->setObjectName("appchat");
        appchat->resize(800, 600);
        centralwidget = new QWidget(appchat);
        centralwidget->setObjectName("centralwidget");
        pushButton_appchat = new QPushButton(centralwidget);
        pushButton_appchat->setObjectName("pushButton_appchat");
        pushButton_appchat->setGeometry(QRect(70, 90, 80, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(190, 150, 160, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        pushButton_connect = new QPushButton(layoutWidget);
        pushButton_connect->setObjectName("pushButton_connect");

        horizontalLayout->addWidget(pushButton_connect);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(400, 190, 258, 226));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_send = new QPushButton(layoutWidget1);
        pushButton_send->setObjectName("pushButton_send");

        horizontalLayout_2->addWidget(pushButton_send);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        textEdit = new QTextEdit(layoutWidget1);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        appchat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(appchat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        appchat->setMenuBar(menubar);
        statusbar = new QStatusBar(appchat);
        statusbar->setObjectName("statusbar");
        appchat->setStatusBar(statusbar);

        retranslateUi(appchat);

        QMetaObject::connectSlotsByName(appchat);
    } // setupUi

    void retranslateUi(QMainWindow *appchat)
    {
        appchat->setWindowTitle(QCoreApplication::translate("appchat", "appchat", nullptr));
        pushButton_appchat->setText(QCoreApplication::translate("appchat", "appchat", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("appchat", "connect", nullptr));
        pushButton_send->setText(QCoreApplication::translate("appchat", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class appchat: public Ui_appchat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCHAT_H
