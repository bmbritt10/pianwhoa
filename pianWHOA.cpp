#include "pianWHOA.h"
#include "ui_pianWHOA.h"
#include <QKeyEvent>
#include <QEvent>
#include<QSound>
#include <QWSKeyboardHandler>
#include <QTimer>
#include <iostream>
#include <qpushbutton.h>
#include <QPushButton>
#include "tutormenu.h"


using namespace std;

pianWHOA::pianWHOA(QWidget *parent, Qt::WindowFlags f) :
    QMainWindow(parent, f)
{
    // set up the GUI
    setupUi(this);
    connect(aButton, SIGNAL(clicked()), this, SLOT(key1()));
    keyA = new QSound("sounds/C.wav");
    connect(wButton, SIGNAL(clicked()), this, SLOT(key2()));
    keyW = new QSound("sounds/C#.wav");
    connect(sButton, SIGNAL(clicked()), this, SLOT(key3()));
    keyS = new QSound("sounds/D.wav");
    connect(eButton, SIGNAL(clicked()), this, SLOT(key4()));
    keyE = new QSound("sounds/D#.wav");
    connect(dButton, SIGNAL(clicked()), this, SLOT(key5()));
    keyD = new QSound("sounds/E.wav");
    connect(fButton, SIGNAL(clicked()), this, SLOT(key6()));
    keyF = new QSound("sounds/F.wav");
    connect(tButton, SIGNAL(clicked()), this, SLOT(key7()));
    keyT = new QSound("sounds/F#.wav");
    connect(gButton, SIGNAL(clicked()), this, SLOT(key8()));
    keyG = new QSound("sounds/G.wav");
    connect(yButton, SIGNAL(clicked()), this, SLOT(key9()));
    keyY = new QSound("sounds/G#.wav");
    connect(hButton, SIGNAL(clicked()), this, SLOT(key10()));
    keyH = new QSound("sounds/A.wav");
    connect(uButton, SIGNAL(clicked()), this, SLOT(key11()));
    keyU = new QSound("sounds/A#.wav");
    connect(jButton, SIGNAL(clicked()), this, SLOT(key12()));
    keyJ = new QSound("sounds/B.wav");
    connect(kButton, SIGNAL(clicked()), this, SLOT(key13()));
    keyK = new QSound("sounds/HighC.wav");
    connect(oButton, SIGNAL(clicked()), this, SLOT(key14()));
    keyO = new QSound("sounds/HiC#.wav");
    connect(lButton, SIGNAL(clicked()), this, SLOT(key15()));
    keyL = new QSound("sounds/HiD.wav");
    connect(pButton, SIGNAL(clicked()), this, SLOT(key16()));
    keyP = new QSound("sounds/HiD#.wav");
    connect(semiButton, SIGNAL(clicked()), this, SLOT(key17()));
    keySemi = new QSound("sounds/HiE.wav");
    connect(apostButton, SIGNAL(clicked()), this, SLOT(key18()));
    keyDot = new QSound("sounds/HiF.wav");

       //enable Event Filters
       installEventFilter(this);
   }

   //destructor
   pianWHOA::~pianWHOA(){
   }

void pianWHOA::tutor()
{
    tutorMenu *tutormenu = new tutorMenu(this);
    tutormenu->show();




}

//functions to be called so that sounds will play upon mouse click
void pianWHOA::key1()
{
    keyA->play();
}

void pianWHOA::key2()
{
    keyW->play();
}

void pianWHOA::key3()
{
    keyS->play();
}

void pianWHOA::key4()
{
    keyE->play();
}

void pianWHOA::key5()
{
    keyD->play();
}

void pianWHOA::key6()
{
    keyF->play();
}


void pianWHOA::key7()
{
    keyT->play();
}

void pianWHOA::key8()
{
    keyG->play();
}

void pianWHOA::key9()
{
    keyY->play();
}

void pianWHOA::key10()
{
    keyH->play();
}

void pianWHOA::key11()
{
    keyU->play();
}

void pianWHOA::key12()
{
    keyJ->play();
}

void pianWHOA::key13()
{
    keyK->play();
}

void pianWHOA::key14()
{
    keyO->play();
}
void pianWHOA::key15()
{
    keyL->play();
}

void pianWHOA::key16()
{
    keyP->play();
}

void pianWHOA::key17()
{
    keySemi->play();
}

void pianWHOA::key18()
{
    keyDot->play();
}


// Event Filters



