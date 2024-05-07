#ifndef TILE_H
#define TILE_H

#include <QLabel>
#include <QWidget>
#include <QPainter>
#include <QPalette>
#include <QBrush>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QDebug>

class Tile : public QLabel
{
public:
    Tile(int row, int col) :
        tile_row(row),
        tile_col(col)
    {
        QPalette palette;
        palette.setColor(this->backgroundRole(), Qt::black);
        setPalette(palette);
        setAutoFillBackground(true);
    }

    void setSnake(bool is_snake)
    {
        snake = is_snake;
        if (snake) {
            QPalette palette;
            palette.setColor(this->backgroundRole(), Qt::red);
            setPalette(palette);
        }
        else {
            QPalette palette;
            palette.setColor(this->backgroundRole(), Qt::black);
            setPalette(palette);
        }
    }

    void setFood(bool is_food)
    {
        food = is_food;
        if (food) {
            QPalette palette;
            palette.setColor(this->backgroundRole(), Qt::green);
            setPalette(palette);
        }
        else {
            QPalette palette;
            palette.setColor(this->backgroundRole(), Qt::green);
            setPalette(palette);
        }
    }

    int getRowPosition()
    {
        return tile_row;
    }

    int getColPosition()
    {
        return tile_col;
    }

    bool isSnake()
    {
        return snake;
    }

    bool isFood()
    {
        return food;
    }

private:
    int tile_row;
    int tile_col;
    bool snake;
    bool food;

signals:
    void signalGotFood();
};

#endif // TILE_H
