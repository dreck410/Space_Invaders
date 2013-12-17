#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#include "ingame.h"
#include "Timer.h"
#include "world.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Start();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer* GameTimer;

};

#endif // MAINWINDOW_H
