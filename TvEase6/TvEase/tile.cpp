#include "tile.h"

#include <QLabel>
#include <QWidget>
#include <QPainter>
#include <QPalette>
#include <QBrush>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QDebug>
/*
Tile::Tile(int row, int col):
    tile_row(row),
    tile_col(col)
{
    QPalette palette;
    palette.setColor(this->backgroundRole(), Qt::black);
    setPalette(palette);
    setAutoFillBackground(true);
}

void Tile::setSnake(bool is_snake)
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

void Tile::setFood(bool is_food)
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

int Tile::getRowPosition()
{
    return tile_row;
}

int Tile::getColPosition()
{
    return tile_col;
}

bool Tile::isSnake()
{
    return snake;
}

bool Tile::isFood()
{
    return food;
}
*/
