/********************************************************************************
** Form generated from reading UI file 'mainwindow_toc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_TOC_H
#define UI_MAINWINDOW_TOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_toc
{
public:
    QAction *action;
    QWidget *centralwidget;
    QLabel *label;
    QScrollArea *m_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow_toc)
    {
        if (MainWindow_toc->objectName().isEmpty())
            MainWindow_toc->setObjectName(QString::fromUtf8("MainWindow_toc"));
        MainWindow_toc->resize(450, 800);
        MainWindow_toc->setMinimumSize(QSize(450, 800));
        MainWindow_toc->setMaximumSize(QSize(450, 843));
        action = new QAction(MainWindow_toc);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow_toc);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(450, 800));
        centralwidget->setMaximumSize(QSize(450, 800));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 0, 101, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        m_scrollArea = new QScrollArea(centralwidget);
        m_scrollArea->setObjectName(QString::fromUtf8("m_scrollArea"));
        m_scrollArea->setGeometry(QRect(-10, 50, 450, 720));
        m_scrollArea->setMinimumSize(QSize(450, 720));
        m_scrollArea->setMaximumSize(QSize(450, 720));
        m_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 448, 718));
        m_scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow_toc->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow_toc);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow_toc->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow_toc);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow_toc->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow_toc);
        QObject::connect(action, SIGNAL(triggered()), MainWindow_toc, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow_toc);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_toc)
    {
        MainWindow_toc->setWindowTitle(QApplication::translate("MainWindow_toc", "MainWindow", nullptr));
        action->setText(QApplication::translate("MainWindow_toc", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label->setText(QApplication::translate("MainWindow_toc", "Order", nullptr));
        menu->setTitle(QApplication::translate("MainWindow_toc", "personal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_toc: public Ui_MainWindow_toc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_TOC_H
