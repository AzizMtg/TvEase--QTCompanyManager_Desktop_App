#include "personnelle.h"
#include "ui_personnelle.h"
//
#include "programme.h"
#include "publicite.h"
#include "auditeur.h"
#include "abonnement.h"
#include "studio.h"

//
personnelle::personnelle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personnelle)
{
    ui->setupUi(this);
}

personnelle::~personnelle()
{
    delete ui;
}

void personnelle::on_pushButton_6_clicked()
{
    hide() ;
    programme programme ;
    programme.setModal(true) ;
    programme.exec() ;

}

void personnelle::on_pushButton_5_clicked()
{
    hide() ;
    publicite publicite ;
    publicite.setModal(true) ;
    publicite.exec() ;

}

void personnelle::on_pushButton_4_clicked()
{
    hide() ;
    auditeur auditeur ;
    auditeur.setModal(true) ;
    auditeur.exec() ;

}

void personnelle::on_pushButton_3_clicked()
{
    hide() ;
    abonnement abonnement ;
    abonnement.setModal(true) ;
    abonnement.exec() ;
}

void personnelle::on_pushButton_2_clicked()
{
    hide() ;
    studio studio ;
    studio.setModal(true) ;
    studio.exec() ;

}
