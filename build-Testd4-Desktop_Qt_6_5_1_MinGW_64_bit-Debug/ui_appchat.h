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
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AppChat
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton_Chat;

    void setupUi(QDialog *AppChat)
    {
        if (AppChat->objectName().isEmpty())
            AppChat->setObjectName("AppChat");
        AppChat->resize(512, 396);
        comboBox = new QComboBox(AppChat);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(110, 180, 72, 24));
        pushButton_Chat = new QPushButton(AppChat);
        pushButton_Chat->setObjectName("pushButton_Chat");
        pushButton_Chat->setGeometry(QRect(220, 180, 80, 24));

        retranslateUi(AppChat);

        QMetaObject::connectSlotsByName(AppChat);
    } // setupUi

    void retranslateUi(QDialog *AppChat)
    {
        AppChat->setWindowTitle(QCoreApplication::translate("AppChat", "Dialog", nullptr));
        pushButton_Chat->setText(QCoreApplication::translate("AppChat", "Chat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppChat: public Ui_AppChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPCHAT_H
