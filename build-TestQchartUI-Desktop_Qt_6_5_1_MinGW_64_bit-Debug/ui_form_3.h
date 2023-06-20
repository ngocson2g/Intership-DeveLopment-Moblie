/********************************************************************************
** Form generated from reading UI file 'form_3.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_3_H
#define UI_FORM_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_3
{
public:
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *Form_3)
    {
        if (Form_3->objectName().isEmpty())
            Form_3->setObjectName("Form_3");
        Form_3->resize(745, 577);
        pushButton = new QPushButton(Form_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 30, 80, 24));
        horizontalLayoutWidget = new QWidget(Form_3);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 70, 721, 471));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Form_3);

        QMetaObject::connectSlotsByName(Form_3);
    } // setupUi

    void retranslateUi(QWidget *Form_3)
    {
        Form_3->setWindowTitle(QCoreApplication::translate("Form_3", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form_3", "Form 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_3: public Ui_Form_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_3_H
