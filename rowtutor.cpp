#include "rowTutor.h"
#include "ui_rowTutor.h"
#include <QKeyEvent>
#include <QTimer>
#include <QSound>

//THIS TUTOR PIANO IS FUNDAMENTALLY
//THE SAME AS THE OTHER TUTOR PIANOS
//PLEASE SEE COMMENTS IN "happytutor.cpp"

rowTutor::rowTutor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rowTutor)
{
    // set up the GUI
    ui->setupUi(this);
    row.append('C');
    row.append('C');
    row.append('C');
    row.append('D');
    row.append('E');
    row.append('E');
    row.append('D');
    row.append('E');
    row.append('F');
    row.append('G');
    row.append('c');
    row.append('c');
    row.append('c');
    row.append('G');
    row.append('G');
    row.append('G');
    row.append('E');
    row.append('E');
    row.append('E');
    row.append('C');
    row.append('C');
    row.append('C');
    row.append('G');
    row.append('F');
    row.append('E');
    row.append('D');
    row.append('C');


    Song = new QSound("row.wav");
    connect(ui->aButton, SIGNAL(clicked()), this, SLOT(key1()));
    keyA = new QSound("C.wav");
    connect(ui->wButton, SIGNAL(clicked()), this, SLOT(key2()));
    keyW = new QSound("C#.wav");
    connect(ui->sButton, SIGNAL(clicked()), this, SLOT(key3()));
    keyS = new QSound("D.wav");
    connect(ui->eButton, SIGNAL(clicked()), this, SLOT(key4()));
    keyE = new QSound("D#.wav");
    connect(ui->dButton, SIGNAL(clicked()), this, SLOT(key5()));
    keyD = new QSound("E.wav");
    connect(ui->fButton, SIGNAL(clicked()), this, SLOT(key6()));
    keyF = new QSound("F.wav");
    connect(ui->tButton, SIGNAL(clicked()), this, SLOT(key7()));
    keyT = new QSound("F#.wav");
    connect(ui->gButton, SIGNAL(clicked()), this, SLOT(key8()));
    keyG = new QSound("G.wav");
    connect(ui->yButton, SIGNAL(clicked()), this, SLOT(key9()));
    keyY = new QSound("G#.wav");
    connect(ui->hButton, SIGNAL(clicked()), this, SLOT(key10()));
    keyH = new QSound("A.wav");
    connect(ui->uButton, SIGNAL(clicked()), this, SLOT(key11()));
    keyU = new QSound("A#.wav");
    connect(ui->jButton, SIGNAL(clicked()), this, SLOT(key12()));
    keyJ = new QSound("B.wav");
    connect(ui->kButton, SIGNAL(clicked()), this, SLOT(key13()));
    keyK = new QSound("HighC.wav");
    connect(ui->oButton, SIGNAL(clicked()), this, SLOT(key14()));
    keyO = new QSound("HiC#.wav");
    connect(ui->lButton, SIGNAL(clicked()), this, SLOT(key15()));
    keyL = new QSound("HiD.wav");
    connect(ui->pButton, SIGNAL(clicked()), this, SLOT(key16()));
    keyP = new QSound("HiD#.wav");
    connect(ui->semiButton, SIGNAL(clicked()), this, SLOT(key17()));
    keySemi = new QSound("HiE.wav");
    connect(ui->apostButton, SIGNAL(clicked()), this, SLOT(key18()));
    keyDot = new QSound("HiF.wav");

    arrayCount=0;
    playTutorSong(row);

       //enable Event Filters
    installEventFilter(this);
}

   //destructor
rowTutor::~rowTutor(){
}

void rowTutor::playSong(){
    if (Song->isFinished()){
        Song->play();
    }
}
void rowTutor::stopSong(){
    Song->stop();
}

//functions to be called so that sounds will play upon mouse click
void rowTutor::key1()
{
    keyA->play();
   // notePressed=true;
}

void rowTutor::key2()
{
    keyW->play();
}

