// In parkings.h

#ifndef PARKINGS_H
#define PARKINGS_H
#include"cpersonnel.h"
#include <QDialog>
#include "arduino.h" // Assuming this is where your Arduino class is defined

QT_BEGIN_NAMESPACE
namespace Ui { class parkings; }
QT_END_NAMESPACE

class parkings : public QDialog // Change QMainWindow to QDialog
{
    Q_OBJECT

public:
    parkings(QWidget *parent = nullptr);
    ~parkings();
     Cpersonnel perspark;
     bool searchCodeInTable(const QString& codeToSearch) ;

private slots:
    void update_label();

private:
    Ui::parkings *ui;
    QTimer *timer;
    Arduino A; // Instance of the Arduino class


};

#endif // PARKINGS_H
