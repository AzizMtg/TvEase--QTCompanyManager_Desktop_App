#ifndef STUDIO_H
#define STUDIO_H

#include <QDialog>

namespace Ui {
class studio;
}

class studio : public QDialog
{
    Q_OBJECT

public:
    explicit studio(QWidget *parent = nullptr);
    ~studio();

private slots:
    void on_pushButton_37_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_41_clicked();

private:
    Ui::studio *ui;
};

#endif // STUDIO_H
