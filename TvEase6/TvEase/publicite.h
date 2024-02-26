#ifndef PUBLICITE_H
#define PUBLICITE_H

#include <QDialog>

namespace Ui {
class publicite;
}

class publicite : public QDialog
{
    Q_OBJECT

public:
    explicit publicite(QWidget *parent = nullptr);
    ~publicite();

private slots:
    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

private:
    Ui::publicite *ui;
};

#endif // PUBLICITE_H
