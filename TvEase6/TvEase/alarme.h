#ifndef ALARME_H
#define ALARME_H

#include <QDialog>
#include <QDialog>
#include <QTimer>
#include <QTime>
#include <QMediaPlayer>
namespace Ui {
class alarme;
}

class alarme : public QDialog
{
    Q_OBJECT
private slots:


    void checkAlarm();

    void playAlarmSound();

    void handleError(QMediaPlayer::Error error);

    void on_checkBox_stateChanged(int arg1);

    void updateTime();

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_pushButton_clicked();

public:
    explicit alarme(QWidget *parent = nullptr);
    ~alarme();

private:
    Ui::alarme *ui;
    QTimer *alarmTimer;
    QTime alarmTime;
    QMediaPlayer *mediaPlayer;
};

#endif // ALARME_H
