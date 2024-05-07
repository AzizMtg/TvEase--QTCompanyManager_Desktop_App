#include "field.h"

Field::Field(QWidget *parent) :
    QWidget(parent), rows_number(8), cols_number(8)
{
    gLayout = new QGridLayout;
    for (int row = 0; row < rows_number; row++) {
        for (int col = 0; col < cols_number; col++) {
            Tile *tile = new Tile(row, col);
            tilesVector.append(tile);
            gLayout->addWidget(tile, row, col);
        }
    }
    gLayout->setContentsMargins(1,1,1,1);
    gLayout->setSpacing(0);
    setLayout(gLayout);
}

int Field::getColsNumber()
{
    return cols_number;
}

int Field::getRowsNumber()
{
    return rows_number;
}

void Field::slotSnakeMoved(QVector<int> rowsVector, QVector<int> colsVector)
{
    for (int i = 0; i < tilesVector.count(); i++) {
        for (int j = 0; j < rowsVector.count(); j++) {
            int tile_row = tilesVector.at(i)->getRowPosition();
            int tile_col = tilesVector.at(i)->getColPosition();

            if (tile_row == rowsVector.at(j) && tile_col == colsVector.at(j)) {
                tilesVector.at(i)->setSnake(true);
                break;
            }
            else {
                if (!tilesVector.at(i)->isFood()) {
                    tilesVector.at(i)->setSnake(false);
                }
                else {
                    tilesVector.at(i)->setFood(true);
                }
            }
        }
    }
}

void Field::slotSetFood(int food_row, int food_col)
{
    for (int i = 1; i <= rows_number; i++) {
        for (int j = 1; j <= cols_number; j++) {
            if (i - 1 == food_row && j - 1 == food_col) {
                food_index = rows_number*food_row + food_col;
                tilesVector.at(food_index)->setFood(true);
                qDebug() << rows_number*food_row + food_col << food_row << food_col;
            }
        }
    }
}

void Field::slotGotFood()
{
    tilesVector.at(food_index)->setFood(false);
}
