#ifndef pianWHOA_H
#define pianWHOA_H
#include "ui_pianWHOA.h"
#include <QSound>

class pianWHOA : public QMainWindow, private Ui_pianWHOA
{
    Q_OBJECT
    public:
        pianWHOA(QWidget *parent = 0, Qt::WindowFlags f = 0);
        ~pianWHOA();
        QWidget *child;

        //Intiates piano sounds
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

    private slots:
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

        void tutor();

    protected:
         bool eventFilter(QObject *obj, QEvent *event);
};

#endif // pianWHOA_H
