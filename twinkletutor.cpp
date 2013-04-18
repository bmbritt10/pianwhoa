#include "twinkleTutor.h"
#include "ui_twinkleTutor.h"
#include <QKeyEvent>
#include <QTimer>
#include <QSound>


//THIS TUTOR PIANO IS FUNDAMENTALLY
//THE SAME AS THE OTHER TUTOR PIANOS
//PLEASE SEE COMMENTS IN "happytutor.cpp"

twinkleTutor::twinkleTutor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::twinkleTutor)
{
    // set up the GUI
    ui->setupUi(this);
    Song = new QSound("sounds/twinkle.wav");

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

    twinkle.append('C');
    twinkle.append('C');
    twinkle.append('G');
    twinkle.append('G');
    twinkle.append('A');
    twinkle.append('A');
    twinkle.append('G');
    twinkle.append('F');
    twinkle.append('F');
    twinkle.append('E');
    twinkle.append('E');
    twinkle.append('D');
    twinkle.append('D');
    twinkle.append('C');
    twinkle.append('G');
    twinkle.append('G');
    twinkle.append('F');
    twinkle.append('F');
    twinkle.append('E');
    twinkle.append('E');
    twinkle.append('D');
    twinkle.append('G');
    twinkle.append('G');
    twinkle.append('F');
    twinkle.append('F');
    twinkle.append('E');
    twinkle.append('E');
    twinkle.append('D');
    twinkle.append('C');
    twinkle.append('C');
    twinkle.append('G');
    twinkle.append('G');
    twinkle.append('A');
    twinkle.append('A');
    twinkle.append('G');
    twinkle.append('F');
    twinkle.append('F');
    twinkle.append('E');
    twinkle.append('E');
    twinkle.append('D');
    twinkle.append('D');
    twinkle.append('C');
    arrayCount=0;
    playTutorSong(twinkle);

       //enable Event Filters
       installEventFilter(this);
   }

   //destructor
   twinkleTutor::~twinkleTutor(){
   }

void twinkleTutor::noteCDown(){
       ui->aButton->setDown(true);
   }

void twinkleTutor::noteGDown(){
    ui->gButton->setDown(true);
}

void twinkleTutor::noteADown(){
    ui->hButton->setDown(true);
}
void twinkleTutor::noteFDown(){
    ui->fButton->setDown(true);
}

void twinkleTutor::noteEDown(){
    ui->dButton->setDown(true);
}
void twinkleTutor::noteDDown(){
    ui->sButton->setDown(true);
}

void twinkleTutor::songPlay(){
    if (Song->isFinished()){
        Song->play();
    }
}
void twinkleTutor::songStop(){
    Song->stop();
}

//functions to be called so that sounds will play upon mouse click
void twinkleTutor::key1()
{
    keyA->play();
   // notePressed=true;
}

void twinkleTutor::key2()
{
    keyW->play();
}

void twinkleTutor::key3()
{
    keyS->play();
}

void twinkleTutor::key4()
{
    keyE->play();
}

void twinkleTutor::key5()
{
    keyD->play();
}

void twinkleTutor::key6()
{
    keyF->play();
}


void twinkleTutor::key7()
{
    keyT->play();
}

void twinkleTutor::key8()
{
    keyG->play();
}

void twinkleTutor::key9()
{
    keyY->play();
}

void twinkleTutor::key10()
{
    keyH->play();
}

void twinkleTutor::key11()
{
    keyU->play();
}

void twinkleTutor::key12()
{
    keyJ->play();
}

void twinkleTutor::key13()
{
    keyK->play();
}

void twinkleTutor::key14()
{
    keyO->play();
}
void twinkleTutor::key15()
{
    keyL->play();
}

void twinkleTutor::key16()
{
    keyP->play();
}

void twinkleTutor::key17()
{
    keySemi->play();
}

void twinkleTutor::key18()
{
    keyDot->play();
}


// Event Filters



bool twinkleTutor::eventFilter(QObject *obj, QEvent *event)
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
                if (arrayCount==0 || twinkle[arrayCount-1]=='C' ){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_S: ui->sButton->setDown(false); keyS->stop();
                if (twinkle[arrayCount-1]=='D'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_D: ui->dButton->setDown(false); keyD->stop();
                if(twinkle[arrayCount-1]=='E'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_G: ui->gButton->setDown(false); keyG->stop();
                if(twinkle[arrayCount-1]=='G'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_H: ui->hButton->setDown(false); keyH->stop();
                if(twinkle[arrayCount-1]=='A'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_F: ui->fButton->setDown(false); keyF->stop();
                if(twinkle[arrayCount-1]=='F'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_J: ui->jButton->setDown(false); keyJ->stop();
                if(twinkle[arrayCount-1]=='B'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_K: ui->kButton->setDown(false); keyK->stop();
                if(twinkle[arrayCount-1]=='c'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_L: ui->lButton->setDown(false); keyL->stop();
                if(twinkle[arrayCount-1]=='d'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_Semicolon: ui->semiButton->setDown(false); keySemi->stop();
                if(twinkle[arrayCount-1]==';'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_Apostrophe: ui->apostButton->setDown(false); keyDot->stop();
                if(twinkle[arrayCount-1]=='f'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_W: ui->wButton->setDown(false); keyW->stop();
                if(twinkle[arrayCount-1]=='w'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_E: ui->eButton->setDown(false); keyE->stop();
                if(twinkle[arrayCount-1]=='e'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_T: ui->tButton->setDown(false); keyT->stop();
                if(twinkle[arrayCount-1]=='t'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_Y: ui->yButton->setDown(false); keyY->stop();
                if(twinkle[arrayCount-1]=='y'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_U: ui->uButton->setDown(false); keyU->stop();
                if(twinkle[arrayCount-1]=='u'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_O: ui->oButton->setDown(false); keyO->stop();
                if(twinkle[arrayCount-1]=='o'){
                    playTutorSong(twinkle);
                }
                break;
            case Qt::Key_P: ui->pButton->setDown(false); keyP->stop();
                if(twinkle[arrayCount-1]=='p'){
                    playTutorSong(twinkle);
                }
                break;
            }
        }


    // Pass to Piano
    return QMainWindow::eventFilter(obj, event);
}

void twinkleTutor::playTutorSong(QList <char> song){
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

void twinkleTutor::playNoteGUI(char note){
    if (note == 'C'){
        QTimer::singleShot(50, this, SLOT(noteCDown()));
    }
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

}



