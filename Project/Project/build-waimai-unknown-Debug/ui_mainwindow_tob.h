/********************************************************************************
** Form generated from reading UI file 'mainwindow_tob.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_TOB_H
#define UI_MAINWINDOW_TOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_tob
{
public:
    QAction *action_back;
    QAction *action_3;
    QAction *action_change;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow_tob)
    {
        if (MainWindow_tob->objectName().isEmpty())
            MainWindow_tob->setObjectName(QString::fromUtf8("MainWindow_tob"));
        MainWindow_tob->resize(450, 800);
        MainWindow_tob->setMinimumSize(QSize(450, 800));
        MainWindow_tob->setMaximumSize(QSize(450, 800));
        action_back = new QAction(MainWindow_tob);
        action_back->setObjectName(QString::fromUtf8("action_back"));
        action_3 = new QAction(MainWindow_tob);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_change = new QAction(MainWindow_tob);
        action_change->setObjectName(QString::fromUtf8("action_change"));
        centralwidget = new QWidget(MainWindow_tob);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 401, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 170, 111, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 260, 121, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 350, 111, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(170, 90, 111, 21));
        QFont font1;
        font1.setPointSize(9);
        pushButton_4->setFont(font1);
        MainWindow_tob->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow_tob);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow_tob->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow_tob);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow_tob->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow_tob);

        QMetaObject::connectSlotsByName(MainWindow_tob);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_tob)
    {
        MainWindow_tob->setWindowTitle(QApplication::translate("MainWindow_tob", "MainWindow", nullptr));
        action_back->setText(QApplication::translate("MainWindow_tob", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        action_3->setText(QApplication::translate("MainWindow_tob", "\344\277\256\346\224\271\345\234\260\345\235\200", nullptr));
        action_change->setText(QApplication::translate("MainWindow_tob", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow_tob", "Menu manage", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow_tob", "Orders manage", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow_tob", "Check income", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow_tob", "Personal", nullptr));
        menu->setTitle(QApplication::translate("MainWindow_tob", "logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_tob: public Ui_MainWindow_tob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_TOB_H
