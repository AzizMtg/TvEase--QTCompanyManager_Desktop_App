#ifndef FORGETMOTPASS_H
#define FORGETMOTPASS_H

#include <QDialog>

namespace Ui {
class forgetMotpass;
}

class forgetMotpass : public QDialog
{
    Q_OBJECT

public:
    explicit forgetMotpass(QWidget *parent = nullptr);
    ~forgetMotpass();





private slots:
    void on_pushButton_clicked();

private:
    Ui::forgetMotpass *ui;
     QString code_confirmation ;
     QString cin ;
};

#endif // FORGETMOTPASS_H

