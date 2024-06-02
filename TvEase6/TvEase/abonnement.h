#ifndef ABONNEMENT_H
#define ABONNEMENT_H

#include <QDialog>
#include "cabonnement.h"
#include "espeak.h"

namespace Ui {
class abonnement;
}

class abonnement : public QDialog
{
    Q_OBJECT

public:
    explicit abonnement(QWidget *parent = nullptr);
    ~abonnement();

    void setcinCNX(const QString& cin) {
            this->cin = cin;
        }
       void setROLECNX(const QString& role) {
            this->role = role;
        }
void updateTime() ;
private slots:
    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_parametre_compte_clicked();


    //// khalilll
    void on_pushButton_Gnerer_clicked();



      void on_pushButton_supprimer_abonnement_clicked();


      void on_pushButton_8_clicked();

      void on_pushButton_5_clicked();

      void on_comboBoxFiltre_activated(const QString &arg1);

      void on_pushButton_recherche_abonnement_clicked();
      void afficherTousElementsSiVide(const QString &text);
      void generatePDF(const QString& filename, int id, int numero, const QDate& debut, const QDate& expiration, const QString& type , const QString& prix );


  void mettreAJourGraphique();
  void calcul_reduction();


  void on_actualiser_clicked();

  /*void on_pushButton_qr_clicked()
  {
      // Initialisez la capture vidéo depuis la caméra
      cv::VideoCapture cap(0);

      if (!cap.isOpened()) {
          qDebug() << "Erreur: impossible d'ouvrir la caméra";
          return;
      }

      cv::Mat frame;
      cv::QRCodeDetector qrDecoder;

      while (true) {
          cap >> frame; // Capturez une nouvelle image de la caméra

          // Détecter et décoder le code QR dans l'image
          std::vector<cv::Point> points;
          std::string qrCodeText = qrDecoder.detectAndDecode(frame, points);

          // Si un code QR est détecté, affichez-le et arrêtez la boucle
          if (!qrCodeText.empty()) {
              qDebug() << "Code QR détecté: " << QString::fromStdString(qrCodeText);
              break;
          }

          cv::imshow("Frame", frame);

          // Attendez une touche pour quitter ou mettez une limite de temps
          if (cv::waitKey(1) >= 0)
              break;
      }

      // Libérez les ressources de la caméra
      cap.release();
      cv::destroyAllWindows();
  }*/
  void on_pushButton_estimer_clicked();

  void on_pushButton_promo_clicked();

  void on_lcd_clicked();


  void on_pushButton_clicked();

  void on_pushButton_10_clicked();

  void on_pushButton_11_clicked();

  void on_pushButton_12_clicked();

  void on_Notif_clicked();

  void on_chatbot_clicked();

private:
    Ui::abonnement *ui;
      QString cin , role ;
      cabonnement Atmp;
         QStandardItemModel* model;
          QSortFilterProxyModel *proxyModel;

};

#endif // ABONNEMENT_H
