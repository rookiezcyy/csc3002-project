/********************************************************************************
** Form generated from reading UI file 'store.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE_H
#define UI_STORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_store
{
public:
    QGraphicsView *store_photo;
    QTextBrowser *name;
    QTextBrowser *score;
    QTextBrowser *price;
    QTextBrowser *address;
    QPushButton *select;

    void setupUi(QWidget *store)
    {
        if (store->objectName().isEmpty())
            store->setObjectName(QString::fromUtf8("store"));
        store->setEnabled(true);
        store->resize(400, 150);
        store->setMinimumSize(QSize(400, 150));
        store->setMaximumSize(QSize(400, 150));
        store_photo = new QGraphicsView(store);
        store_photo->setObjectName(QString::fromUtf8("store_photo"));
        store_photo->setGeometry(QRect(10, 20, 110, 110));
        store_photo->setMinimumSize(QSize(110, 110));
        store_photo->setMaximumSize(QSize(110, 110));
        name = new QTextBrowser(store);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(130, 20, 261, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        name->setFont(font);
        score = new QTextBrowser(store);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(130, 60, 111, 31));
        QFont font1;
        font1.setPointSize(10);
        score->setFont(font1);
        price = new QTextBrowser(store);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(270, 60, 121, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setItalic(true);
        price->setFont(font2);
        address = new QTextBrowser(store);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(130, 100, 261, 31));
        QFont font3;
        font3.setPointSize(10);
        font3.setUnderline(true);
        address->setFont(font3);
        address->setOpenExternalLinks(false);
        select = new QPushButton(store);
        select->setObjectName(QString::fromUtf8("select"));
        select->setGeometry(QRect(-10, -11, 421, 171));
        select->raise();
        store_photo->raise();
        name->raise();
        score->raise();
        price->raise();
        address->raise();

        retranslateUi(store);

        QMetaObject::connectSlotsByName(store);
    } // setupUi

    void retranslateUi(QWidget *store)
    {
        store->setWindowTitle(QApplication::translate("store", "Form", nullptr));
        name->setHtml(QApplication::translate("store", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\272\227\351\223\272</p></body></html>", nullptr));
        score->setHtml(QApplication::translate("store", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5\345\210\206/5\345\210\206</p></body></html>", nullptr));
        price->setHtml(QApplication::translate("store", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:10pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\272\272\345\235\20715r</p></body></html>", nullptr));
        address->setHtml(QApplication::translate("store", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:10pt; font-weight:400; font-style:normal; text-decoration: underline;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\344\270\234\345\215\227\345\244\247\345\255\246\344\271\235\351\276\231\346\271\226\346\240\241\345\214\272</span></p></body></html>", nullptr));
        select->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class store: public Ui_store {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE_H
