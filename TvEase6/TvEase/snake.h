#ifndef SNAKE_H
#define SNAKE_H

#include <QWidget>
#include <QVector>
#include <QDebug>
#include <QTime>

class Snake : public QWidget
{
    Q_OBJECT
public:
    Snake(int field_rows, int filed_cols, QWidget *parent = 0);
    void makeFood();

private:
    int default_snake_length;
    int max_rows;
    int max_cols;

    QVector<int> rowsVector;
    QVector<int> colsVector;

    int rowDirection;
    int colDirection;

    int food_row;
    int food_col;

    bool got_food;

    void isItFood();
    void isGameOver();
    
signals:
    void signalSetFood(int, int);
    void signalGotFood();
    void signalGameOver();
    void signalSnakeMoved(QVector<int>, QVector<int>);

public slots:
    void slotMoveSnake();
    void slotChangeDirection(int, int);

};

#endif // SNAKE_H
