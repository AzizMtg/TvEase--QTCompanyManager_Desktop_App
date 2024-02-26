#include "programme.h"
#include "ui_programme.h"
//
#include "personnelle.h"
#include "publicite.h"
#include "auditeur.h"
#include "abonnement.h"
#include "studio.h"

//
programme::programme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::programme)
{
    ui->setupUi(this);
}

programme::~programme()
{
    delete ui;
}

void programme::on_pushButton_9_clicked()
{
    hide() ;
    personnelle personnelle ;
    personnelle.setModal(true) ;
    personnelle.exec() ;

}


void programme::on_pushButton_11_clicked()
{
    hide() ;
    publicite publicite ;
    publicite.setModal(true) ;
    publicite.exec() ;
}




void programme::on_pushButton_12_clicked()
{
    hide() ;
    auditeur auditeur ;
    auditeur.setModal(true) ;
    auditeur.exec() ;

}

void programme::on_pushButton_13_clicked()
{
    hide() ;
    abonnement abonnement ;
    abonnement.setModal(true) ;
    abonnement.exec() ;
}


void programme::on_pushButton_14_clicked()
{
    hide() ;
    studio studio ;
    studio.setModal(true) ;
    studio.exec() ;
}
