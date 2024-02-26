#include "abonnement.h"
#include "ui_abonnement.h"
//
#include "personnelle.h"
#include "programme.h"
#include "publicite.h"
#include "auditeur.h"
#include "studio.h"
//

abonnement::abonnement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::abonnement)
{
    ui->setupUi(this);
}

abonnement::~abonnement()
{
    delete ui;
}

void abonnement::on_pushButton_30_clicked()
{
    hide() ;
    personnelle personnelle ;
    personnelle.setModal(true) ;
    personnelle.exec() ;
}

void abonnement::on_pushButton_31_clicked()
{
    hide() ;
    programme programme ;
    programme.setModal(true) ;
    programme.exec() ;
}

void abonnement::on_pushButton_32_clicked()
{
    hide() ;
    publicite publicite ;
    publicite.setModal(true) ;
    publicite.exec() ;
}

void abonnement::on_pushButton_33_clicked()
{
    hide() ;
    auditeur auditeur ;
    auditeur.setModal(true) ;
    auditeur.exec() ;

}

void abonnement::on_pushButton_35_clicked()
{
    hide() ;
    studio studio ;
    studio.setModal(true) ;
    studio.exec() ;
}
