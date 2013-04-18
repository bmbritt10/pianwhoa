#ifndef happyTutor_H
#define happyTutor_H
#include "ui_happyTutor.h"
#include<QSound>
#include <QMainWindow>
#include <tutormenu.h>

namespace Ui {
    class happyTutor;
}

class happyTutor : public QMainWindow
{
    Q_OBJECT

public:
    explicit happyTutor(QWidget *parent = 0);
    ~happyTutor();
    QWidget *child;
    //Initiates sounds for piano
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
    //number to traverse through the list
    int arrayCount;
    //initialize each song array in here so all functions can access it
    QList <char> happy;


private slots:
    void playSong();
    void stopSong();
    void playTutorSong(QList <char> song);
    void playNoteGUI(char note);
    void noteCDown();
    void noteFDown();
    void noteGDown();
    void noteEDown();
    void noteADown();
    void noteuDown();
    void noteDDown();
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
      Ui::happyTutor *ui;

};

#endif // happyTutor_H
