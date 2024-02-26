#include "singin.h"
#include "ui_singin.h"
#include "personnelle.h"
SingIn::SingIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SingIn)
{
    ui->setupUi(this);
}

SingIn::~SingIn()
{
    delete ui;
}

void SingIn::on_pushButton_2_clicked()
{
    hide() ;
    personnelle personnelle ;
    personnelle.setModal(true) ;
    personnelle.exec() ;
}
