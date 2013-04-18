#ifndef TUTORPIANO_H
#define TUTORPIANO_H

#include <QWidget>

namespace Ui {
    class tutorPiano;
}

class tutorPiano : public QWidget
{
    Q_OBJECT

public:
    explicit tutorPiano(QWidget *parent = 0);
    ~tutorPiano();

private:
    Ui::tutorPiano *ui;
};

#endif // TUTORPIANO_H

