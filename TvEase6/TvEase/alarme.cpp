#include "alarme.h"
#include "ui_alarme.h"
#include "auditeur.h"
#include <QTime>
#include <QDebug>
#include <QMessageBox>


alarme::alarme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alarme)
{
    ui->setupUi(this);
    alarmTimer = new QTimer(this);
    connect(alarmTimer, &QTimer::timeout, this, &alarme::checkAlarm);

    mediaPlayer = new QMediaPlayer(this);
    ///////////////time/////////////////////////
    // Create a QTimer to update the time every second
       QTimer *timer = new QTimer(this);
       connect(timer, &QTimer::timeout, this, &alarme::updateTime);
       timer->start(1000); // 1000 milliseconds = 1 second
}

alarme::~alarme()
{
    delete ui;
}




void alarme::updateTime()
{
    // Get the current time
    QTime currentTime = QTime::currentTime();
    // Convert the time to string in the format "hh:mm:ss"
    QString timeText = currentTime.toString("hh:mm:ss");
    // Update the QLabel text with the current time
    ui->timeLabel->setText(timeText);
}

void alarme::checkAlarm()
{
    QTime currentTime = QTime::currentTime();

    if (currentTime >= alarmTime) {
        qDebug() << "Alarm triggered!";
        qDebug() << "Widget text:" << ui->dd->text(); // Debugging statement
        QMessageBox::information(nullptr, "Alarm Triggered", QString(" %1.\nClick Cancel to exit.").arg(ui->dd->text()), QMessageBox::Cancel);

        // You can also add more actions here like showing a message box
        playAlarmSound();
        alarmTimer->stop();
    }
}
void alarme::playAlarmSound()
{
    mediaPlayer->setMedia(QUrl::fromLocalFile("Downloads/sound.WAV"));
    mediaPlayer->setVolume(50); // Setting a valid volume level
    connect(mediaPlayer, QOverload<QMediaPlayer::Error>::of(&QMediaPlayer::error),
            this, &alarme::handleError);
    mediaPlayer->play();
}

void alarme::handleError(QMediaPlayer::Error error)
{
    qDebug() << "Error occurred: " << mediaPlayer->errorString();
}

void alarme::on_checkBox_stateChanged(int arg1)
{
    // Get the alarm time from the QTimerEdit widget
    QTime alarmTime = ui->alarmTime->time();

    // Calculate the difference in minutes between the current time and the alarm time
    int minutesUntilAlarm = QTime::currentTime().msecsTo(alarmTime) / (1000 * 60);

    // Output the set alarm time for debugging
    qDebug() << "Alarm set for:" << alarmTime.toString();

    // Store the alarm time for later use
    this->alarmTime = alarmTime;

    // Start the alarm timer to check the alarm
    alarmTimer->start(minutesUntilAlarm * 60 * 1000); // Check every minute



}

void alarme::on_checkBox_2_stateChanged(int arg1)
{
    // Get the alarm time from the QTimerEdit widget
    QTime alarmTime = ui->alarmTime_2->time();

    // Calculate the difference in minutes between the current time and the alarm time
    int minutesUntilAlarm = QTime::currentTime().msecsTo(alarmTime) / (1000 * 60);

    // Output the set alarm time for debugging
    qDebug() << "Alarm set for:" << alarmTime.toString();

    // Store the alarm time for later use
    this->alarmTime = alarmTime;

    // Start the alarm timer to check the alarm
    alarmTimer->start(minutesUntilAlarm * 60 * 1000); // Check every minute
}

void alarme::on_checkBox_3_stateChanged(int arg1)
{
    // Get the alarm time from the QTimerEdit widget
    QTime alarmTime = ui->alarmTime_3->time();

    // Calculate the difference in minutes between the current time and the alarm time
    int minutesUntilAlarm = QTime::currentTime().msecsTo(alarmTime) / (1000 * 60);

    // Output the set alarm time for debugging
    qDebug() << "Alarm set for:" << alarmTime.toString();

    // Store the alarm time for later use
    this->alarmTime = alarmTime;

    // Start the alarm timer to check the alarm
    alarmTimer->start(minutesUntilAlarm * 60 * 1000); // Check every minute
}

