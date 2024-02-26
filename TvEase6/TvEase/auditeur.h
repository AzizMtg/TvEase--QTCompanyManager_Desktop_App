#ifndef AUDITEUR_H
#define AUDITEUR_H

#include <QDialog>

namespace Ui {
class auditeur;
}

class auditeur : public QDialog
{
    Q_OBJECT

public:
    explicit auditeur(QWidget *parent = nullptr);
    ~auditeur();

private slots:
    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

private:
    Ui::auditeur *ui;
};

#endif // AUDITEUR_H
