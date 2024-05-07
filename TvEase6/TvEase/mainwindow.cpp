#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "singin.h"
#include<QMovie>
#include<QThread>
#include <QStandardItemModel>
#include <QSqlField>
#include <QAbstractTableModel>
#include <QTime>
#include <QtGlobal>
#include "QStyledItemDelegate"
#include <QMap>
#include <QTextDocument>
#include <QTextCursor>
#include <QPainter>
#include <QAbstractItemModel>
#include <QModelIndex>
#include <QTableView>
#include <QTextDocument>
#include <QTextCursor>
#include <QTextDocument>
#include <QPdfWriter>
#include <QTextCursor>
#include <QAbstractItemModel>
#include <QModelIndex>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include <QPixmap>
#include <QFile>
#include <QDebug>
#include <QFileInfo>
#include <QBuffer>
#include <QByteArray>
#include <QTableWidgetItem>
#include <QStandardItemModel>
#include <QImage>
#include <QPixmap>
#include<statprog.h>
#include<QMovie>
#include<QThread>
#include <QTableWidgetItem>
#include <QPixmap>
#include <QFile>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    playGifAutomatically();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide() ;
    SingIn sign ;
    sign.setModal(true) ;
    sign.exec() ;
}
void MainWindow::playGifAutomatically() {
    QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString gifPath = desktopPath + "/presentations.gif";

    QMovie *gifAnimation = new QMovie(gifPath);

    // Redimensionner l'image pour correspondre à la taille du lineedit
    QSize newSize = ui->labelgif->size(); // Utilisez la taille du lineedit comme nouvelle taille pour l'animation GIF
    gifAnimation->setScaledSize(newSize);

    ui->labelgif->setMovie(gifAnimation);
    ui->labelgif->setVisible(true);
    ui->labelgif->raise();
    ui->pushButton->raise();
    gifAnimation->start();
}

