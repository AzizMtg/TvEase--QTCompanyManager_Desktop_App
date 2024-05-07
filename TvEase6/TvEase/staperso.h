#ifndef STAPERSO_H
#define STAPERSO_H

#include <QDialog>
#include"cpersonnel.h"
namespace Ui {
class staPerso;
}

class staPerso : public QDialog
{
    Q_OBJECT

public:
    explicit staPerso(QWidget *parent = nullptr);
    ~staPerso();

private:
    Ui::staPerso *ui;
    Cpersonnel tmppersonnel ;

};

#endif // STAPERSO_H
