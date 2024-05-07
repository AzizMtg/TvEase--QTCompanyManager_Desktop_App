#ifndef NOUVMOTPASS_H
#define NOUVMOTPASS_H

#include <QDialog>

namespace Ui {
class nouvmotpass;
}

class nouvmotpass : public QDialog
{
    Q_OBJECT

public:
    explicit nouvmotpass(QWidget *parent = nullptr);
    ~nouvmotpass();

    void setCIN2(const QString& cin) {
         this->cin = cin;
     }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::nouvmotpass *ui;
    QString cin;
};

#endif // NOUVMOTPASS_H
