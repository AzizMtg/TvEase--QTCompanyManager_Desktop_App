#ifndef STATSTUDIO_H
#define STATSTUDIO_H
#include"cstudio.h"
#include <QDialog>

namespace Ui {
class statstudio;
}

class statstudio : public QDialog
{
    Q_OBJECT

public:
    explicit statstudio(QWidget *parent = nullptr);


    ~statstudio();

private:
    Ui::statstudio *ui;
    Cstudio tmpstudio;
};

#endif // STATSTUDIO_H
