#ifndef FIELD_H
#define FIELD_H

#include <QWidget>
#include <QGridLayout>
#include <QVector>
#include <QPalette>
#include <QDebug>
#include <QList>
#include <QString>

#include "tile.h"

class Field : public QWidget
{
    Q_OBJECT
public:
    explicit Field(QWidget *parent = 0);
    int getColsNumber();
    int getRowsNumber();
    
private:
    QVector<Tile*> tilesVector;
    QGridLayout *gLayout;
    int rows_number;
    int cols_number;
    int food_index;

public slots:
    void slotSnakeMoved(QVector<int>, QVector<int>);
    void slotSetFood(int, int);
    void slotGotFood();

};

#endif // FIELD_H
