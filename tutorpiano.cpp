#include "tutorpiano.h"
#include "ui_tutorpiano.h"

tutorPiano::tutorPiano(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tutorPiano)
{
    ui->setupUi(this);
}

tutorPiano::~tutorPiano()
{
    delete ui;
}
