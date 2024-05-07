#ifndef CONFIRMMOTPASS_H
#define CONFIRMMOTPASS_H

#include <QDialog>

namespace Ui {
class confirmMotPass;
}

class confirmMotPass : public QDialog
{
    Q_OBJECT

public:
    explicit confirmMotPass(QWidget *parent = nullptr);
    ~confirmMotPass();

private slots:
    void on_pushButton_suivant_clicked();

    void on_pushButton_eye_clicked();

private:
    Ui::confirmMotPass *ui;
};

#endif // CONFIRMMOTPASS_H
