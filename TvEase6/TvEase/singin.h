#ifndef SINGIN_H
#define SINGIN_H

#include <QDialog>

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

private:
    Ui::SingIn *ui;
};

#endif // SINGIN_H
