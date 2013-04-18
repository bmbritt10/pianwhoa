#include "ZeldaTutor.h"
#include "ui_ZeldaTutor.h"
#include <QKeyEvent>
#include <QTimer>
#include <iostream>
using namespace std;

//THIS TUTOR PIANO IS FUNDAMENTALLY
//THE SAME AS THE OTHER TUTOR PIANOS
//PLEASE SEE COMMENTS IN "happytutor.cpp"

ZeldaTutor::ZeldaTutor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZeldaTutor)
{
    // set up the GUI
    ui->setupUi(this);

    Song = new QSound("sounds/zelda.wav");

    connect(ui->aButton, SIGNAL(clicked()), this, SLOT(key1()));
    keyA = new QSound("sounds/C.wav");
    connect(ui->wButton, SIGNAL(clicked()), this, SLOT(key2()));
    keyW = new QSound("sounds/C#.wav");
    connect(ui->sButton, SIGNAL(clicked()), this, SLOT(key3()));
    keyS = new QSound("sounds/D.wav");
    connect(ui->eButton, SIGNAL(clicked()), this, SLOT(key4()));
    keyE = new QSound("sounds/D#.wav");
    connect(ui->dButton, SIGNAL(clicked()), this, SLOT(key5()));
    keyD = new QSound("sounds/E.wav");
    connect(ui->fButton, SIGNAL(clicked()), this, SLOT(key6()));
    keyF = new QSound("sounds/F.wav");
    connect(ui->tButton, SIGNAL(clicked()), this, SLOT(key7()));
    keyT = new QSound("sounds/F#.wav");
    connect(ui->gButton, SIGNAL(clicked()), this, SLOT(key8()));
    keyG = new QSound("sounds/G.wav");
    connect(ui->yButton, SIGNAL(clicked()), this, SLOT(key9()));
    keyY = new QSound("sounds/G#.wav");
    connect(ui->hButton, SIGNAL(clicked()), this, SLOT(key10()));
    keyH = new QSound("sounds/A.wav");
    connect(ui->uButton, SIGNAL(clicked()), this, SLOT(key11()));
    keyU = new QSound("sounds/A#.wav");
    connect(ui->jButton, SIGNAL(clicked()), this, SLOT(key12()));
    keyJ = new QSound("sounds/B.wav");
    connect(ui->kButton, SIGNAL(clicked()), this, SLOT(key13()));
    keyK = new QSound("sounds/HighC.wav");
    connect(ui->oButton, SIGNAL(clicked()), this, SLOT(key14()));
    keyO = new QSound("sounds/HiC#.wav");
    connect(ui->lButton, SIGNAL(clicked()), this, SLOT(key15()));
    keyL = new QSound("sounds/HiD.wav");
    connect(ui->pButton, SIGNAL(clicked()), this, SLOT(key16()));
    keyP = new QSound("sounds/HiD#.wav");
    connect(ui->semiButton, SIGNAL(clicked()), this, SLOT(key17()));
    keySemi = new QSound("sounds/HiE.wav");
    connect(ui->apostButton, SIGNAL(clicked()), this, SLOT(key18()));
    keyDot = new QSound("sounds/HiF.wav");

    zelda.append('F');
    zelda.append('A');
    zelda.append('B');
    zelda.append('F');
    zelda.append('A');
    zelda.append('B');
    zelda.append('F');
    zelda.append('A');
    zelda.append('B');
    zelda.append(';');
    zelda.append('d');
    zelda.append('B');
    zelda.append('c');
    zelda.append('B');
    zelda.append('G');
    zelda.append('E');
    zelda.append('D');
    zelda.append('E');
    zelda.append('G');
    zelda.append('E');
    zelda.append('F');
    zelda.append('A');
    zelda.append('B');
    zelda.append('F');
    zelda.append('A');
    zelda.append('B');
    zelda.append('F');
    zelda.append('A');
    zelda.append('B');
    zelda.append(';');
    zelda.append('d');
    zelda.append('A');
    zelda.append('B');
    zelda.append(';');
    zelda.append('B');
    zelda.append('G');
    zelda.append('B');
    zelda.append('G');
    zelda.append('D');
    zelda.append('E');
    zelda.append('D');
    zelda.append('E');
    zelda.append('F');
    zelda.append('G');
    zelda.append('A');
    zelda.append('B');
    zelda.append('c');
    zelda.append('B');
    zelda.append('E');
    zelda.append('D');
    zelda.append('E');
    zelda.append('F');
    zelda.append('G');
    zelda.append('A');
    zelda.append('B');
    zelda.append('c');
    zelda.append('d');
    zelda.append(';');
    zelda.append('D');
    zelda.append('E');
    zelda.append('F');
    zelda.append('G');
    zelda.append('A');
    zelda.append('B');
    zelda.append('c');
    zelda.append('B');
    zelda.append('E');
    zelda.append('E');
    zelda.append('D');
    zelda.append('F');
    zelda.append('E');
    zelda.append('G');
    zelda.append('F');
    zelda.append('A');
    zelda.append('G');
    zelda.append('B');
    zelda.append('A');
    zelda.append('c');
    zelda.append('B');
    zelda.append('d');
    zelda.append('c');
    zelda.append(';');
    zelda.append('f');
    zelda.append('d');
    zelda.append(';');
    arrayCount=0;
    playTutorSong(zelda);

       //enable Event Filters
       installEventFilter(this);
   }

   //destructor
   ZeldaTutor::~ZeldaTutor(){
   }
   void ZeldaTutor::noteADown(){
          ui->hButton->setDown(true);
      }
   void ZeldaTutor::noteBDown(){
       ui->jButton->setDown(true);
   }
   void ZeldaTutor::noteDDown(){
       ui->sButton->setDown(true);
   }
   void ZeldaTutor::noteHiEDown(){
       ui->semiButton->setDown(true);
   }
   void ZeldaTutor::noteFDown(){
       ui->fButton->setDown(true);
   }
   void ZeldaTutor::noteGDown(){
       ui->gButton->setDown(true);
   }
   void ZeldaTutor::noteEDown(){
       ui->dButton->setDown(true);
   }
   void ZeldaTutor::noteHiCDown(){
       ui->kButton->setDown(true);
   }
   void ZeldaTutor::noteHiDDown(){
       ui->lButton->setDown(true);
   }
   void ZeldaTutor::noteHiFDown(){
       ui->apostButton->setDown(true);
   }
   void ZeldaTutor::playSong(){
       if (Song->isFinished()){
           Song->play();
       }
   }
   void ZeldaTutor::stopSong(){
      Song->stop();
   }

