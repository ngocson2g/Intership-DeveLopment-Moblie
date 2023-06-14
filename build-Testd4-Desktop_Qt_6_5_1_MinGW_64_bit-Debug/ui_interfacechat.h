/********************************************************************************
** Form generated from reading UI file 'interfacechat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACECHAT_H
#define UI_INTERFACECHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interfaceChat
{
public:
    QPushButton *pushButton_back;
    QWidget *widget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit_recied_chat;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_send_msg;
    QPushButton *pushButton_send_message;

    void setupUi(QDialog *interfaceChat)
    {
        if (interfaceChat->objectName().isEmpty())
            interfaceChat->setObjectName("interfaceChat");
        interfaceChat->resize(400, 300);
        pushButton_back = new QPushButton(interfaceChat);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(0, 0, 51, 24));
        widget = new QWidget(interfaceChat);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 40, 258, 226));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_recied_chat = new QTextEdit(widget);
        textEdit_recied_chat->setObjectName("textEdit_recied_chat");

        gridLayout->addWidget(textEdit_recied_chat, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_send_msg = new QLineEdit(widget);
        lineEdit_send_msg->setObjectName("lineEdit_send_msg");

        horizontalLayout->addWidget(lineEdit_send_msg);

        pushButton_send_message = new QPushButton(widget);
        pushButton_send_message->setObjectName("pushButton_send_message");

        horizontalLayout->addWidget(pushButton_send_message);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(interfaceChat);

        QMetaObject::connectSlotsByName(interfaceChat);
    } // setupUi

    void retranslateUi(QDialog *interfaceChat)
    {
        interfaceChat->setWindowTitle(QCoreApplication::translate("interfaceChat", "Dialog", nullptr));
        pushButton_back->setText(QCoreApplication::translate("interfaceChat", "back", nullptr));
        pushButton_send_message->setText(QCoreApplication::translate("interfaceChat", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interfaceChat: public Ui_interfaceChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACECHAT_H
