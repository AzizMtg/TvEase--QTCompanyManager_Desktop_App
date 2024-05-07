#include "staperso.h"
#include "ui_staperso.h"

// statistique
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>

staPerso::staPerso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::staPerso)
{
    ui->setupUi(this);

    ////////////////////////// statistique 1
      int cdi , cdd , ctp ;
       tmppersonnel.calculateContratStat(&cdi, &cdd, &ctp) ;

        // Créer graphique
        QPieSeries *pie = new QPieSeries();
        QPieSlice *cdiSlice = pie->append("Contrat a duree indeterminee (CDI)", cdi);
        QPieSlice *cddSlice = pie->append("Contrat a duree determinee (CDD)", cdd);
        QPieSlice *ctpSlice = pie->append("Contrat de travail temporaire (CTP)", ctp);


        QChart *chartt = new QChart();
        chartt->addSeries(pie);
        chartt->setTitle("Type du Contrat");

        // Enable series animations taba3 animation
        chartt->setAnimationOptions(QChart::AllAnimations);

        // Create the chart view and set the chart taba3 animation
        QChartView *chartView = new QChartView(chartt);
        chartView->setRenderHint(QPainter::Antialiasing);

        QChartView *chartvieww = new QChartView(chartt);
        chartvieww->setGeometry(0, 0, ui->frame_contra_perso_stat->width(), ui->frame_contra_perso_stat->height());

        // taba3 il hover
        connect(cdiSlice, &QPieSlice::hovered, this, [=](bool hovered) {
            if (hovered) {
                QToolTip::showText(QCursor::pos(), QString("<b>CDI:</b> %1").arg(cdi));
                QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
                QToolTip::setPalette(QPalette(Qt::white, Qt::black)); // Définir la couleur de fond et du texte
            } else {
                QToolTip::hideText();
            }
        });
        connect(cddSlice, &QPieSlice::hovered, this, [=](bool hovered) {
            if (hovered) {
                QToolTip::showText(QCursor::pos(), QString("<b>CDD:</b> %1").arg(cdd));
                QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
                QToolTip::setPalette(QPalette(Qt::white, Qt::black)); // Définir la couleur de fond et du texte
            } else {
                QToolTip::hideText();
            }
        });
        connect(ctpSlice, &QPieSlice::hovered, this, [=](bool hovered) {
            if (hovered) {
                QToolTip::showText(QCursor::pos(), QString("<b>CTP:</b> %1").arg(ctp));
                QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
                QToolTip::setPalette(QPalette(Qt::white, Qt::red)); // Définir la couleur de fond et du texte

            } else {
                QToolTip::hideText();
            }
        });


        // in7otouh fil lineedite
        QHBoxLayout *layout = new QHBoxLayout(ui->frame_contra_perso_stat);
        layout->addWidget(chartvieww);
    ////////////////////////////// statistique 2
        int adminP , RC , Rinter  ;
        tmppersonnel.calculateTypeStat(&adminP, &RC, &Rinter);

        // Créer les ensembles de barres avec différentes couleurs
        QBarSet *adminSet = new QBarSet("Admin principal");
        QBarSet *RCSet = new QBarSet("Responsable clientele");
        QBarSet *RinterSet = new QBarSet("Responsable interne");

        // Ajouter les données aux ensembles de barres
        *adminSet << adminP;
        *RCSet << RC;
        *RinterSet << Rinter;

        // Créer le diagramme en barres avec les séries de barres
        QBarSeries *barSeries = new QBarSeries();
        barSeries->append(adminSet);
        barSeries->append(RCSet);
        barSeries->append(RinterSet);

        // Créer le graphique et ajouter la série de barres
        QChart *chart = new QChart();
        chart->addSeries(barSeries);
        chart->setTitle("Role du personnel");
        chart->setAnimationOptions(QChart::AllAnimations);

        // Définir les couleurs des ensembles de barres
        adminSet->setColor(Qt::blue);
        RCSet->setColor(Qt::green);
        RinterSet->setColor(Qt::red);

        // Créer la vue du graphique et définir le graphique
        QChartView *chartView2 = new QChartView(chart);
        chartView2->setRenderHint(QPainter::Antialiasing);

        // Définir la géométrie de la vue du graphique
        chartView2->setGeometry(0, 0, ui->frame_type_perso_stat->width(), ui->frame_type_perso_stat->height());

        // Connecter le signal hovered pour afficher les valeurs au survol
        connect(adminSet, &QBarSet::hovered, this, [=](bool status, int index) {
            if (status) {
                int value = adminSet->at(index);
                QString message = QString("Admin principal: %1").arg(value);
                QToolTip::showText(chartView2->mapToGlobal(QPoint(0, 0)), message);
            } else {
                QToolTip::hideText();
            }
        });
        connect(RCSet, &QBarSet::hovered, this, [=](bool status, int index) {
            if (status) {
                int value = RCSet->at(index);
                QString message = QString("Responsable clientele: %1").arg(value);
                QToolTip::showText(chartView2->mapToGlobal(QPoint(0, 0)), message);
            } else {
                QToolTip::hideText();
            }
        });
        connect(RinterSet, &QBarSet::hovered, this, [=](bool status, int index) {
            if (status) {
                int value = RinterSet->at(index);
                QString message = QString("Responsable interne: %1").arg(value);
                QToolTip::showText(chartView2->mapToGlobal(QPoint(0, 0)), message);
            } else {
                QToolTip::hideText();
            }
        });


        // Ajouter la vue du graphique à la mise en page
        QHBoxLayout *layout2 = new QHBoxLayout(ui->frame_type_perso_stat);
        layout2->addWidget(chartView2);


}

staPerso::~staPerso()
{
    delete ui;
}
