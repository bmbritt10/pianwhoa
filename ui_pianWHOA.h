/********************************************************************************
** Form generated from reading UI file 'pianWHOA.ui'
**
** Created: Thu Apr 18 15:40:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIANWHOA_H
#define UI_PIANWHOA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pianWHOA
{
public:
    QWidget *centralWidget;
    QPushButton *aButton;
    QPushButton *sButton;
    QPushButton *dButton;
    QPushButton *fButton;
    QPushButton *gButton;
    QPushButton *hButton;
    QPushButton *jButton;
    QPushButton *kButton;
    QPushButton *wButton;
    QPushButton *eButton;
    QPushButton *tButton;
    QPushButton *yButton;
    QPushButton *uButton;
    QPushButton *pushButton;
    QPushButton *lButton;
    QPushButton *semiButton;
    QPushButton *apostButton;
    QPushButton *oButton;
    QPushButton *pButton;
    QLabel *label;

    void setupUi(QMainWindow *pianWHOA)
    {
        if (pianWHOA->objectName().isEmpty())
            pianWHOA->setObjectName(QString::fromUtf8("pianWHOA"));
        pianWHOA->resize(875, 506);
        centralWidget = new QWidget(pianWHOA);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color:black;\n"
""));
        aButton = new QPushButton(centralWidget);
        aButton->setObjectName(QString::fromUtf8("aButton"));
        aButton->setGeometry(QRect(110, 110, 61, 271));
        aButton->setAutoFillBackground(false);
        aButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(255,182,193);\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"background: rgb(255,182,193);\n"
"}\n"
"    \n"
"if (aButton->isOn())\n"
"       btnAbort->setPaletteBackgroundColor( QColor(255,182,193) );\n"
"else\n"
"       btnAbort->setPaletteBackgroundColor(\n"
"    this->paletteBackgroundColor() );\n"
""));
        aButton->setCheckable(true);
        aButton->setChecked(false);
        sButton = new QPushButton(centralWidget);
        sButton->setObjectName(QString::fromUtf8("sButton"));
        sButton->setGeometry(QRect(170, 110, 61, 271));
        sButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(205,16,118);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(205,16,118);\n"
"}"));
        sButton->setCheckable(true);
        sButton->setChecked(false);
        dButton = new QPushButton(centralWidget);
        dButton->setObjectName(QString::fromUtf8("dButton"));
        dButton->setGeometry(QRect(230, 110, 61, 271));
        dButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(205,55,0);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(205,55,0);\n"
"}"));
        dButton->setCheckable(true);
        fButton = new QPushButton(centralWidget);
        fButton->setObjectName(QString::fromUtf8("fButton"));
        fButton->setGeometry(QRect(290, 110, 61, 271));
        fButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(255,128,0);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(255,128,0);\n"
"}"));
        fButton->setCheckable(true);
        gButton = new QPushButton(centralWidget);
        gButton->setObjectName(QString::fromUtf8("gButton"));
        gButton->setGeometry(QRect(350, 110, 61, 271));
        gButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(255,255,0);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(255,255,0);\n"
"}"));
        gButton->setCheckable(true);
        hButton = new QPushButton(centralWidget);
        hButton->setObjectName(QString::fromUtf8("hButton"));
        hButton->setGeometry(QRect(410, 110, 61, 271));
        hButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(113,198,113);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(113,198,113);\n"
"}"));
        hButton->setCheckable(true);
        jButton = new QPushButton(centralWidget);
        jButton->setObjectName(QString::fromUtf8("jButton"));
        jButton->setGeometry(QRect(470, 110, 61, 271));
        jButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(0,100,0);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(0,100,0);\n"
"}"));
        jButton->setCheckable(true);
        kButton = new QPushButton(centralWidget);
        kButton->setObjectName(QString::fromUtf8("kButton"));
        kButton->setGeometry(QRect(530, 110, 61, 271));
        kButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(0,255,255);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(0,255,255);\n"
"}"));
        kButton->setCheckable(true);
        wButton = new QPushButton(centralWidget);
        wButton->setObjectName(QString::fromUtf8("wButton"));
        wButton->setGeometry(QRect(150, 110, 41, 141));
        QFont font;
        font.setPointSize(14);
        wButton->setFont(font);
        wButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(255,130,171);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(255,130,171);\n"
"}"));
        wButton->setCheckable(true);
        eButton = new QPushButton(centralWidget);
        eButton->setObjectName(QString::fromUtf8("eButton"));
        eButton->setGeometry(QRect(210, 110, 41, 141));
        eButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(255,0,0);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(255,0,0);\n"
"}"));
        eButton->setCheckable(true);
        tButton = new QPushButton(centralWidget);
        tButton->setObjectName(QString::fromUtf8("tButton"));
        tButton->setGeometry(QRect(330, 110, 41, 141));
        tButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(255,193,37);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(255,193,37);\n"
"}"));
        tButton->setCheckable(true);
        yButton = new QPushButton(centralWidget);
        yButton->setObjectName(QString::fromUtf8("yButton"));
        yButton->setGeometry(QRect(390, 110, 41, 141));
        yButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(255,215,0);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(255,215,0);\n"
"}"));
        yButton->setCheckable(true);
        uButton = new QPushButton(centralWidget);
        uButton->setObjectName(QString::fromUtf8("uButton"));
        uButton->setGeometry(QRect(450, 110, 41, 141));
        uButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(0,139,69);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(0,139,69);\n"
"}"));
        uButton->setCheckable(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"background:red;\n"
"border: 1px solid black;\n"
"color: white;\n"
"}\n"
""));
        lButton = new QPushButton(centralWidget);
        lButton->setObjectName(QString::fromUtf8("lButton"));
        lButton->setGeometry(QRect(590, 110, 61, 271));
        lButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(30,144,255);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(30,144,255);\n"
"}"));
        lButton->setCheckable(true);
        semiButton = new QPushButton(centralWidget);
        semiButton->setObjectName(QString::fromUtf8("semiButton"));
        semiButton->setGeometry(QRect(650, 110, 61, 271));
        semiButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(255,0,255);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(255,0,255);\n"
"}"));
        semiButton->setCheckable(true);
        apostButton = new QPushButton(centralWidget);
        apostButton->setObjectName(QString::fromUtf8("apostButton"));
        apostButton->setGeometry(QRect(710, 110, 61, 271));
        apostButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(75,0,130);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(75,0,130);\n"
"}"));
        apostButton->setCheckable(true);
        oButton = new QPushButton(centralWidget);
        oButton->setObjectName(QString::fromUtf8("oButton"));
        oButton->setGeometry(QRect(570, 110, 41, 141));
        oButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(122,197,205);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(122,197,205);\n"
"}"));
        oButton->setCheckable(true);
        pButton = new QPushButton(centralWidget);
        pButton->setObjectName(QString::fromUtf8("pButton"));
        pButton->setGeometry(QRect(630, 110, 41, 141));
        pButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:black;\n"
"border: 1px solid black;\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{\n"
"background: rgb(16,78,139);\n"
"}\n"
"QPushButton:checked{\n"
"background: rgb(16,78,139);\n"
"}"));
        pButton->setCheckable(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 60, 191, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(36);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:yellow;"));
        pianWHOA->setCentralWidget(centralWidget);

        retranslateUi(pianWHOA);
        QObject::connect(pushButton, SIGNAL(clicked()), pianWHOA, SLOT(tutor()));
        QObject::connect(pushButton, SIGNAL(clicked()), pianWHOA, SLOT(close()));

        QMetaObject::connectSlotsByName(pianWHOA);
    } // setupUi

    void retranslateUi(QMainWindow *pianWHOA)
    {
        pianWHOA->setWindowTitle(QApplication::translate("pianWHOA", "PianWHOA!", 0, QApplication::UnicodeUTF8));
        aButton->setText(QApplication::translate("pianWHOA", "A", 0, QApplication::UnicodeUTF8));
        sButton->setText(QApplication::translate("pianWHOA", "S", 0, QApplication::UnicodeUTF8));
        dButton->setText(QApplication::translate("pianWHOA", "D", 0, QApplication::UnicodeUTF8));
        fButton->setText(QApplication::translate("pianWHOA", "F", 0, QApplication::UnicodeUTF8));
        gButton->setText(QApplication::translate("pianWHOA", "G", 0, QApplication::UnicodeUTF8));
        hButton->setText(QApplication::translate("pianWHOA", "H", 0, QApplication::UnicodeUTF8));
        jButton->setText(QApplication::translate("pianWHOA", "J", 0, QApplication::UnicodeUTF8));
        kButton->setText(QApplication::translate("pianWHOA", "K", 0, QApplication::UnicodeUTF8));
        wButton->setText(QApplication::translate("pianWHOA", "W", 0, QApplication::UnicodeUTF8));
        eButton->setText(QApplication::translate("pianWHOA", "E", 0, QApplication::UnicodeUTF8));
        tButton->setText(QApplication::translate("pianWHOA", "T", 0, QApplication::UnicodeUTF8));
        yButton->setText(QApplication::translate("pianWHOA", "Y", 0, QApplication::UnicodeUTF8));
        uButton->setText(QApplication::translate("pianWHOA", "U", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("pianWHOA", "MAIN MENU", 0, QApplication::UnicodeUTF8));
        lButton->setText(QApplication::translate("pianWHOA", "L", 0, QApplication::UnicodeUTF8));
        semiButton->setText(QApplication::translate("pianWHOA", ";", 0, QApplication::UnicodeUTF8));
        apostButton->setText(QApplication::translate("pianWHOA", "'", 0, QApplication::UnicodeUTF8));
        oButton->setText(QApplication::translate("pianWHOA", "O", 0, QApplication::UnicodeUTF8));
        pButton->setText(QApplication::translate("pianWHOA", "P", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pianWHOA", "PianWHOA!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pianWHOA: public Ui_pianWHOA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIANWHOA_H
