#include "codempass.h"
#include "ui_codempass.h"
#include"forgetmotpass.h"

#include<iostream>
#include<QMessageBox>
#include"nouvmotpass.h"

codeMpass::codeMpass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::codeMpass)
{
    ui->setupUi(this);
}

codeMpass::~codeMpass()
{
    delete ui;
}

void codeMpass::on_pushButton_clicked()
{
    std::cout << "Code confirmation: ili fi codempass " << codeConfirmation.toStdString() << std::endl;

   QString code_a_valider = ui->lineEdit_codeVerif->text();
  if (codeConfirmation == code_a_valider )
   {
      QMessageBox::information(nullptr, "Correcte", "Ecrire nouveau mot de passe");

      //std::cout <<"cin fi codemodpass = " <<cin.toStdString()<< std::endl;  //itba3fit bil shih min forgetmot il codempass
      nouvmotpass nouvmotpass ;
      nouvmotpass.setCIN2(cin);



      hide() ;
      nouvmotpass.setModal(true) ;
      nouvmotpass.exec() ;



   }
    else
   {
     QMessageBox::critical(nullptr, "Erreur", "Veuillez réessayer");
     this->close();
   }
}