void alarme::on_checkBox_4_stateChanged(int arg1)
{
    // Get the alarm time from the QTimerEdit widget
    QTime alarmTime = ui->alarmTime_4->time();

    // Calculate the difference in minutes between the current time and the alarm time
    int minutesUntilAlarm = QTime::currentTime().msecsTo(alarmTime) / (1000 * 60);

    // Output the set alarm time for debugging
    qDebug() << "Alarm set for:" << alarmTime.toString();

    // Store the alarm time for later use
    this->alarmTime = alarmTime;

    // Start the alarm timer to check the alarm
    alarmTimer->start(minutesUntilAlarm * 60 * 1000); // Check every minute
}

void alarme::on_checkBox_5_stateChanged(int arg1)
{
    // Get the alarm time from the QTimerEdit widget
    QTime alarmTime = ui->alarmTime_5->time();

    // Calculate the difference in minutes between the current time and the alarm time
    int minutesUntilAlarm = QTime::currentTime().msecsTo(alarmTime) / (1000 * 60);

    // Output the set alarm time for debugging
    qDebug() << "Alarm set for:" << alarmTime.toString();

    // Store the alarm time for later use
    this->alarmTime = alarmTime;

    // Start the alarm timer to check the alarm
    alarmTimer->start(minutesUntilAlarm * 60 * 1000); // Check every minute
}

void alarme::on_checkBox_6_stateChanged(int arg1)
{
    // Get the alarm time from the QTimerEdit widget
    QTime alarmTime = ui->alarmTime_6->time();

    // Calculate the difference in minutes between the current time and the alarm time
    int minutesUntilAlarm = QTime::currentTime().msecsTo(alarmTime) / (1000 * 60);

    // Output the set alarm time for debugging
    qDebug() << "Alarm set for:" << alarmTime.toString();

    // Store the alarm time for later use
    this->alarmTime = alarmTime;

    // Start the alarm timer to check the alarm
    alarmTimer->start(minutesUntilAlarm * 60 * 1000); // Check every minute
}

void alarme::on_checkBox_7_stateChanged(int arg1)
{
    // Get the alarm time from the QTimerEdit widget
    QTime alarmTime = ui->alarmTime_7->time();

    // Calculate the difference in minutes between the current time and the alarm time
    int minutesUntilAlarm = QTime::currentTime().msecsTo(alarmTime) / (1000 * 60);

    // Output the set alarm time for debugging
    qDebug() << "Alarm set for:" << alarmTime.toString();

    // Store the alarm time for later use
    this->alarmTime = alarmTime;

    // Start the alarm timer to check the alarm
    alarmTimer->start(minutesUntilAlarm * 60 * 1000); // Check every minute
}

void alarme::on_checkBox_8_stateChanged(int arg1)
{
    // Get the alarm time from the QTimerEdit widget
    QTime alarmTime = ui->alarmTime_8->time();

    // Calculate the difference in minutes between the current time and the alarm time
    int minutesUntilAlarm = QTime::currentTime().msecsTo(alarmTime) / (1000 * 60);

    // Output the set alarm time for debugging
    qDebug() << "Alarm set for:" << alarmTime.toString();

    // Store the alarm time for later use
    this->alarmTime = alarmTime;

    // Start the alarm timer to check the alarm
    alarmTimer->start(minutesUntilAlarm * 60 * 1000); // Check every minute
}

void alarme::on_checkBox_9_stateChanged(int arg1)
{
    // Get the alarm time from the QTimerEdit widget
    QTime alarmTime = ui->alarmTime_9->time();

    // Calculate the difference in minutes between the current time and the alarm time
    int minutesUntilAlarm = QTime::currentTime().msecsTo(alarmTime) / (1000 * 60);

    // Output the set alarm time for debugging
    qDebug() << "Alarm set for:" << alarmTime.toString();

    // Store the alarm time for later use
    this->alarmTime = alarmTime;

    // Start the alarm timer to check the alarm
    alarmTimer->start(minutesUntilAlarm * 60 * 1000); // Check every minute
}


void alarme::on_pushButton_clicked()
{
    //auditeurs
    hide() ;
    auditeur auditeur ;
    auditeur.setModal(true) ;
    auditeur.exec() ;
}
