/********************************************************************************
** Form generated from reading UI file 'tutormenu.ui'
**
** Created: Thu Apr 18 13:17:36 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORMENU_H
#define UI_TUTORMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tutorMenu
{
public:
    QWidget *widget;
    QPushButton *pushButton_6;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;

    void setupUi(QWidget *tutorMenu)
    {
        if (tutorMenu->objectName().isEmpty())
            tutorMenu->setObjectName(QString::fromUtf8("tutorMenu"));
        tutorMenu->resize(863, 533);
        tutorMenu->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:black;\n"
"}"));
        widget = new QWidget(tutorMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, 0, 1041, 491));
        widget->setStyleSheet(QString::fromUtf8("background:black;"));
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(60, 30, 141, 32));
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"background:red;\n"
"border: 1px solid black;\n"
"color: white;\n"
"}\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 100, 661, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;"));
        label->setTextFormat(Qt::AutoText);
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 260, 261, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(18);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color:orange;\n"
"}\n"
"QPushButton:pressed{\n"
"background: yellow;\n"
"color:purple;\n"
"}\n"
"QPushButton:checked{\n"
"background: yellow;\n"
"color:purple;\n"
"}"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 210, 261, 31));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color:red;\n"
"}\n"
"QPushButton:pressed{\n"
"background: yellow;\n"
"color:purple;\n"
"}\n"
"QPushButton:checked{\n"
"background: yellow;\n"
"color:purple;\n"
"}"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 310, 261, 31));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color: yellow;\n"
"}\n"
"QPushButton:pressed{\n"
"background: yellow;\n"
"color:purple;\n"
"}\n"
"QPushButton:checked{\n"
"background: yellow;\n"
"color:purple;\n"
"}"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 360, 261, 31));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color:limegreen;\n"
"}\n"
"QPushButton:pressed{\n"
"background: yellow;\n"
"color:purple;\n"
"}\n"
"QPushButton:checked{\n"
"background: yellow;\n"
"color:purple;\n"
"}"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(310, 400, 261, 31));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: black;\n"
"border: 1px solid black;\n"
"color:purple;\n"
"}\n"
"QPushButton:pressed{\n"
"background: yellow;\n"
"color:purple;\n"
"}\n"
"QPushButton:checked{\n"
"background: yellow;\n"
"color:purple;\n"
"}"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 40, 361, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(36);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:blue;"));

        retranslateUi(tutorMenu);
        QObject::connect(pushButton_6, SIGNAL(clicked()), tutorMenu, SLOT(hide()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), tutorMenu, SLOT(hot()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), tutorMenu, SLOT(row()));
        QObject::connect(pushButton, SIGNAL(clicked()), tutorMenu, SLOT(happy()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), tutorMenu, SLOT(zelda()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), tutorMenu, SLOT(twinkle()));

        QMetaObject::connectSlotsByName(tutorMenu);
    } // setupUi

    void retranslateUi(QWidget *tutorMenu)
    {
        tutorMenu->setWindowTitle(QApplication::translate("tutorMenu", "TutorMode", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("tutorMenu", " QUIT TUTOR MODE", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tutorMenu", "Welcome to PianWHOA Tutor Mode! To learn how to play a song, click on the desired title below.\n"
"You will be redirected to a new piano where a single key will light up. That is the first note in the\n"
"song! When you press that key, the next key will light up until you have mastered the song!! \n"
"			         Goodluck!", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("tutorMenu", "Hot Cross Buns", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("tutorMenu", "If You're Happy and You Know It ", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("tutorMenu", "Row Your Boat", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("tutorMenu", "Saria's Song (from Zelda)", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("tutorMenu", "Twinkle Twinkle Little Star", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("tutorMenu", "PianWHOA Tutor Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tutorMenu: public Ui_tutorMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORMENU_H
