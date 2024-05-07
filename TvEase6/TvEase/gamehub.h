#ifndef GAMEHUB_H
#define GAMEHUB_H

#include <QDialog>

namespace Ui {
class gamehub;
}

class gamehub : public QDialog
{
    Q_OBJECT

public:
    explicit gamehub(QWidget *parent = nullptr);
    ~gamehub();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::gamehub *ui;
};

#endif // GAMEHUB_H
