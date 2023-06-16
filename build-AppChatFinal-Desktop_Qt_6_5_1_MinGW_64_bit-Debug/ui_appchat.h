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

class Ui_Appchat
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget_appChat;
    QWidget *page_1;
    QPushButton *pushButton_start;
    QWidget *page_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_list_connect;
    QPushButton *pushButton_connect;
    QWidget *page;
    QPushButton *pushButton_back;
    QWidget *widget1;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_show_msg;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_send_msg;
    QPushButton *pushButton_send_msg;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Appchat)
    {
        if (Appchat->objectName().isEmpty())
            Appchat->setObjectName("Appchat");
        Appchat->resize(800, 600);
        centralwidget = new QWidget(Appchat);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stackedWidget_appChat = new QStackedWidget(centralwidget);
        stackedWidget_appChat->setObjectName("stackedWidget_appChat");
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        pushButton_start = new QPushButton(page_1);
        pushButton_start->setObjectName("pushButton_start");
        pushButton_start->setGeometry(QRect(260, 140, 81, 71));
        stackedWidget_appChat->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setMaximumSize(QSize(16777215, 539));
        widget = new QWidget(page_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(240, 190, 160, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_list_connect = new QComboBox(widget);
        comboBox_list_connect->setObjectName("comboBox_list_connect");

        horizontalLayout->addWidget(comboBox_list_connect);

        pushButton_connect = new QPushButton(widget);
        pushButton_connect->setObjectName("pushButton_connect");

        horizontalLayout->addWidget(pushButton_connect);

        stackedWidget_appChat->addWidget(page_2);
        page = new QWidget();
        page->setObjectName("page");
        pushButton_back = new QPushButton(page);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(0, 0, 80, 24));
        widget1 = new QWidget(page);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(40, 30, 711, 501));
        gridLayout_3 = new QGridLayout(widget1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        textEdit_show_msg = new QTextEdit(widget1);
        textEdit_show_msg->setObjectName("textEdit_show_msg");

        gridLayout_2->addWidget(textEdit_show_msg, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_send_msg = new QLineEdit(widget1);
        lineEdit_send_msg->setObjectName("lineEdit_send_msg");

        horizontalLayout_2->addWidget(lineEdit_send_msg);

        pushButton_send_msg = new QPushButton(widget1);
        pushButton_send_msg->setObjectName("pushButton_send_msg");

        horizontalLayout_2->addWidget(pushButton_send_msg);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        stackedWidget_appChat->addWidget(page);

        gridLayout->addWidget(stackedWidget_appChat, 0, 0, 1, 1);

        Appchat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Appchat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Appchat->setMenuBar(menubar);
        statusbar = new QStatusBar(Appchat);
        statusbar->setObjectName("statusbar");
        Appchat->setStatusBar(statusbar);

        retranslateUi(Appchat);

        stackedWidget_appChat->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Appchat);
    } // setupUi

    void retranslateUi(QMainWindow *Appchat)
    {
        Appchat->setWindowTitle(QCoreApplication::translate("Appchat", "Appchat", nullptr));
        pushButton_start->setText(QCoreApplication::translate("Appchat", "Appchat", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("Appchat", "Connect", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Appchat", "back", nullptr));
        label->setText(QCoreApplication::translate("Appchat", "Enemy", nullptr));
        pushButton_send_msg->setText(QCoreApplication::translate("Appchat", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Appchat: public Ui_Appchat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCHAT_H
