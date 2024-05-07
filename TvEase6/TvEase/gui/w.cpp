#include "gui/w.h"
//#include "ui_mainwindow.h"

w::w(QWidget *parent) :
    QMainWindow(parent) /*,
    ui(new Ui::MainWindow)*/
{
 //   ui->setupUi(this);
    gameBoard = new QGameBoard(this);
    setCentralWidget(gameBoard);
}

w::~w()
{
  //  delete ui;
}
