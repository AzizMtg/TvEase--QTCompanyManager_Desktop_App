#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "gui/qgameboard.h"

#include <QMainWindow>

namespace Ui {
class w;
}

class w : public QMainWindow
{
    Q_OBJECT

public:
    explicit w(QWidget *parent = 0);
    ~w();

private:
//    Ui::MainWindow *ui;
    QGameBoard *gameBoard;

};

#endif // MAINWINDOW_H
