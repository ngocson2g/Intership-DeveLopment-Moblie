/********************************************************************************
** Form generated from reading UI file 'qtcpservertest.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCPSERVERTEST_H
#define UI_QTCPSERVERTEST_H

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

class Ui_qtcpservertest
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit_Client_Message;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_Client_List;
    QComboBox *comboBox_Send_Message_Type;
    QLineEdit *lineEdit_Message_For_Client;
    QPushButton *pushButton_Send;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *qtcpservertest)
    {
        if (qtcpservertest->objectName().isEmpty())
            qtcpservertest->setObjectName("qtcpservertest");
        qtcpservertest->resize(616, 421);
        centralwidget = new QWidget(qtcpservertest);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(9, 9, 581, 361));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_Client_Message = new QTextEdit(widget);
        textEdit_Client_Message->setObjectName("textEdit_Client_Message");

        gridLayout->addWidget(textEdit_Client_Message, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBox_Client_List = new QComboBox(widget);
        comboBox_Client_List->setObjectName("comboBox_Client_List");

        horizontalLayout->addWidget(comboBox_Client_List);

        comboBox_Send_Message_Type = new QComboBox(widget);
        comboBox_Send_Message_Type->addItem(QString());
        comboBox_Send_Message_Type->addItem(QString());
        comboBox_Send_Message_Type->setObjectName("comboBox_Send_Message_Type");
        QFont font;
        font.setBold(true);
        comboBox_Send_Message_Type->setFont(font);

        horizontalLayout->addWidget(comboBox_Send_Message_Type);

        lineEdit_Message_For_Client = new QLineEdit(widget);
        lineEdit_Message_For_Client->setObjectName("lineEdit_Message_For_Client");

        horizontalLayout->addWidget(lineEdit_Message_For_Client);

        pushButton_Send = new QPushButton(widget);
        pushButton_Send->setObjectName("pushButton_Send");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton_Send->setFont(font1);

        horizontalLayout->addWidget(pushButton_Send);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        qtcpservertest->setCentralWidget(centralwidget);
        menubar = new QMenuBar(qtcpservertest);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 616, 21));
        qtcpservertest->setMenuBar(menubar);
        statusbar = new QStatusBar(qtcpservertest);
        statusbar->setObjectName("statusbar");
        qtcpservertest->setStatusBar(statusbar);

        retranslateUi(qtcpservertest);

        QMetaObject::connectSlotsByName(qtcpservertest);
    } // setupUi

    void retranslateUi(QMainWindow *qtcpservertest)
    {
        qtcpservertest->setWindowTitle(QCoreApplication::translate("qtcpservertest", "qtcpservertest", nullptr));
        comboBox_Send_Message_Type->setItemText(0, QCoreApplication::translate("qtcpservertest", "ALL", nullptr));
        comboBox_Send_Message_Type->setItemText(1, QCoreApplication::translate("qtcpservertest", "individual", nullptr));

        pushButton_Send->setText(QCoreApplication::translate("qtcpservertest", "SendMessage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtcpservertest: public Ui_qtcpservertest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCPSERVERTEST_H
