#ifndef ABONNEMENT_ARDUINO_H
#define ABONNEMENT_ARDUINO_H
#include "arduino.h"
#include <QDialog>
#include "espeak.h"

/*#include <QDialog>

namespace Ui {
class abonnement_arduino;
}

class abonnement_arduino : public QDialog
{
    Q_OBJECT

public:
    explicit abonnement_arduino(QWidget *parent = nullptr);
    ~abonnement_arduino();

private:
    Ui::abonnement_arduino *ui;
};

#endif*/ // ABONNEMENT_ARDUINO_H




namespace Ui {
class abonnement_arduino;
}

class abonnement_arduino : public QDialog
{
    Q_OBJECT

public:
    explicit abonnement_arduino(QWidget *parent = nullptr);
    ~abonnement_arduino();
    void displayData();




private slots:
    void onDataReceived();

    void on_envoyer_clicked();

    void on_clear_clicked();

    void on_eff_clicked();

    void on_zid_clicked();

private:
    Ui::abonnement_arduino *ui;
    Arduino arduinoObj;

    ESpeak m_espeak;


};


#endif // ABONNEMENT_ARDUINO_H
