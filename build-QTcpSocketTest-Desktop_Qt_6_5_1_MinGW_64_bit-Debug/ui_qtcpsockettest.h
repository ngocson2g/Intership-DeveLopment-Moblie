/********************************************************************************
** Form generated from reading UI file 'qtcpsockettest.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCPSOCKETTEST_H
#define UI_QTCPSOCKETTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTcpSocketTest
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_WriteMsg;
    QPushButton *pushButton_Send;
    QTextEdit *textEdit_recied_from_server;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QTcpSocketTest)
    {
        if (QTcpSocketTest->objectName().isEmpty())
            QTcpSocketTest->setObjectName("QTcpSocketTest");
        QTcpSocketTest->resize(800, 600);
        centralwidget = new QWidget(QTcpSocketTest);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        lineEdit_WriteMsg = new QLineEdit(centralwidget);
        lineEdit_WriteMsg->setObjectName("lineEdit_WriteMsg");

        gridLayout->addWidget(lineEdit_WriteMsg, 0, 0, 1, 1);

        pushButton_Send = new QPushButton(centralwidget);
        pushButton_Send->setObjectName("pushButton_Send");

        gridLayout->addWidget(pushButton_Send, 0, 1, 1, 1);

        textEdit_recied_from_server = new QTextEdit(centralwidget);
        textEdit_recied_from_server->setObjectName("textEdit_recied_from_server");
        textEdit_recied_from_server->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(textEdit_recied_from_server, 1, 0, 1, 2);

        QTcpSocketTest->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QTcpSocketTest);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        QTcpSocketTest->setMenuBar(menubar);
        statusbar = new QStatusBar(QTcpSocketTest);
        statusbar->setObjectName("statusbar");
        QTcpSocketTest->setStatusBar(statusbar);

        retranslateUi(QTcpSocketTest);

        QMetaObject::connectSlotsByName(QTcpSocketTest);
    } // setupUi

    void retranslateUi(QMainWindow *QTcpSocketTest)
    {
        QTcpSocketTest->setWindowTitle(QCoreApplication::translate("QTcpSocketTest", "QTcpSocketTest", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("QTcpSocketTest", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTcpSocketTest: public Ui_QTcpSocketTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCPSOCKETTEST_H
