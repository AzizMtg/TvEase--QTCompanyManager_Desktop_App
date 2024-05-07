#ifndef AUDITEUR_H
#define AUDITEUR_H

#include <QDialog>
//// anas
#include "audi.h"
#include <QDialog>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QMap>
#include <QPixmap>
#include <QFile>
#include <QDebug>
#include <QFileDialog>
#include <QFileInfo>
#include <QBuffer>
#include <QByteArray>
#include <QTableWidgetItem>
#include <QWidget>
#include <QListView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QtSql>
#include <QCalendarWidget>
#include<QMovie>
#include<QThread>
#include<QStyledItemDelegate>
#include <QTableWidgetItem>
#include <QPixmap>
#include <QFile>
#include <QPainter>
#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
///
namespace Ui {
class auditeur;
}

class auditeur : public QDialog
{
    Q_OBJECT

public:
    explicit auditeur(QWidget *parent = nullptr);
    ~auditeur();

<<<<<<< Updated upstream
=======
    void setcinCNX(const QString& cin) {
            this->cin = cin;
        }
       void setROLECNX(const QString& role) {
            this->role = role;
        }
       audi fetchAuditeurById(int id_audi);
       void imageCaptured(int reqid, const QImage &img);


>>>>>>> Stashed changes
private slots:
    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

<<<<<<< Updated upstream
private:
    Ui::auditeur *ui;
=======
    void on_pushButton_26_clicked();

    void on_label_34_linkActivated(const QString &link);

    void on_pushButton_parametre_compte_clicked();


    //////////////////////////////////////////////
    void on_pushButton_16_clicked();

      void on_pushButton_17_clicked();

      void on_pushButton_ajouter_audi_clicked();

      void on_pushButton_modifier_audi_clicked();

      void on_pushButton_supprimer_audi_clicked();

      void on_pushButton_id_recher_clicked();

      void on_pushButto_recherche_audi_clicked();

      void on_comboBox_trie_activated(const QString &arg1);

      void on_pushButton_pdf_audi_clicked();


      void on_pushButton_22_clicked();
     // QByteArray loadImageData() ;



    // /////////////////image/////////
              // QByteArray getImageDataFromDatabase(const QString &imageName);
              // QString getImageNameFromDatabase(int id_audi);

               void on_browse_clicked();

               void on_tableView_lister_audi_activated(const QModelIndex &index);
               void on_pushButton_14_clicked();

               void on_pushButton_20_clicked();

               void on_pushButton_13_clicked();

               void on_pushButton_15_clicked();

               void on_pushButton_RESET_audi_clicked();

private:
    void start_Camera();
    void stop_Camera();


private:
    Ui::auditeur *ui;
    QString cin , role;
    audi tmpaudi ,tp;
       QStandardItemModel *imageModel;
       QString imageName,imagePath;
       QByteArray imageData;
       int id_audi;
       QByteArray selected_image_data;
       QByteArray image_data;
       QScopedPointer<QCamera> M_Camera;
       QScopedPointer<QCameraImageCapture> M_Camera_Image;
       int Counter = 0;
       QImage ImageFromCamera;
       QMediaPlayer *player;
       QVideoWidget *videowidget;
       QMediaRecorder *recorder;
       auditeur *auditeurInstance;

>>>>>>> Stashed changes
};

class ImageDelegatee : public QStyledItemDelegate {
public:
    ImageDelegatee(QObject* parent = nullptr)
        : QStyledItemDelegate(parent)
    {
    }

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
        if (index.column() == 7) { // la colonne d'image est la colonne 9
            QVariant data = index.model()->data(index);
            if (data.isValid() && !data.isNull()) {
                QByteArray byteArray = data.toByteArray();
                QPixmap pixmap;
                pixmap.loadFromData(byteArray);
                painter->drawPixmap(option.rect, pixmap);
            }
        } else {
            QStyledItemDelegate::paint(painter, option, index);
        }
    }
};
#endif // AUDITEUR_H
