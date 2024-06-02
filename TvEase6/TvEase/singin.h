#ifndef SINGIN_H
#define SINGIN_H

#include <QDialog>

#include <QMainWindow>
#include <QApplication>
#include <QMainWindow>
#include <QMediaPlayer>
#include <QVBoxLayout>
namespace Ui {
class SingIn;
}

class SingIn : public QDialog
{
    Q_OBJECT

public:
    explicit SingIn(QWidget *parent = nullptr);
    ~SingIn();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_email_sign_in_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_password_sign_in_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_5_clicked();

private:
    Ui::SingIn *ui;
    QMediaPlayer *mediaPlayer;
};

#endif // SINGIN_H
