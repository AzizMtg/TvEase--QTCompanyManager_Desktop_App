#ifndef STATPROG_H
#define STATPROG_H

#include <QDialog>
#include"cprogramme.h"
#include<QMovie>
#include<QThread>
namespace Ui {
class statProg;
}

class statProg : public QDialog
{
    Q_OBJECT

public:


    explicit statProg(QWidget *parent = nullptr);
    ~statProg();

private slots:
   // void playGifAutomatically1() ;


private:
    Ui::statProg *ui;
    cprogramme tmpprog ;







};

#endif // STATPROG_H
