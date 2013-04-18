#ifndef twinkleTutor_H
#define twinkleTutor_H
#include "ui_twinkleTutor.h"
#include<QSound>
#include <QMainWindow>
#include <tutormenu.h>

//FUNDAMENTALLY THE SAME AS OTHER TUTOR PIANOS
//SEE "happytutor.h"

namespace Ui {
    class twinkleTutor;
}

class twinkleTutor : public QMainWindow
{
    Q_OBJECT

public:
    explicit twinkleTutor(QWidget *parent = 0);
    ~twinkleTutor();
    QWidget *child;
    QSound* Song;
    QSound* keyA;
    QSound* keyW;
    QSound* keyS;
    QSound* keyE;
    QSound* keyD;
    QSound* keyF;
    QSound* keyT;
    QSound* keyG;
    QSound* keyY;
    QSound* keyH;
    QSound* keyU;
    QSound* keyJ;
    QSound* keyK;
    QSound* keyO;
    QSound* keyL;
    QSound* keyP;
    QSound* keySemi;
    QSound* keyDot;
    //this will have to be reset after the end of each song
    int arrayCount;
    //initialize each song array in here so all functions can access it
    QList <char> twinkle;


private slots:
    void songPlay();
    void songStop();
    void playTutorSong(QList <char> song);
    void noteCDown();
    void noteGDown();
    void noteADown();
    void noteFDown();
    void noteEDown();
    void noteDDown();
    void playNoteGUI(char note);
    void key1();
    void key2();
    void key3();
    void key4();
    void key5();
    void key6();
    void key7();
    void key8();
    void key9();
    void key10();
    void key11();
    void key12();
    void key13();
    void key14();
    void key15();
    void key16();
    void key17();
    void key18();


protected:
     bool eventFilter(QObject *obj, QEvent *event);
private:
      Ui::twinkleTutor *ui;

};

#endif // twinkleTutor_H
