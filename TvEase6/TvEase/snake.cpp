#include "snake.h"

Snake::Snake(int field_rows, int field_cols, QWidget *parent) :
    QWidget(parent),
    default_snake_length(3),
    max_rows(field_rows),
    max_cols(field_cols),
    rowDirection(1),
    colDirection(0),
    got_food(false)
{
    qsrand(QDateTime::currentDateTime().toTime_t() + int(this));
    for (int i = 0; i < default_snake_length; i++) {
        rowsVector.append(max_rows/2 - i);
        colsVector.append(max_cols/2);
    }     
}

void Snake::makeFood()
{
    bool food_on_snake;
    do {
        food_on_snake = false;
        food_row = qrand() % max_rows;
        food_col = qrand() % max_cols;
        for (int i = 0; i < rowsVector.count(); i++) {
            if (food_col == colsVector.at(i) && food_row == rowsVector.at(i)) {
                food_on_snake = true;
            }
        }
    } while (food_on_snake);

    emit signalSetFood(food_row, food_col);
}

void Snake::isItFood()
{
    if (rowsVector.at(0) == food_row && colsVector.at(0) == food_col) {
        emit signalGotFood();
        makeFood();
        got_food = true;
    }
    if (!got_food) {
        rowsVector.pop_back();
        colsVector.pop_back();
    }
    else {
        got_food = false;
    }
}

void Snake::isGameOver()
{
    for (int i = 1; i < rowsVector.count(); i++) {
        if (rowsVector.at(0) == rowsVector.at(i) && colsVector.at(0) == colsVector.at(i)) {
            emit signalGameOver();
        }
    }
}

void Snake::slotMoveSnake()
{
    int push_row = rowsVector.at(0) + rowDirection;
    if (push_row < 0) {
        push_row = max_rows + push_row;
    }
    else if (push_row >= max_rows) {
        push_row = push_row - max_rows;
    }
    rowsVector.push_front(push_row);

    int push_col = colsVector.at(0) + colDirection;
    if (push_col < 0) {
        push_col = max_cols + push_col;
    }
    else if (push_col >= max_cols) {
        push_col = push_col - max_cols;
    }
    colsVector.push_front(push_col);

    isGameOver();
    isItFood();
    emit signalSnakeMoved(rowsVector, colsVector);
}

void Snake::slotChangeDirection(int row_direction, int col_direction)
{
    if (row_direction != 0) {
        if (rowDirection == 0) {
            rowDirection = row_direction;
            colDirection = 0;
        }
    }
    if (col_direction != 0) {
        if (colDirection == 0) {
            colDirection = col_direction;
            rowDirection = 0;
        }
    }
}

