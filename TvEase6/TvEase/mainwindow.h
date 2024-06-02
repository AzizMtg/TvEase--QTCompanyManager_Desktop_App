#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QMainWindow>
#include <QMediaPlayer>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
void  playGifAutomatically() ;
private:
    Ui::MainWindow *ui;
    QMediaPlayer *mediaPlayer;
};
#endif // MAINWINDOW_H
