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
<<<<<<< Updated upstream
    hide() ;
    personnelle personnelle ;
    personnelle.setModal(true) ;
    personnelle.exec() ;
=======



 QString email = ui->lineEdit_email_sign_in->text();
 QString mot_pass  = ui->lineEdit_password_sign_in->text();

 std::string mot_pass_string = mot_pass.toStdString();
 std::string hashed_pass = hashPassword3(mot_pass_string);

 QString hashed_pass_qstring = QString::fromStdString(hashed_pass); // inbadlouh min string il Qstring
 bool credentialsValid = verifyUserCredentials(email, hashed_pass_qstring);


/* personnelle personnelle2 ;
 personnelle2.setModal(true) ;
  personnelle2.exec() ;*/

 if (credentialsValid)
 {


     QString cin = getCinByEmailAndPassword(email, hashed_pass_qstring);
     QString role = getRoleByEmailAndPassword(email, hashed_pass_qstring);
     QString nom = getNomByEmailAndPassword(email, hashed_pass_qstring);
     QString prenom = getPrenomByEmailAndPassword(email, hashed_pass_qstring);


     std::cout <<"cin fi signin = " <<cin.toStdString()<< std::endl;
     std::cout <<"role fi signin = " <<role.toStdString()<< std::endl;
     std::cout <<"nom fi signin = " <<nom.toStdString()<< std::endl;
     std::cout <<"prenom fi signin = " <<prenom.toStdString()<< std::endl;
     ////////////// BINCH NIB3AF LES INFORMATION IMTA3 IL CIN WA IL ROLE LIL LES PAGE LO5RIN IL KOL 6
     std::ofstream outFile("C:\\Users\\CHAIMA\\Documents\\Esprit 2eme\\semestre 2\\projet c++\\TvEase6\\TvEase\\role\\role.txt");

     if (outFile.is_open()) {
         // Write the new information to the file
         outFile << cin.toStdString() << std::endl;
         outFile << role.toStdString() << std::endl;
         outFile << nom.toStdString() << std::endl;
         outFile << prenom.toStdString() << std::endl;

         // Close the file
         outFile.close();

         std::cout << "Information written to userInfo.txt successfully." << std::endl;
     } else {
         std::cerr << "Error opening file for writing." << std::endl;
     }



     QString once = getonceFromCIN(cin) ;
    if (once == "0")
    {
     std::cout<<"sign in once " << once.toStdString();
     nouvOncePass nouvOncePass ;
     nouvOncePass.setModal(true) ;
     nouvOncePass.exec() ;

    }

    else
    {

             if(role=="Admin principal")
                   {
                       //hide() ;
                       personnelle personnelle ;
                       personnelle.setModal(true) ;
                        personnelle.exec() ;
                    }
            else if (role=="Responsable clientele")
                   {
                       // hide() ;
                       auditeur auditeur ;
                       auditeur.setModal(true) ;
                       auditeur.exec() ;
                    }
           else if (role=="Responsable interne")
                   {
                       // hide() ;
                       programme programme ;
                       programme.setModal(true) ;
                       programme.exec() ;
                     }
      }
 }
 else
 {
     QMessageBox::critical(nullptr, "Erreur", "Veuillez réessayer");

 }


}
////////////////////
void SingIn::on_pushButton_3_clicked()
{

    forgetMotpass forgetMotpass ;
    forgetMotpass.setModal(true) ;
    forgetMotpass.exec() ;




}
///////////////// il
void SingIn::on_pushButton_clicked()
{
       if (ui->lineEdit_password_sign_in->echoMode() == QLineEdit::Normal)
           {ui->lineEdit_password_sign_in->setEchoMode(QLineEdit::Password);
             ui->pushButton->setIcon(QIcon(":/img/images/hidepass.png"));
             ui->pushButton_4->setIcon(QIcon(":/img/images/con1.png"));

            }
        else
            {ui->lineEdit_password_sign_in->setEchoMode(QLineEdit::Normal);
             ui->pushButton->setIcon(QIcon(":/img/images/eyepass.png"));
             ui->pushButton_4->setIcon(QIcon(":/img/images/con2.png"));


            }

}
#include<QTimer>
void SingIn::on_lineEdit_email_sign_in_cursorPositionChanged(int arg1, int arg2)
{
    int cursorPos = ui->lineEdit_email_sign_in->cursorPosition();

          // Change icon based on cursor position or text presence
          if (cursorPos == 0 && ui->lineEdit_email_sign_in->text().isEmpty()) {
              ui->pushButton_4->setIcon(QIcon(":/img/images/connormal.png"));
          } else {
              ui->pushButton_4->setIcon(QIcon(":/img/images/convoir.png"));

          }
}

void SingIn::on_lineEdit_password_sign_in_cursorPositionChanged(int arg1, int arg2)
{
    int cursorPos = ui->lineEdit_email_sign_in->cursorPosition();

    if (cursorPos == 0 && ui->lineEdit_email_sign_in->text().isEmpty()) {
        ui->pushButton_4->setIcon(QIcon(":/img/images/connormal.png"));
    } else {
        ui->pushButton_4->setIcon(QIcon(":/img/images/connormal.png"));
    }
>>>>>>> Stashed changes
}
