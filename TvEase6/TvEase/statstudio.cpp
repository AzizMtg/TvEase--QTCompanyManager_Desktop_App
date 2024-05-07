#include "statstudio.h"
#include "ui_statstudio.h"
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include"cstudio.h"
statstudio::statstudio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statstudio)
{
    ui->setupUi(this);


    int recod_sd,  film_sd, pho_sd , dance_sd ,art_sd, music_sd, prod_sd , broad_sd , design_sd , gaming_sd ;

    tmpstudio.calculateTypestudio(&recod_sd, &film_sd, &pho_sd , &dance_sd ,&art_sd, &music_sd, &prod_sd , &broad_sd , &design_sd , &gaming_sd ) ;

    // Créer graphique
    QPieSeries *pie = new QPieSeries();
    QPieSlice *recod_sdSlice = pie->append("Recording Studio", recod_sd);
    QPieSlice *film_sdSlice = pie->append("Film Studio", film_sd);
    QPieSlice *pho_sdSlice = pie->append(" Photography Studio", pho_sd);
    QPieSlice *dance_sdSlice = pie->append("Dance Studio", dance_sd);
    QPieSlice *art_sdSlice = pie->append("Art Studio", art_sd);
    QPieSlice *music_sdSlice = pie->append("Music Studio", music_sd);
    QPieSlice *prod_sdSlice = pie->append("Production Studio", prod_sd);
    QPieSlice *broad_sdSlice = pie->append("Broadcast Studio)", broad_sd);
    QPieSlice *design_sdSlice = pie->append("Design Studio", design_sd);
    QPieSlice *gaming_sdSlice = pie->append("Gaming Studio", gaming_sd);



    QChart *chartt = new QChart();
    chartt->addSeries(pie);
    chartt->setTitle("Type du Studio");

    // Enable series animations taba3 animation
    chartt->setAnimationOptions(QChart::AllAnimations);

    // Create the chart view and set the chart taba3 animation
    QChartView *chartView = new QChartView(chartt);
    chartView->setRenderHint(QPainter::Antialiasing);

    QChartView *chartvieww = new QChartView(chartt);
    chartvieww->setGeometry(0, 0, ui->frametype->width(), ui->frametype->height());

    // taba3 il hover
    connect(recod_sdSlice, &QPieSlice::hovered, this, [=](bool hovered) {
        if (hovered) {
            QToolTip::showText(QCursor::pos(), QString("<b>recod_sd:</b> %1").arg(recod_sd));
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
            QToolTip::setPalette(QPalette(Qt::white, Qt::black)); // Définir la couleur de fond et du texte
        } else {
            QToolTip::hideText();
        }
    });
    connect(film_sdSlice, &QPieSlice::hovered, this, [=](bool hovered) {
        if (hovered) {
            QToolTip::showText(QCursor::pos(), QString("<b>film_sd:</b> %1").arg(film_sd));
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
            QToolTip::setPalette(QPalette(Qt::white, Qt::black)); // Définir la couleur de fond et du texte
        } else {
            QToolTip::hideText();
        }
    });
    connect(pho_sdSlice, &QPieSlice::hovered, this, [=](bool hovered) {
        if (hovered) {
            QToolTip::showText(QCursor::pos(), QString("<b>pho_sd:</b> %1").arg(pho_sd));
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
            QToolTip::setPalette(QPalette(Qt::white, Qt::red)); // Définir la couleur de fond et du texte

        } else {
            QToolTip::hideText();
        }
    });

    connect(dance_sdSlice, &QPieSlice::hovered, this, [=](bool hovered) {
        if (hovered) {
            QToolTip::showText(QCursor::pos(), QString("<b>dance_sd:</b> %1").arg(dance_sd));
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
            QToolTip::setPalette(QPalette(Qt::white, Qt::red)); // Définir la couleur de fond et du texte

        } else {
            QToolTip::hideText();
        }
    });

    connect(art_sdSlice, &QPieSlice::hovered, this, [=](bool hovered) {
        if (hovered) {
            QToolTip::showText(QCursor::pos(), QString("<b>art_sd:</b> %1").arg(art_sd));
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
            QToolTip::setPalette(QPalette(Qt::white, Qt::red)); // Définir la couleur de fond et du texte

        } else {
            QToolTip::hideText();
        }
    });

    connect(music_sdSlice, &QPieSlice::hovered, this, [=](bool hovered) {
        if (hovered) {
            QToolTip::showText(QCursor::pos(), QString("<b>CTP:</b> %1").arg(music_sd));
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
            QToolTip::setPalette(QPalette(Qt::white, Qt::red)); // Définir la couleur de fond et du texte

        } else {
            QToolTip::hideText();
        }
    });

    connect(prod_sdSlice, &QPieSlice::hovered, this, [=](bool hovered) {
        if (hovered) {
            QToolTip::showText(QCursor::pos(), QString("<b>CTP:</b> %1").arg(prod_sd));
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
            QToolTip::setPalette(QPalette(Qt::white, Qt::red)); // Définir la couleur de fond et du texte

        } else {
            QToolTip::hideText();
        }
    });

    connect(design_sdSlice, &QPieSlice::hovered, this, [=](bool hovered) {
        if (hovered) {
            QToolTip::showText(QCursor::pos(), QString("<b>CTP:</b> %1").arg(prod_sd));
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
            QToolTip::setPalette(QPalette(Qt::white, Qt::red)); // Définir la couleur de fond et du texte

        } else {
            QToolTip::hideText();
        }
    });

    connect(broad_sdSlice, &QPieSlice::hovered, this, [=](bool hovered) {
        if (hovered) {
            QToolTip::showText(QCursor::pos(), QString("<b>CTP:</b> %1").arg(broad_sd));
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
            QToolTip::setPalette(QPalette(Qt::white, Qt::red)); // Définir la couleur de fond et du texte

        } else {
            QToolTip::hideText();
        }
    });

    connect(gaming_sdSlice, &QPieSlice::hovered, this, [=](bool hovered) {
        if (hovered) {
            QToolTip::showText(QCursor::pos(), QString("<b>CTP:</b> %1").arg(gaming_sd));
            QToolTip::setFont(QFont("Arial", 10, QFont::Bold)); // Définir la police en gras
            QToolTip::setPalette(QPalette(Qt::white, Qt::red)); // Définir la couleur de fond et du texte

        } else {
            QToolTip::hideText();
        }
    });


    // in7otouh fil lineedite
    QHBoxLayout *layout = new QHBoxLayout(ui->frametype);
    layout->addWidget(chartvieww);


}

statstudio::~statstudio()
{
    delete ui;
}
