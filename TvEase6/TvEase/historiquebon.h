#ifndef HISTORIQUEBON_H
#define HISTORIQUEBON_H

#include <QDialog>
#include"cabonnement.h"

namespace Ui {
class historiquebon;
}

class historiquebon : public QDialog
{
    Q_OBJECT

public:
    explicit historiquebon(QWidget *parent = nullptr);
    ~historiquebon();

private:
    Ui::historiquebon *ui;
    cabonnement Atmp;

};

#endif // HISTORIQUEBON_H
