/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *ensure_password;
    QPushButton *signup;
    QPushButton *back;
    QCheckBox *password_show;
    QCheckBox *ensure_password_show;
    QCheckBox *checktype;
    QLabel *label_4;
    QLineEdit *storename;

    void setupUi(QWidget *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName(QString::fromUtf8("Signup"));
        Signup->resize(481, 308);
        label = new QLabel(Signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 80, 54, 16));
        label_2 = new QLabel(Signup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 120, 54, 16));
        label_3 = new QLabel(Signup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 160, 111, 20));
        username = new QLineEdit(Signup);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(140, 80, 191, 23));
        password = new QLineEdit(Signup);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(140, 120, 191, 23));
        password->setEchoMode(QLineEdit::Password);
        ensure_password = new QLineEdit(Signup);
        ensure_password->setObjectName(QString::fromUtf8("ensure_password"));
        ensure_password->setGeometry(QRect(140, 160, 191, 23));
        ensure_password->setEchoMode(QLineEdit::Password);
        signup = new QPushButton(Signup);
        signup->setObjectName(QString::fromUtf8("signup"));
        signup->setGeometry(QRect(70, 210, 80, 24));
        back = new QPushButton(Signup);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(180, 210, 80, 24));
        password_show = new QCheckBox(Signup);
        password_show->setObjectName(QString::fromUtf8("password_show"));
        password_show->setGeometry(QRect(350, 120, 91, 22));
        ensure_password_show = new QCheckBox(Signup);
        ensure_password_show->setObjectName(QString::fromUtf8("ensure_password_show"));
        ensure_password_show->setGeometry(QRect(350, 160, 91, 22));
        checktype = new QCheckBox(Signup);
        checktype->setObjectName(QString::fromUtf8("checktype"));
        checktype->setGeometry(QRect(290, 210, 101, 22));
        label_4 = new QLabel(Signup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 250, 81, 41));
        storename = new QLineEdit(Signup);
        storename->setObjectName(QString::fromUtf8("storename"));
        storename->setGeometry(QRect(140, 260, 281, 23));
        checktype->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        username->raise();
        password->raise();
        ensure_password->raise();
        signup->raise();
        back->raise();
        password_show->raise();
        ensure_password_show->raise();
        label_4->raise();
        storename->raise();

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QWidget *Signup)
    {
        Signup->setWindowTitle(QApplication::translate("Signup", "Form", nullptr));
        label->setText(QApplication::translate("Signup", "Account", nullptr));
        label_2->setText(QApplication::translate("Signup", "pwd", nullptr));
        label_3->setText(QApplication::translate("Signup", "confirm pwd", nullptr));
        signup->setText(QApplication::translate("Signup", "confirm", nullptr));
        back->setText(QApplication::translate("Signup", "back", nullptr));
        password_show->setText(QApplication::translate("Signup", "show", nullptr));
        ensure_password_show->setText(QApplication::translate("Signup", "show", nullptr));
        checktype->setText(QApplication::translate("Signup", "Bussiness", nullptr));
        label_4->setText(QApplication::translate("Signup", "Store name", nullptr));
        storename->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
