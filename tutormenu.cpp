#include "tutormenu.h"
#include "ui_tutormenu.h"
#include "zeldatutor.h"
#include "hottutor.h"
#include "twinkletutor.h"
#include "rowtutor.h"
#include "happytutor.h"

//THIS TUTOR PIANO IS FUNDAMENTALLY
//THE SAME AS THE OTHER TUTOR PIANOS
//PLEASE SEE COMMENTS IN "happytutor.cpp"

tutorMenu::tutorMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tutorMenu)
{
    ui->setupUi(this);
}



void tutorMenu::zelda()
{

    ZeldaTutor *form = new ZeldaTutor(this);
    form->show();

}
void tutorMenu::happy()
{

    happyTutor *form = new happyTutor(this);
    form->show();

}
void tutorMenu::row()
{

    rowTutor *form = new rowTutor(this);
    form->show();

}
void tutorMenu::twinkle()
{

    twinkleTutor *form = new twinkleTutor(this);
    form->show();

}

void tutorMenu::hot()
{

    hotTutor *form = new hotTutor(this);
    form->show();

}

tutorMenu::~tutorMenu()
{
    delete ui;
}
