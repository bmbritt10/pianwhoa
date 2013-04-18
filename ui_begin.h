/********************************************************************************
** Form generated from reading UI file 'begin.ui'
**
** Created: Thu Apr 18 15:40:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEGIN_H
#define UI_BEGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_begin
{
public:
    QPushButton *pushb;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *begin)
    {
        if (begin->objectName().isEmpty())
            begin->setObjectName(QString::fromUtf8("begin"));
        begin->resize(872, 505);
        begin->setStyleSheet(QString::fromUtf8("background:black;"));
        pushb = new QPushButton(begin);
        pushb->setObjectName(QString::fromUtf8("pushb"));
        pushb->setGeometry(QRect(620, 220, 114, 32));
        pushb->setStyleSheet(QString::fromUtf8("background:grey;\n"
"color: white;"));
        pushButton_2 = new QPushButton(begin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 220, 114, 32));
        pushButton_2->setStyleSheet(QString::fromUtf8("background: grey;\n"
"color:white;"));
        label = new QLabel(begin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 210, 191, 51));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:yellow;"));

        retranslateUi(begin);
        QObject::connect(pushb, SIGNAL(clicked()), begin, SLOT(tutor()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), begin, SLOT(link()));

        QMetaObject::connectSlotsByName(begin);
    } // setupUi

    void retranslateUi(QWidget *begin)
    {
        begin->setWindowTitle(QApplication::translate("begin", "Welcome!", 0, QApplication::UnicodeUTF8));
        pushb->setText(QApplication::translate("begin", "Tutor Mode", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("begin", "Freeplay", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("begin", "PianWHOA!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class begin: public Ui_begin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEGIN_H
