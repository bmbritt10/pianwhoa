#ifndef HOTTUTOR_H
#define HOTTUTOR_H
#include "ui_hottutor.h"
#include<QSound>
#include <QMainWindow>
#include <tutormenu.h>

//FUNDAMENTALLY THE SAME AS OTHER TUTOR PIANOS
//SEE "happytutor.h"

namespace Ui {
    class hotTutor;
}

class hotTutor : public QMainWindow
{
    Q_OBJECT

public:
    explicit hotTutor(QWidget *parent = 0);
    ~hotTutor();
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
    QList <char> hotCB;


private slots:
    void playSong();
    void stopSong();
    void noteBDown();
    void noteADown();
    void noteGDown();
    void playTutorSong(QList <char> song);
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
      Ui::hotTutor *ui;

};

#endif // HOTTUTOR_H
