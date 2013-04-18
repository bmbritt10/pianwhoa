#ifndef BEGIN_H
#define BEGIN_H

#include <QWidget>

namespace Ui {
    class begin;
}

class begin : public QWidget
{
    Q_OBJECT

public:
    explicit begin(QWidget *parent = 0);
    ~begin();

private slots:
    void tutor();
    void link();

private:
    Ui::begin *ui;
};

#endif // BEGIN_H
