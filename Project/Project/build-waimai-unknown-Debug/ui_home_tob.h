/********************************************************************************
** Form generated from reading UI file 'home_tob.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_TOB_H
#define UI_HOME_TOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *centralwidget;
    QGraphicsView *photo;
    QPushButton *change;
    QTextEdit *storeaddress;
    QLabel *label;
    QTextEdit *storename;
    QLabel *label_2;
    QTextEdit *storephoto;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuType_in;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QString::fromUtf8("home"));
        home->resize(700, 300);
        home->setMinimumSize(QSize(700, 300));
        home->setMaximumSize(QSize(700, 300));
        centralwidget = new QWidget(home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        photo = new QGraphicsView(centralwidget);
        photo->setObjectName(QString::fromUtf8("photo"));
        photo->setGeometry(QRect(20, 20, 200, 200));
        photo->setMinimumSize(QSize(200, 200));
        photo->setMaximumSize(QSize(200, 200));
        change = new QPushButton(centralwidget);
        change->setObjectName(QString::fromUtf8("change"));
        change->setGeometry(QRect(300, 220, 80, 24));
        storeaddress = new QTextEdit(centralwidget);
        storeaddress->setObjectName(QString::fromUtf8("storeaddress"));
        storeaddress->setGeometry(QRect(355, 95, 271, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(228, 21, 111, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        storename = new QTextEdit(centralwidget);
        storename->setObjectName(QString::fromUtf8("storename"));
        storename->setGeometry(QRect(345, 21, 281, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(228, 95, 121, 41));
        label_2->setFont(font);
        storephoto = new QTextEdit(centralwidget);
        storephoto->setObjectName(QString::fromUtf8("storephoto"));
        storephoto->setGeometry(QRect(325, 168, 301, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(228, 168, 91, 41));
        label_3->setFont(font);
        home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(home);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 26));
        menuType_in = new QMenu(menubar);
        menuType_in->setObjectName(QString::fromUtf8("menuType_in"));
        home->setMenuBar(menubar);
        statusbar = new QStatusBar(home);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        home->setStatusBar(statusbar);

        menubar->addAction(menuType_in->menuAction());

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QMainWindow *home)
    {
        home->setWindowTitle(QApplication::translate("home", "MainWindow", nullptr));
        change->setText(QApplication::translate("home", "Confirm", nullptr));
        label->setText(QApplication::translate("home", "Store name", nullptr));
        label_2->setText(QApplication::translate("home", "Store adress", nullptr));
        label_3->setText(QApplication::translate("home", "Photo", nullptr));
        menuType_in->setTitle(QApplication::translate("home", "Type in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_TOB_H
