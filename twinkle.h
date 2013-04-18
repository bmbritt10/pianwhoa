#ifndef TWINKLE_H
#define TWINKLE_H

#include <QMainWindow>

namespace Ui {
    class Twinkle;
}

class Twinkle : public QMainWindow
{
    Q_OBJECT

public:
    explicit Twinkle(QWidget *parent = 0);
    ~Twinkle();

private:
    Ui::Twinkle *ui;
};

#endif // TWINKLE_H
