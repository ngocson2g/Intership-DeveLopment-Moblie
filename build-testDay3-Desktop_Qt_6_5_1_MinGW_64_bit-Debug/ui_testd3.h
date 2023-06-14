/********************************************************************************
** Form generated from reading UI file 'testd3.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTD3_H
#define UI_TESTD3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestD3
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit_c1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTextEdit *textEdit_c2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QTextEdit *textEdit_c3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestD3)
    {
        if (TestD3->objectName().isEmpty())
            TestD3->setObjectName("TestD3");
        TestD3->resize(816, 365);
        centralwidget = new QWidget(TestD3);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 70, 790, 242));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        textEdit_c1 = new QTextEdit(widget);
        textEdit_c1->setObjectName("textEdit_c1");

        verticalLayout->addWidget(textEdit_c1);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        textEdit_c2 = new QTextEdit(widget);
        textEdit_c2->setObjectName("textEdit_c2");

        verticalLayout_2->addWidget(textEdit_c2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        textEdit_c3 = new QTextEdit(widget);
        textEdit_c3->setObjectName("textEdit_c3");

        verticalLayout_3->addWidget(textEdit_c3);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        TestD3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestD3);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 816, 21));
        TestD3->setMenuBar(menubar);
        statusbar = new QStatusBar(TestD3);
        statusbar->setObjectName("statusbar");
        TestD3->setStatusBar(statusbar);

        retranslateUi(TestD3);

        QMetaObject::connectSlotsByName(TestD3);
    } // setupUi

    void retranslateUi(QMainWindow *TestD3)
    {
        TestD3->setWindowTitle(QCoreApplication::translate("TestD3", "TestD3", nullptr));
        label->setText(QCoreApplication::translate("TestD3", "C\303\241c c\303\241ch l\341\272\245y IP b\341\272\243n th\303\242n", nullptr));
        label_2->setText(QCoreApplication::translate("TestD3", "c\303\241ch 1", nullptr));
        label_3->setText(QCoreApplication::translate("TestD3", "c\303\241ch 2", nullptr));
        label_4->setText(QCoreApplication::translate("TestD3", "c\303\241ch 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestD3: public Ui_TestD3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTD3_H
