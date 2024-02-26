#ifndef PERSONNELLE_H
#define PERSONNELLE_H

#include <QDialog>

namespace Ui {
class personnelle;
}

class personnelle : public QDialog
{
    Q_OBJECT

public:
    explicit personnelle(QWidget *parent = nullptr);
    ~personnelle();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::personnelle *ui;
};

#endif // PERSONNELLE_H
