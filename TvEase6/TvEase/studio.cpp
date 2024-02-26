#include "studio.h"
#include "ui_studio.h"

//
#include "personnelle.h"
#include "programme.h"
#include "publicite.h"
#include "auditeur.h"
#include "abonnement.h"
//

studio::studio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studio)
{
    ui->setupUi(this);
}

studio::~studio()
{
    delete ui;
}

void studio::on_pushButton_37_clicked()
{
    hide() ;
    personnelle personnelle ;
    personnelle.setModal(true) ;
    personnelle.exec() ;

}

void studio::on_pushButton_38_clicked()
{
    hide() ;
    programme programme ;
    programme.setModal(true) ;
    programme.exec() ;

}

void studio::on_pushButton_39_clicked()
{
    hide() ;
    publicite publicite ;
    publicite.setModal(true) ;
    publicite.exec() ;
}

void studio::on_pushButton_40_clicked()
{
    hide() ;
    auditeur auditeur ;
    auditeur.setModal(true) ;
    auditeur.exec() ;
}

void studio::on_pushButton_41_clicked()
{
    hide() ;
    abonnement abonnement ;
    abonnement.setModal(true) ;
    abonnement.exec() ;
}
