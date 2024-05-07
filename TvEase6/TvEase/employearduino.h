#ifndef EMPLOYEARDUINO_H
#define EMPLOYEARDUINO_H

#include <QDialog> // Change QWidget to QDialog
#include "arduino.h"
#include "ESpeak.h"


namespace Ui {
class employearduino;
}

class employearduino : public QDialog // Change QWidget to QDialog
{
    Q_OBJECT

public:
    explicit employearduino(QWidget *parent = nullptr);
    ~employearduino();

private slots:
    void onDataReceived();
    void on_pushButton_clicked();

    void on_clear_clicked();

    void on_eff_clicked();

private:
    Ui::employearduino *ui;
    Arduino arduinoObj;
    ESpeak m_espeak;

};

#endif // EMPLOYEARDUINO_H
