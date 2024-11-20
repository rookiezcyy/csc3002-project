/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_2;
    QPushButton *login;
    QPushButton *signup;
    QCheckBox *password_show;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(455, 300);
        username = new QLineEdit(Login);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(122, 60, 191, 23));
        password = new QLineEdit(Login);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(120, 110, 191, 23));
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 70, 54, 16));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 110, 54, 16));
        login = new QPushButton(Login);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(120, 170, 80, 24));
        signup = new QPushButton(Login);
        signup->setObjectName(QString::fromUtf8("signup"));
        signup->setGeometry(QRect(230, 170, 80, 24));
        password_show = new QCheckBox(Login);
        password_show->setObjectName(QString::fromUtf8("password_show"));
        password_show->setGeometry(QRect(330, 110, 101, 22));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", nullptr));
        label->setText(QApplication::translate("Login", "Account", nullptr));
        label_2->setText(QApplication::translate("Login", "pwd", nullptr));
        login->setText(QApplication::translate("Login", "login", nullptr));
        signup->setText(QApplication::translate("Login", "register", nullptr));
        password_show->setText(QApplication::translate("Login", "show pwd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
