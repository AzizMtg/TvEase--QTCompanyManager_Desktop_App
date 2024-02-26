#ifndef PROGRAMME_H
#define PROGRAMME_H

#include <QDialog>

namespace Ui {
class programme;
}

class programme : public QDialog
{
    Q_OBJECT

public:
    explicit programme(QWidget *parent = nullptr);
    ~programme();

private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

private:
    Ui::programme *ui;
};

#endif // PROGRAMME_H
