#ifndef INGAME_H
#define INGAME_H

#include <QWidget>

#include "Timer.h"

namespace Ui {
class inGame;
}

class inGame : public QWidget
{
    Q_OBJECT

public:
    explicit inGame(QWidget *parent = 0);
    ~inGame();


    void Animate();


private:
    Ui::inGame *ui;
};

#endif // INGAME_H