//functions to be called so that sounds will play upon mouse click
void ZeldaTutor::key1()
{
    keyA->play();

}

void ZeldaTutor::key2()
{
    keyW->play();
}

void ZeldaTutor::key3()
{
    keyS->play();
}

void ZeldaTutor::key4()
{
    keyE->play();
}

void ZeldaTutor::key5()
{
    keyD->play();
}

void ZeldaTutor::key6()
{
    keyF->play();
}


void ZeldaTutor::key7()
{
    keyT->play();
}

void ZeldaTutor::key8()
{
    keyG->play();
}

void ZeldaTutor::key9()
{
    keyY->play();
}

void ZeldaTutor::key10()
{
    keyH->play();
}

void ZeldaTutor::key11()
{
    keyU->play();
}

void ZeldaTutor::key12()
{
    keyJ->play();
}

void ZeldaTutor::key13()
{
    keyK->play();
}

void ZeldaTutor::key14()
{
    keyO->play();
}
void ZeldaTutor::key15()
{
    keyL->play();
}

void ZeldaTutor::key16()
{
    keyP->play();
}

void ZeldaTutor::key17()
{
    keySemi->play();
}

void ZeldaTutor::key18()
{
    keyDot->play();
}


// Event Filters



bool ZeldaTutor::eventFilter(QObject *obj, QEvent *event)
{

    //if statement to trap for KeyPress event
    if (event->type() == QEvent::KeyPress) {
        // Create key event
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        //Once the key is pressed, it is automatically put in a
        //"pressed" state until it is released.
        switch( keyEvent->key() ){

        case Qt::Key_A: ui->aButton->setDown(true);
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

        case Qt::Key_S: ui->sButton->setDown(true);
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

        case Qt::Key_D: ui->dButton->setDown(true);
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
        case Qt::Key_G: ui->gButton->setDown(true);
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

        case Qt::Key_H: ui->hButton->setDown(true);
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

        case Qt::Key_F: ui->fButton->setDown(true);
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

        case Qt::Key_J: ui->jButton->setDown(true);
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

        case Qt::Key_K: ui->kButton->setDown(true);
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

        case Qt::Key_L: ui->lButton->setDown(true);
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

        case Qt::Key_Semicolon: ui->semiButton->setDown(true);
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

        case Qt::Key_Apostrophe: ui->apostButton->setDown(true);
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

        case Qt::Key_W: ui->wButton->setDown(true);
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

        case Qt::Key_E: ui->eButton->setDown(true);
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

        case Qt::Key_T: ui->tButton->setDown(true);
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

        case Qt::Key_Y: ui->yButton->setDown(true);
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

        case Qt::Key_U: ui->uButton->setDown(true);
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

        case Qt::Key_O: ui->oButton->setDown(true);
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

        case Qt::Key_P: ui->pButton->setDown(true);
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
            case Qt::Key_A: ui->aButton->setDown(false); keyA->stop();
                if (zelda[arrayCount-1]=='C' ){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_S: ui->sButton->setDown(false); keyS->stop();
                if (zelda[arrayCount-1]=='D'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_D: ui->dButton->setDown(false); keyD->stop();
                if(zelda[arrayCount-1]=='E'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_G: ui->gButton->setDown(false); keyG->stop();
                if(zelda[arrayCount-1]=='G'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_H: ui->hButton->setDown(false); keyH->stop();
                if(zelda[arrayCount-1]=='A'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_F: ui->fButton->setDown(false); keyF->stop();
                if(arrayCount==0 || zelda[arrayCount-1]=='F'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_J: ui->jButton->setDown(false); keyJ->stop();
                if(zelda[arrayCount-1]=='B'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_K: ui->kButton->setDown(false); keyK->stop();
                if(zelda[arrayCount-1]=='c'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_L: ui->lButton->setDown(false); keyL->stop();
                if(zelda[arrayCount-1]=='d'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_Semicolon: ui->semiButton->setDown(false); keySemi->stop();
                if(zelda[arrayCount-1]==';'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_Apostrophe: ui->apostButton->setDown(false); keyDot->stop();
                if(zelda[arrayCount-1]=='f'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_W: ui->wButton->setDown(false); keyW->stop();
                if(zelda[arrayCount-1]=='w'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_E: ui->eButton->setDown(false); keyE->stop();
                if(zelda[arrayCount-1]=='e'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_T: ui->tButton->setDown(false); keyT->stop();
                if(zelda[arrayCount-1]=='t'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_Y: ui->yButton->setDown(false); keyY->stop();
                if(zelda[arrayCount-1]=='y'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_U: ui->uButton->setDown(false); keyU->stop();
                if(zelda[arrayCount-1]=='u'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_O: ui->oButton->setDown(false); keyO->stop();
                if(zelda[arrayCount-1]=='o'){
                    playTutorSong(zelda);
                }
                break;
            case Qt::Key_P: ui->pButton->setDown(false); keyP->stop();
                if(zelda[arrayCount-1]=='p'){
                    playTutorSong(zelda);
                }
                break;
            }
        }


    // Pass to Piano
    return QMainWindow::eventFilter(obj, event);
}

void ZeldaTutor::playTutorSong(QList <char> song){
    if (arrayCount<song.size())
    {
        playNoteGUI(song[arrayCount]);
        arrayCount++;
        }

    else
    {
         QTimer::singleShot(1000, this, SLOT(key1()));
         QTimer::singleShot(1100, this, SLOT(key5()));
         QTimer::singleShot(1200, this, SLOT(key8()));
         QTimer::singleShot(1300, this, SLOT(key13()));

     }
}

void ZeldaTutor::playNoteGUI(char note){
        if (note == 'D'){
            QTimer::singleShot(50, this, SLOT(noteDDown()));
        }
        if (note == 'E'){
            QTimer::singleShot(50, this, SLOT(noteEDown()));
        }
        if (note == 'F'){
            QTimer::singleShot(50, this, SLOT(noteFDown()));
        }
        if (note == 'G'){
           QTimer::singleShot(50, this, SLOT(noteGDown()));
        }
        if (note == 'A'){
           QTimer::singleShot(50, this, SLOT(noteADown()));
        }
        if (note == 'B'){
            QTimer::singleShot(50, this, SLOT(noteBDown()));
        }
        if (note == 'c'){
           QTimer::singleShot(50, this, SLOT(noteHiCDown()));
        }
        if (note == 'd'){
            QTimer::singleShot(50, this, SLOT(noteHiDDown()));
        }
        if (note == ';'){
            QTimer::singleShot(50, this, SLOT(noteHiEDown()));
        }
        if (note == 'f'){
            QTimer::singleShot(50, this, SLOT(noteHiFDown()));
            }
    }



