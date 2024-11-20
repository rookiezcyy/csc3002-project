/********************************************************************************
** Form generated from reading UI file 'thirdwindow_toc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDWINDOW_TOC_H
#define UI_THIRDWINDOW_TOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thirdwindow_toc
{
public:
    QWidget *centralwidget;
    QTableWidget *bill;
    QGraphicsView *QRcode;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *thirdwindow_toc)
    {
        if (thirdwindow_toc->objectName().isEmpty())
            thirdwindow_toc->setObjectName(QString::fromUtf8("thirdwindow_toc"));
        thirdwindow_toc->resize(770, 969);
        centralwidget = new QWidget(thirdwindow_toc);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bill = new QTableWidget(centralwidget);
        if (bill->columnCount() < 4)
            bill->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        bill->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        bill->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        bill->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        bill->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        bill->setObjectName(QString::fromUtf8("bill"));
        bill->setGeometry(QRect(70, 20, 621, 311));
        bill->setRowCount(0);
        bill->setColumnCount(4);
        QRcode = new QGraphicsView(centralwidget);
        QRcode->setObjectName(QString::fromUtf8("QRcode"));
        QRcode->setGeometry(QRect(160, 360, 450, 450));
        QRcode->setMinimumSize(QSize(450, 450));
        QRcode->setMaximumSize(QSize(450, 450));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 840, 80, 24));
        thirdwindow_toc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(thirdwindow_toc);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 770, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        thirdwindow_toc->setMenuBar(menubar);
        statusbar = new QStatusBar(thirdwindow_toc);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        thirdwindow_toc->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(thirdwindow_toc);

        QMetaObject::connectSlotsByName(thirdwindow_toc);
    } // setupUi

    void retranslateUi(QMainWindow *thirdwindow_toc)
    {
        thirdwindow_toc->setWindowTitle(QApplication::translate("thirdwindow_toc", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = bill->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("thirdwindow_toc", "Dish Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = bill->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("thirdwindow_toc", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = bill->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("thirdwindow_toc", "Numbers", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = bill->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("thirdwindow_toc", "Total", nullptr));
        pushButton->setText(QApplication::translate("thirdwindow_toc", "Confirm", nullptr));
        menu->setTitle(QApplication::translate("thirdwindow_toc", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdwindow_toc: public Ui_thirdwindow_toc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDWINDOW_TOC_H
