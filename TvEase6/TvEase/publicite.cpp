#include "publicite.h"
#include "ui_publicite.h"
//
#include "personnelle.h"
#include "programme.h"
#include "auditeur.h"
#include "abonnement.h"
#include "studio.h"
//
publicite::publicite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::publicite)
{
    ui->setupUi(this);
}

publicite::~publicite()
{
    delete ui;
}

void publicite::on_pushButton_16_clicked()
{
    hide() ;
    personnelle personnelle ;
    personnelle.setModal(true) ;
    personnelle.exec() ;

}

void publicite::on_pushButton_17_clicked()
{
    hide() ;
    programme programme ;
    programme.setModal(true) ;
    programme.exec() ;
}

void publicite::on_pushButton_19_clicked()
{
    hide() ;
    auditeur auditeur ;
    auditeur.setModal(true) ;
    auditeur.exec() ;
}

void publicite::on_pushButton_20_clicked()
{
    hide() ;
    abonnement abonnement ;
    abonnement.setModal(true) ;
    abonnement.exec() ;
}

void publicite::on_pushButton_21_clicked()
{
    hide() ;
    studio studio ;
    studio.setModal(true) ;
    studio.exec() ;
}
