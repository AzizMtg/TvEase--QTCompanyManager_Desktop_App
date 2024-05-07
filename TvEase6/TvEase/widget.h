#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QVector>
#include <QTimer>
#include <QKeyEvent>
#include <QTimerEvent>
#include <QMessageBox>

#include "field.h"
#include "snake.h"

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    Widget(QWidget *parent = 0);
    void timerEvent(QTimerEvent *);
    void keyPressEvent(QKeyEvent *);

private:
    bool game_over;

signals:
    void signalMoveSnake();
    void signalChangeDirection(int, int);

public slots:
    void slotGameOver();
};

#endif // WIDGET_H