bool pianWHOA::eventFilter(QObject *obj, QEvent *event)
{

    //if statement to trap for KeyPress event
    if (event->type() == QEvent::KeyPress) {
        // Create key event
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        //Once the key is pressed, it is automatically put in a
        //"pressed" state until it is released.
        switch( keyEvent->key() ){

        case Qt::Key_A: aButton->setDown(true);
            if (keyEvent->key()== Qt::Key_A)
            {
                //to keep sound from looping repeatedly after key press
                if (keyEvent->isAutoRepeat()==true)
                {
                    keyEvent->ignore();
                }
                //Sound only begins upon first key press
                else
                {
                    keyA->play();


                }
            }
            break;

        case Qt::Key_S: sButton->setDown(true);
            if (keyEvent->key()== Qt::Key_S)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyS->play();

                }
            }
            break;

        case Qt::Key_D: dButton->setDown(true);
            if (keyEvent->key()== Qt::Key_D)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyD->play();
                }
            }
            break;
        case Qt::Key_G: gButton->setDown(true);
            if (keyEvent->key()== Qt::Key_G)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyG->play();
                }
            }
            break;

        case Qt::Key_H: hButton->setDown(true);
            if (keyEvent->key()== Qt::Key_H)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyH->play();
                }
            }
            break;

        case Qt::Key_F: fButton->setDown(true);
            if (keyEvent->key()== Qt::Key_F)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyF->play();
                }
            }
           break;

        case Qt::Key_J: jButton->setDown(true);
            if (keyEvent->key()== Qt::Key_J)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyJ->play();
                }
            }
            break;

        case Qt::Key_K: kButton->setDown(true);
            if (keyEvent->key()== Qt::Key_K)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyK->play();
                }
            }
            break;

        case Qt::Key_L: lButton->setDown(true);
            if (keyEvent->key()== Qt::Key_L)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyL->play();
                }
            }
            break;

        case Qt::Key_Semicolon: semiButton->setDown(true);
            if (keyEvent->key()== Qt::Key_Semicolon)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keySemi->play();
                }
            }
            break;

        case Qt::Key_Apostrophe: apostButton->setDown(true);
            if (keyEvent->key()== Qt::Key_Apostrophe)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyDot->play();
                }
            }
            break;

        case Qt::Key_W: wButton->setDown(true);
            if (keyEvent->key()== Qt::Key_W)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyW->play();

                }
            }
            break;

        case Qt::Key_E: eButton->setDown(true);
            if (keyEvent->key()== Qt::Key_E)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyE->play();
                }
            }
            break;

        case Qt::Key_T: tButton->setDown(true);
            if (keyEvent->key()== Qt::Key_T)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyT->play();
                }
            }
            break;

        case Qt::Key_Y: yButton->setDown(true);
            if (keyEvent->key()== Qt::Key_Y)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyY->play();
                }
            }
            break;

        case Qt::Key_U: uButton->setDown(true);
            if (keyEvent->key()== Qt::Key_U)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyU->play();
                }
            }
            break;

        case Qt::Key_O: oButton->setDown(true);
            if (keyEvent->key()== Qt::Key_O)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {
                    keyO->play();
                }
            }
            break;

        case Qt::Key_P: pButton->setDown(true);
            if (keyEvent->key()== Qt::Key_P)
            {
                if (keyEvent->isAutoRepeat()){

                   keyEvent->ignore();
                }
                else
                {

                    keyP->play();
                }
            }
            break;

        }

    }


    //if statement to trap for Key Release.  Sound is stopped upon key
    //release.
    if (event->type() == QEvent::KeyRelease){
        QKeyEvent *keyEvent2 = static_cast<QKeyEvent *>(event);
        switch( keyEvent2->key() ){
        case Qt::Key_A: aButton->setDown(false); keyA->stop();   break;
        case Qt::Key_S: sButton->setDown(false); keyS->stop();  break;
        case Qt::Key_D: dButton->setDown(false); keyD->stop();  break;
        case Qt::Key_G: gButton->setDown(false); keyG->stop();  break;
        case Qt::Key_H: hButton->setDown(false); keyH->stop();  break;
        case Qt::Key_F: fButton->setDown(false); keyF->stop();  break;
        case Qt::Key_J: jButton->setDown(false); keyJ->stop();  break;
        case Qt::Key_K: kButton->setDown(false); keyK->stop();  break;
        case Qt::Key_L: lButton->setDown(false); keyL->stop();  break;
        case Qt::Key_Semicolon: semiButton->setDown(false); keySemi->stop();  break;
        case Qt::Key_Apostrophe: apostButton->setDown(false); keyDot->stop();  break;
        case Qt::Key_W: wButton->setDown(false); keyW->stop();  break;
        case Qt::Key_E: eButton->setDown(false); keyE->stop();  break;
        case Qt::Key_T: tButton->setDown(false); keyT->stop();  break;
        case Qt::Key_Y: yButton->setDown(false); keyY->stop();  break;
        case Qt::Key_U: uButton->setDown(false); keyU->stop();  break;
        case Qt::Key_O: oButton->setDown(false); keyO->stop();  break;
        case Qt::Key_P: pButton->setDown(false); keyP->stop();  break;
        }


    }
    // Pass to Piano
    return QMainWindow::eventFilter(obj, event);
}


