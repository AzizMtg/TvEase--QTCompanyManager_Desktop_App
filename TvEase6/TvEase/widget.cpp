#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent), game_over(false)
{
    Field *field = new Field(this);
    QVBoxLayout *vBoxLayout = new QVBoxLayout;
    vBoxLayout->addWidget(field);
    vBoxLayout->setContentsMargins(0,0,0,0);
    setLayout(vBoxLayout);

    int rows_number = field->getRowsNumber();
    int cols_number = field->getColsNumber();

    Snake *snake = new Snake(rows_number, cols_number, this);
    connect(this,  SIGNAL(signalMoveSnake()),
            snake, SLOT  (slotMoveSnake  ())
            );
    connect(snake, SIGNAL(signalSnakeMoved(QVector<int>, QVector<int>)),
            field, SLOT  (slotSnakeMoved  (QVector<int>, QVector<int>))
            );
    connect(this,  SIGNAL(signalChangeDirection(int, int)),
            snake, SLOT  (slotChangeDirection  (int, int))
            );
    connect(snake, SIGNAL(signalSetFood(int, int)),
            field, SLOT  (slotSetFood  (int, int))
            );
    connect(snake, SIGNAL(signalGotFood()),
            field, SLOT  (slotGotFood())
            );
    connect(snake, SIGNAL(signalGameOver()),
            this,  SLOT  (slotGameOver())
            );

    snake->makeFood();
    startTimer(200);
    resize(200, 200);
}

void Widget::timerEvent(QTimerEvent *)
{
    if (!game_over) {
        emit signalMoveSnake();
    }
}

void Widget::keyPressEvent(QKeyEvent *keyEvent)
{
    if (keyEvent->key() == Qt::Key_Up) {
        qDebug() << "Key Up";
        emit signalChangeDirection(-1, 0);
    }
    else if (keyEvent->key() == Qt::Key_Down) {
        qDebug() << "Key Down";
        emit signalChangeDirection(1, 0);
    }
    else if (keyEvent->key() == Qt::Key_Left) {
        qDebug() << "Key Left";
        emit signalChangeDirection(0, -1);
    }
    else if (keyEvent->key() == Qt::Key_Right) {
        qDebug() << "Key Right";
        emit signalChangeDirection(0, 1);
    }
}

void Widget::slotGameOver()
{
    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setText("Game Over");
    connect(msgBox, SIGNAL(finished(int)),
            this,   SLOT(close()));
    connect(msgBox, SIGNAL(buttonClicked(QAbstractButton*)),
            this,   SLOT(close()));
    msgBox->show();
    game_over = true;
}
