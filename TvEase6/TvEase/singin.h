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

private:
    Ui::SingIn *ui;
};

#endif // SINGIN_H
