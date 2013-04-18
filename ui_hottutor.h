/********************************************************************************
** Form generated from reading UI file 'hottutor.ui'
**
** Created: Thu Apr 18 15:40:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTTUTOR_H
#define UI_HOTTUTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hotTutor
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *yButton;
    QPushButton *aButton;
    QPushButton *eButton;
    QPushButton *hButton;
    QPushButton *apostButton;
    QPushButton *sButton;
    QPushButton *semiButton;
    QLabel *label;
    QPushButton *oButton;
    QPushButton *tButton;
    QPushButton *uButton;
    QPushButton *pButton;
    QPushButton *gButton;
    QPushButton *wButton;
    QPushButton *fButton;
    QPushButton *jButton;
    QPushButton *lButton;
    QPushButton *dButton;
    QPushButton *kButton;
    QPushButton *playSong;
    QPushButton *stopSong;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *hotTutor)
    {
        if (hotTutor->objectName().isEmpty())
            hotTutor->setObjectName(QString::fromUtf8("hotTutor"));
        hotTutor->resize(833, 476);
        hotTutor->setStyleSheet(QString::fromUtf8("background:black;"));
        centralwidget = new QWidget(hotTutor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 40, 131, 21));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:blue;\n"
"border: 1px solid black;\n"
"color:white;\n"
"}\n"
""));
        yButton = new QPushButton(centralwidget);
        yButton->setObjectName(QString::fromUtf8("yButton"));
        yButton->setGeometry(QRect(380, 110, 41, 141));
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
        aButton = new QPushButton(centralwidget);
        aButton->setObjectName(QString::fromUtf8("aButton"));
        aButton->setGeometry(QRect(100, 110, 61, 271));
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
        eButton = new QPushButton(centralwidget);
        eButton->setObjectName(QString::fromUtf8("eButton"));
        eButton->setGeometry(QRect(200, 110, 41, 141));
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
        hButton = new QPushButton(centralwidget);
        hButton->setObjectName(QString::fromUtf8("hButton"));
        hButton->setGeometry(QRect(400, 110, 61, 271));
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
        apostButton = new QPushButton(centralwidget);
        apostButton->setObjectName(QString::fromUtf8("apostButton"));
        apostButton->setGeometry(QRect(700, 110, 61, 271));
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
        sButton = new QPushButton(centralwidget);
        sButton->setObjectName(QString::fromUtf8("sButton"));
        sButton->setGeometry(QRect(160, 110, 61, 271));
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
        semiButton = new QPushButton(centralwidget);
        semiButton->setObjectName(QString::fromUtf8("semiButton"));
        semiButton->setGeometry(QRect(640, 110, 61, 271));
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
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 40, 321, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(36);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:orange;"));
        oButton = new QPushButton(centralwidget);
        oButton->setObjectName(QString::fromUtf8("oButton"));
        oButton->setGeometry(QRect(560, 110, 41, 141));
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
        tButton = new QPushButton(centralwidget);
        tButton->setObjectName(QString::fromUtf8("tButton"));
        tButton->setGeometry(QRect(320, 110, 41, 141));
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
        uButton = new QPushButton(centralwidget);
        uButton->setObjectName(QString::fromUtf8("uButton"));
        uButton->setGeometry(QRect(440, 110, 41, 141));
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
        pButton = new QPushButton(centralwidget);
        pButton->setObjectName(QString::fromUtf8("pButton"));
        pButton->setGeometry(QRect(620, 110, 41, 141));
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
        gButton = new QPushButton(centralwidget);
        gButton->setObjectName(QString::fromUtf8("gButton"));
        gButton->setGeometry(QRect(340, 110, 61, 271));
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
        wButton = new QPushButton(centralwidget);
        wButton->setObjectName(QString::fromUtf8("wButton"));
        wButton->setGeometry(QRect(140, 110, 41, 141));
        QFont font1;
        font1.setPointSize(14);
        wButton->setFont(font1);
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
        fButton = new QPushButton(centralwidget);
        fButton->setObjectName(QString::fromUtf8("fButton"));
        fButton->setGeometry(QRect(280, 110, 61, 271));
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
        jButton = new QPushButton(centralwidget);
        jButton->setObjectName(QString::fromUtf8("jButton"));
        jButton->setGeometry(QRect(460, 110, 61, 271));
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
        lButton = new QPushButton(centralwidget);
        lButton->setObjectName(QString::fromUtf8("lButton"));
        lButton->setGeometry(QRect(580, 110, 61, 271));
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
        dButton = new QPushButton(centralwidget);
        dButton->setObjectName(QString::fromUtf8("dButton"));
        dButton->setGeometry(QRect(220, 110, 61, 271));
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
        kButton = new QPushButton(centralwidget);
        kButton->setObjectName(QString::fromUtf8("kButton"));
        kButton->setGeometry(QRect(520, 110, 61, 271));
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
        playSong = new QPushButton(centralwidget);
        playSong->setObjectName(QString::fromUtf8("playSong"));
        playSong->setGeometry(QRect(180, 400, 151, 21));
        playSong->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:blue;\n"
"border: 1px solid black;\n"
"color:white;\n"
"}"));
        stopSong = new QPushButton(centralwidget);
        stopSong->setObjectName(QString::fromUtf8("stopSong"));
        stopSong->setGeometry(QRect(460, 400, 151, 21));
        stopSong->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:blue;\n"
"border: 1px solid black;\n"
"color:white;\n"
"}"));
        hotTutor->setCentralWidget(centralwidget);
        pushButton->raise();
        aButton->raise();
        hButton->raise();
        apostButton->raise();
        sButton->raise();
        semiButton->raise();
        label->raise();
        gButton->raise();
        fButton->raise();
        jButton->raise();
        lButton->raise();
        dButton->raise();
        kButton->raise();
        playSong->raise();
        stopSong->raise();
        eButton->raise();
        uButton->raise();
        wButton->raise();
        oButton->raise();
        tButton->raise();
        pButton->raise();
        yButton->raise();
        menubar = new QMenuBar(hotTutor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 833, 22));
        hotTutor->setMenuBar(menubar);
        statusbar = new QStatusBar(hotTutor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        hotTutor->setStatusBar(statusbar);

        retranslateUi(hotTutor);
        QObject::connect(pushButton, SIGNAL(clicked()), hotTutor, SLOT(close()));
        QObject::connect(playSong, SIGNAL(clicked()), hotTutor, SLOT(playSong()));
        QObject::connect(stopSong, SIGNAL(clicked()), hotTutor, SLOT(stopSong()));

        QMetaObject::connectSlotsByName(hotTutor);
    } // setupUi

    void retranslateUi(QMainWindow *hotTutor)
    {
        hotTutor->setWindowTitle(QApplication::translate("hotTutor", "TutorMode", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("hotTutor", "back to tutor menu", 0, QApplication::UnicodeUTF8));
        yButton->setText(QApplication::translate("hotTutor", "Y", 0, QApplication::UnicodeUTF8));
        aButton->setText(QApplication::translate("hotTutor", "A", 0, QApplication::UnicodeUTF8));
        eButton->setText(QApplication::translate("hotTutor", "E", 0, QApplication::UnicodeUTF8));
        hButton->setText(QApplication::translate("hotTutor", "H", 0, QApplication::UnicodeUTF8));
        apostButton->setText(QApplication::translate("hotTutor", "'", 0, QApplication::UnicodeUTF8));
        sButton->setText(QApplication::translate("hotTutor", "S", 0, QApplication::UnicodeUTF8));
        semiButton->setText(QApplication::translate("hotTutor", ";", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("hotTutor", "Hot Cross Buns", 0, QApplication::UnicodeUTF8));
        oButton->setText(QApplication::translate("hotTutor", "O", 0, QApplication::UnicodeUTF8));
        tButton->setText(QApplication::translate("hotTutor", "T", 0, QApplication::UnicodeUTF8));
        uButton->setText(QApplication::translate("hotTutor", "U", 0, QApplication::UnicodeUTF8));
        pButton->setText(QApplication::translate("hotTutor", "P", 0, QApplication::UnicodeUTF8));
        gButton->setText(QApplication::translate("hotTutor", "G", 0, QApplication::UnicodeUTF8));
        wButton->setText(QApplication::translate("hotTutor", "W", 0, QApplication::UnicodeUTF8));
        fButton->setText(QApplication::translate("hotTutor", "F", 0, QApplication::UnicodeUTF8));
        jButton->setText(QApplication::translate("hotTutor", "J", 0, QApplication::UnicodeUTF8));
        lButton->setText(QApplication::translate("hotTutor", "L", 0, QApplication::UnicodeUTF8));
        dButton->setText(QApplication::translate("hotTutor", "D", 0, QApplication::UnicodeUTF8));
        kButton->setText(QApplication::translate("hotTutor", "K", 0, QApplication::UnicodeUTF8));
        playSong->setText(QApplication::translate("hotTutor", "Listen to Song", 0, QApplication::UnicodeUTF8));
        stopSong->setText(QApplication::translate("hotTutor", "Stop Song", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class hotTutor: public Ui_hotTutor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTTUTOR_H
