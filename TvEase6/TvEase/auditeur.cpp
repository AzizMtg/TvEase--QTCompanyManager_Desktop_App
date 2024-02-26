#include "auditeur.h"
#include "ui_auditeur.h"
//
#include "personnelle.h"
#include "programme.h"
#include "publicite.h"
#include "abonnement.h"
#include "studio.h"
//

auditeur::auditeur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::auditeur)
{
    ui->setupUi(this);
}

auditeur::~auditeur()
{
    delete ui;
}

void auditeur::on_pushButton_23_clicked()
{
    hide() ;
    personnelle personnelle ;
    personnelle.setModal(true) ;
    personnelle.exec() ;

}

void auditeur::on_pushButton_24_clicked()
{
    hide() ;
    programme programme ;
    programme.setModal(true) ;
    programme.exec() ;

}

void auditeur::on_pushButton_25_clicked()
{
    hide() ;
    publicite publicite ;
    publicite.setModal(true) ;
    publicite.exec() ;
}

void auditeur::on_pushButton_27_clicked()
{
    hide() ;
    abonnement abonnement ;
    abonnement.setModal(true) ;
    abonnement.exec() ;

}

void auditeur::on_pushButton_28_clicked()
{
    hide() ;
    studio studio ;
    studio.setModal(true) ;
    studio.exec() ;
}