void rowTutor::key3()
{
    keyS->play();
}

void rowTutor::key4()
{
    keyE->play();
}

void rowTutor::key5()
{
    keyD->play();
}

void rowTutor::key6()
{
    keyF->play();
}


void rowTutor::key7()
{
    keyT->play();
}

void rowTutor::key8()
{
    keyG->play();
}

void rowTutor::key9()
{
    keyY->play();
}

void rowTutor::key10()
{
    keyH->play();
}

void rowTutor::key11()
{
    keyU->play();
}

void rowTutor::key12()
{
    keyJ->play();
}

void rowTutor::key13()
{
    keyK->play();
}

void rowTutor::key14()
{
    keyO->play();
}
void rowTutor::key15()
{
    keyL->play();
}

void rowTutor::key16()
{
    keyP->play();
}

void rowTutor::key17()
{
    keySemi->play();
}

void rowTutor::key18()
{
    keyDot->play();
}


// Event Filters



bool rowTutor::eventFilter(QObject *obj, QEvent *event)
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
                    //notePressed=true;
                    //sButton->toggle();
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
                if (arrayCount==0 || row[arrayCount-1]=='C' ){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_S: ui->sButton->setDown(false); keyS->stop();
                if (row[arrayCount-1]=='D'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_D: ui->dButton->setDown(false); keyD->stop();
                if(row[arrayCount-1]=='E'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_G: ui->gButton->setDown(false); keyG->stop();
                if(row[arrayCount-1]=='G'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_H: ui->hButton->setDown(false); keyH->stop();
                if(row[arrayCount-1]=='A'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_F: ui->fButton->setDown(false); keyF->stop();
                if(row[arrayCount-1]=='F'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_J: ui->jButton->setDown(false); keyJ->stop();
                if(row[arrayCount-1]=='B'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_K: ui->kButton->setDown(false); keyK->stop();
                if(row[arrayCount-1]=='c'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_L: ui->lButton->setDown(false); keyL->stop();
                if(row[arrayCount-1]=='d'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_Semicolon: ui->semiButton->setDown(false); keySemi->stop();
                if(row[arrayCount-1]==';'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_Apostrophe: ui->apostButton->setDown(false); keyDot->stop();
                if(row[arrayCount-1]=='f'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_W: ui->wButton->setDown(false); keyW->stop();
                if(row[arrayCount-1]=='w'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_E: ui->eButton->setDown(false); keyE->stop();
                if(row[arrayCount-1]=='e'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_T: ui->tButton->setDown(false); keyT->stop();
                if(row[arrayCount-1]=='t'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_Y: ui->yButton->setDown(false); keyY->stop();
                if(row[arrayCount-1]=='y'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_U: ui->uButton->setDown(false); keyU->stop();
                if(row[arrayCount-1]=='u'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_O: ui->oButton->setDown(false); keyO->stop();
                if(row[arrayCount-1]=='o'){
                    playTutorSong(row);
                }
                break;
            case Qt::Key_P: ui->pButton->setDown(false); keyP->stop();
                if(row[arrayCount-1]=='p'){
                    playTutorSong(row);
                }
                break;
            }
        }


    // Pass to Piano
    return QMainWindow::eventFilter(obj, event);
}

void rowTutor::noteCDown(){
    ui->aButton->setDown(true);
}

void rowTutor::noteDDown(){
    ui->sButton->setDown(true);
}

void rowTutor::noteEDown(){
    ui->dButton->setDown(true);
}

void rowTutor::noteFDown(){
    ui->fButton->setDown(true);
}

void rowTutor::noteGDown(){
    ui->gButton->setDown(true);
}

void rowTutor::noteHiCDown(){
    ui->kButton->setDown(true);
}

void rowTutor::playTutorSong(QList <char> song){
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

void rowTutor::playNoteGUI(char note){
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
    if (note == 'c'){
        QTimer::singleShot(50, this, SLOT(noteHiCDown()));
    }

}



