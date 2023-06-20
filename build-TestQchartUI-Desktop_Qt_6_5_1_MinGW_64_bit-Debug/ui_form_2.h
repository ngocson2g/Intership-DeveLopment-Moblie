/********************************************************************************
** Form generated from reading UI file 'form_2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_2_H
#define UI_FORM_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_2
{
public:
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *Form_2)
    {
        if (Form_2->objectName().isEmpty())
            Form_2->setObjectName("Form_2");
        Form_2->resize(783, 459);
        pushButton = new QPushButton(Form_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 40, 80, 24));
        horizontalLayoutWidget = new QWidget(Form_2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 80, 641, 331));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Form_2);

        QMetaObject::connectSlotsByName(Form_2);
    } // setupUi

    void retranslateUi(QWidget *Form_2)
    {
        Form_2->setWindowTitle(QCoreApplication::translate("Form_2", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form_2", "form 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_2: public Ui_Form_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_2_H
