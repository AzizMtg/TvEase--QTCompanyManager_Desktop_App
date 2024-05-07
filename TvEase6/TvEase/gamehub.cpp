#include "gamehub.h"
#include "ui_gamehub.h"
#include "gui/w.h"
#include <QApplication>

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "core/board.h"
#include "gui/qgameboard.h"
#include "widget.h"

#include "gui/qgameoverwindow.h"
gamehub::gamehub(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamehub)
{
    ui->setupUi(this);
}

gamehub::~gamehub()
{
    delete ui;
}

void gamehub::on_pushButton_clicked()
{
    // Get current date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();

    // Get the current hour
    int currentHour = currentDateTime.time().hour();
//mbadel hne ya 7sin (ena li fl futur ) bech nwari madame kifech ki yabda mouch wa9t ftour chnowa ysir
    if (currentHour >= 12 && currentHour < 24) {
    QGameBoard *lop = new QGameBoard();

        // Show the lopiza window
        lop->show();
        lop->raise();
    } else {
        // Show a message box
        QMessageBox::information(this, "Information", "Ce n'est pas le temps de pause.");
    }

}

void gamehub::on_pushButton_2_clicked()
{
    // Get current date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();

    // Get the current hour
    int currentHour = currentDateTime.time().hour();
//mbadel hne ya 7sin (ena li fl futur ) bech nwari madame kifech ki yabda mouch wa9t ftour chnowa ysir
    if (currentHour >= 13 && currentHour < 24) {
        // Show the widget normally
        Widget *lop = new Widget();
        lop->show();
        lop->raise();
    } else {
        // Show a message box
        QMessageBox::information(this, "Information", "Ce n'est pas le temps de pause.");
    }
}
