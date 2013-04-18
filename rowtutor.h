#ifndef rowTutor_H
#define rowTutor_H
#include "ui_rowTutor.h"
#include<QSound>
#include <QMainWindow>
#include <tutormenu.h>

//FUNDAMENTALLY THE SAME AS OTHER TUTOR PIANOS
//SEE "happytutor.h"

namespace Ui {
    class rowTutor;
}

class rowTutor : public QMainWindow
{
    Q_OBJECT

public:
    explicit rowTutor(QWidget *parent = 0);
    ~rowTutor();
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
    QList <char> row;


private slots:
    void playSong();
    void stopSong();
    void playTutorSong(QList <char> song);
    void playNoteGUI(char note);
    void noteCDown();
    void noteDDown();
    void noteEDown();
    void noteFDown();
    void noteGDown();
    void noteHiCDown();
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
      Ui::rowTutor *ui;

};

#endif // rowTutor_H
