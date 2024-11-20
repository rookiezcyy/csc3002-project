/********************************************************************************
** Form generated from reading UI file 'dishes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISHES_H
#define UI_DISHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dishes
{
public:
    QGraphicsView *dishes_photo;
    QTextBrowser *name;
    QTextBrowser *price;
    QTextBrowser *introduction;
    QSpinBox *quantity;

    void setupUi(QWidget *dishes)
    {
        if (dishes->objectName().isEmpty())
            dishes->setObjectName(QString::fromUtf8("dishes"));
        dishes->resize(400, 150);
        dishes->setMinimumSize(QSize(400, 150));
        dishes->setMaximumSize(QSize(400, 150));
        dishes_photo = new QGraphicsView(dishes);
        dishes_photo->setObjectName(QString::fromUtf8("dishes_photo"));
        dishes_photo->setGeometry(QRect(10, 10, 130, 130));
        dishes_photo->setMinimumSize(QSize(130, 130));
        dishes_photo->setMaximumSize(QSize(130, 130));
        name = new QTextBrowser(dishes);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(150, 10, 241, 31));
        QFont font;
        font.setPointSize(12);
        name->setFont(font);
        price = new QTextBrowser(dishes);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(150, 50, 121, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(true);
        price->setFont(font1);
        introduction = new QTextBrowser(dishes);
        introduction->setObjectName(QString::fromUtf8("introduction"));
        introduction->setGeometry(QRect(150, 90, 241, 51));
        QFont font2;
        font2.setPointSize(8);
        introduction->setFont(font2);
        quantity = new QSpinBox(dishes);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setGeometry(QRect(290, 50, 101, 31));

        retranslateUi(dishes);

        QMetaObject::connectSlotsByName(dishes);
    } // setupUi

    void retranslateUi(QWidget *dishes)
    {
        dishes->setWindowTitle(QApplication::translate("dishes", "Form", nullptr));
        introduction->setHtml(QApplication::translate("dishes", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dishes: public Ui_dishes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISHES_H
