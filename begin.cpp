#include "begin.h"
#include "ui_begin.h"
#include "tutormenu.h"
#include "pianWHOA.h"


begin::begin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::begin)
{
    ui->setupUi(this);
}

//Opens tutor piano.
void begin::tutor()
{

    tutorMenu *tutormenu = new tutorMenu(this);
    tutormenu->show();

}

//Opens freeplay piano
void begin::link()
{

    pianWHOA *pw = new pianWHOA(this);
    pw->show();

}

begin::~begin()
{
    delete ui;
}
