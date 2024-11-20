/********************************************************************************
** Form generated from reading UI file 'secondwindow_toc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_TOC_H
#define UI_SECONDWINDOW_TOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow_toc
{
public:
    QAction *action;
    QWidget *centralwidget;
    QScrollArea *m_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLCDNumber *payment;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *secondwindow_toc)
    {
        if (secondwindow_toc->objectName().isEmpty())
            secondwindow_toc->setObjectName(QString::fromUtf8("secondwindow_toc"));
        secondwindow_toc->resize(450, 800);
        secondwindow_toc->setMinimumSize(QSize(450, 800));
        secondwindow_toc->setMaximumSize(QSize(450, 800));
        action = new QAction(secondwindow_toc);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(secondwindow_toc);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        m_scrollArea = new QScrollArea(centralwidget);
        m_scrollArea->setObjectName(QString::fromUtf8("m_scrollArea"));
        m_scrollArea->setGeometry(QRect(0, 0, 450, 700));
        m_scrollArea->setMinimumSize(QSize(450, 700));
        m_scrollArea->setMaximumSize(QSize(450, 700));
        m_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 448, 698));
        m_scrollArea->setWidget(scrollAreaWidgetContents);
        payment = new QLCDNumber(centralwidget);
        payment->setObjectName(QString::fromUtf8("payment"));
        payment->setGeometry(QRect(110, 710, 111, 41));
        QFont font;
        font.setPointSize(9);
        payment->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 700, 91, 61));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 710, 91, 41));
        pushButton->setFont(font1);
        secondwindow_toc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(secondwindow_toc);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        secondwindow_toc->setMenuBar(menubar);
        statusbar = new QStatusBar(secondwindow_toc);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        secondwindow_toc->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(secondwindow_toc);

        QMetaObject::connectSlotsByName(secondwindow_toc);
    } // setupUi

    void retranslateUi(QMainWindow *secondwindow_toc)
    {
        secondwindow_toc->setWindowTitle(QApplication::translate("secondwindow_toc", "MainWindow", nullptr));
        action->setText(QApplication::translate("secondwindow_toc", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label->setText(QApplication::translate("secondwindow_toc", "Total:", nullptr));
        pushButton->setText(QApplication::translate("secondwindow_toc", "Pay", nullptr));
        menu->setTitle(QApplication::translate("secondwindow_toc", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwindow_toc: public Ui_secondwindow_toc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_TOC_H
