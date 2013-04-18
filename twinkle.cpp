#include "twinkle.h"
#include "ui_twinkle.h"

Twinkle::Twinkle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Twinkle)
{
    ui->setupUi(this);
}

Twinkle::~Twinkle()
{
    delete ui;
}
