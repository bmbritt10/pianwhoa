#ifndef TUTORMENU_H
#define TUTORMENU_H

#include <QWidget>

namespace Ui {
    class tutorMenu;
}

class tutorMenu : public QWidget
{
    Q_OBJECT

public:
    explicit tutorMenu(QWidget *parent = 0);
    ~tutorMenu();
private slots:

    void zelda();
    void happy();
    void row();
    void hot();
    void twinkle();

private:
    Ui::tutorMenu *ui;
};

#endif // TUTORMENU_H
