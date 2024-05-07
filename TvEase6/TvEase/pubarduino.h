#ifndef PUBARDUINO_H
#define PUBARDUINO_H
#include "arduino.h"

#include <QDialog>

namespace Ui {
class pubarduino;
}

class pubarduino : public QDialog
{
    Q_OBJECT

public:
    explicit pubarduino(QWidget *parent = nullptr);
    ~pubarduino();
    void displayData();


private slots:
    void onDataReceived();

    void on_envoyer_clicked();

    void on_clear_clicked();

    void on_eff_clicked();

private:
    Ui::pubarduino *ui;
    Arduino arduinoObj;

};

#endif // PUBARDUINO_H
