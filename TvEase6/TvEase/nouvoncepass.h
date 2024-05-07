#ifndef NOUVONCEPASS_H
#define NOUVONCEPASS_H

#include <QDialog>

namespace Ui {
class nouvOncePass;
}

class nouvOncePass : public QDialog
{
    Q_OBJECT

public:
    explicit nouvOncePass(QWidget *parent = nullptr);
    ~nouvOncePass();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::nouvOncePass *ui;
};

#endif // NOUVONCEPASS_H
