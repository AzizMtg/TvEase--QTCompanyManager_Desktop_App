#ifndef ABONNEMENT_H
#define ABONNEMENT_H

#include <QDialog>

namespace Ui {
class abonnement;
}

class abonnement : public QDialog
{
    Q_OBJECT

public:
    explicit abonnement(QWidget *parent = nullptr);
    ~abonnement();

private slots:
    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_35_clicked();

private:
    Ui::abonnement *ui;
};

#endif // ABONNEMENT_H
