#include "statprog.h"
#include "ui_statprog.h"
#include <QPixmap>
#include<QMovie>
#include<QThread>



// statistique
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
statProg::statProg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statProg)
{
    ui->setupUi(this);
    ui->gif1->setVisible(false);
    QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString gifPath = desktopPath + "/output-onlinegiftools.gif";

    QMovie *gifAnimation = new QMovie(gifPath);

    // Redimensionner l'image
    QSize newSize(250, 250); // Remplacez ces valeurs par les dimensions souhaitées
    gifAnimation->setScaledSize(newSize);

    ui->gif1->setMovie(gifAnimation);
    ui->gif1->setVisible(true);
    ui->gif1->raise();
    gifAnimation->start();
























    ////////////////////////// statistique 1
      int horreeur ,suspence , diver,rom,roman , comedie,policier ;
      tmpprog.calculateTYPEprog(&horreeur, &suspence, &diver , &rom , &roman , &comedie , &policier ) ;

        // Créer graphique
        QPieSeries *pie = new QPieSeries();
        QPieSlice *HorreurSlice = pie->append("horreeur", horreeur);
        QPieSlice *SuspenceSlice = pie->append("suspence", suspence);
        QPieSlice *DiverSlice = pie->append("diver", diver);
        QPieSlice *RomSlice = pie->append("rom", rom);
        QPieSlice *RomanceSlice = pie->append("roman", roman);
        QPieSlice *ComedieSlice = pie->append("Ccomedie", comedie);
        QPieSlice *PolicierSlice = pie->append("policier", policier);


        QChart *chartt = new QChart();
        chartt->addSeries(pie);
        chartt->setTitle("Type du Programme");

        // Enable series animations taba3 animation
        chartt->setAnimationOptions(QChart::AllAnimations);

        // Create the chart view and set the chart taba3 animation
        QChartView *chartView = new QChartView(chartt);
        chartView->setRenderHint(QPainter::Antialiasing);

        QChartView *chartvieww = new QChartView(chartt);
        chartvieww->setGeometry(0, 0, ui->frame_type_prog_stat->width(), ui->frame_type_prog_stat->height());

        //  hover
        connect(HorreurSlice, &QPieSlice::hovered, this, [=](bool hovered) {
            if (hovered) {
                QToolTip::showText(QCursor::pos(), QString("<b>Horreur:</b> %1").arg(horreeur));
                QToolTip::setFont(QFont("Arial", 10, QFont::Bold));
                QToolTip::setPalette(QPalette(Qt::white, Qt::black));
            } else {
                QToolTip::hideText();
            }
        });
        connect(SuspenceSlice, &QPieSlice::hovered, this, [=](bool hovered) {
            if (hovered) {
                QToolTip::showText(QCursor::pos(), QString("<b>Suspense:</b> %1").arg(suspence));
                QToolTip::setFont(QFont("Arial", 10, QFont::Bold));
                QToolTip::setPalette(QPalette(Qt::white, Qt::black));
            } else {
                QToolTip::hideText();
            }
        });
        connect(DiverSlice, &QPieSlice::hovered, this, [=](bool hovered) {
            if (hovered) {
                QToolTip::showText(QCursor::pos(), QString("<b>Suspense:</b> %1").arg(diver));
                QToolTip::setFont(QFont("Arial", 10, QFont::Bold));
                QToolTip::setPalette(QPalette(Qt::white, Qt::black));
            } else {
                QToolTip::hideText();
            }
        });

        connect(RomSlice, &QPieSlice::hovered, this, [=](bool hovered) {
            if (hovered) {
                QToolTip::showText(QCursor::pos(), QString("<b>Suspense:</b> %1").arg(rom));
                QToolTip::setFont(QFont("Arial", 10, QFont::Bold));
                QToolTip::setPalette(QPalette(Qt::white, Qt::black));
            } else {
                QToolTip::hideText();
            }
        });

        connect(RomanceSlice, &QPieSlice::hovered, this, [=](bool hovered) {
            if (hovered) {
                QToolTip::showText(QCursor::pos(), QString("<b>Suspense:</b> %1").arg(roman));
                QToolTip::setFont(QFont("Arial", 10, QFont::Bold));
                QToolTip::setPalette(QPalette(Qt::white, Qt::black));
            } else {
                QToolTip::hideText();
            }
        });

        connect(ComedieSlice, &QPieSlice::hovered, this, [=](bool hovered) {
            if (hovered) {
                QToolTip::showText(QCursor::pos(), QString("<b>Suspense:</b> %1").arg(comedie));
                QToolTip::setFont(QFont("Arial", 10, QFont::Bold));
                QToolTip::setPalette(QPalette(Qt::white, Qt::black));
            } else {
                QToolTip::hideText();
            }
        });

        connect(PolicierSlice, &QPieSlice::hovered, this, [=](bool hovered) {
            if (hovered) {
                QToolTip::showText(QCursor::pos(), QString("<b>Suspense:</b> %1").arg(policier));
                QToolTip::setFont(QFont("Arial", 10, QFont::Bold));
                QToolTip::setPalette(QPalette(Qt::white, Qt::black));
            } else {
                QToolTip::hideText();
            }
        });

        // in7otouh fil lineedite
        QHBoxLayout *layout = new QHBoxLayout(ui->frame_type_prog_stat);
        layout->addWidget(chartvieww);


    ////////////////////////////// statistique 2
        int FILM , SERIE , DOCUMENTAIRE , PROGRAMME_TELEVISE ;
        tmpprog.calculatefiction(&FILM, &SERIE, &DOCUMENTAIRE,&PROGRAMME_TELEVISE);

        // Créer les ensembles de barres avec différentes couleurs
        QBarSet *FILMSet = new QBarSet("Film");
        QBarSet *SERIE_Set = new QBarSet("Série");
        QBarSet *DOCUMENTAIRE_Set = new QBarSet("Documentaire");
        QBarSet *Pt_Set = new QBarSet("Programme télévisé ");

        // Ajouter les données aux ensembles de barres
        *FILMSet << FILM;
        *SERIE_Set << SERIE;
        *DOCUMENTAIRE_Set << DOCUMENTAIRE;
         *Pt_Set << PROGRAMME_TELEVISE;


        // Créer le diagramme en barres avec les séries de barres
        QBarSeries *barSeries = new QBarSeries();
        barSeries->append(FILMSet);
        barSeries->append(SERIE_Set);
        barSeries->append(DOCUMENTAIRE_Set);
        barSeries->append(Pt_Set);


        // Créer le graphique et ajouter la série de barres
        QChart *chart = new QChart();
        chart->addSeries(barSeries);
        chart->setTitle("Section");
        chart->setAnimationOptions(QChart::AllAnimations);

        // Définir les couleurs des ensembles de barres
        FILMSet->setColor(Qt::blue);
        SERIE_Set->setColor(Qt::green);
        DOCUMENTAIRE_Set->setColor(Qt::red);
        Pt_Set -> setColor(Qt::yellow) ;

        // Créer la vue du graphique et définir le graphique
        QChartView *chartView2 = new QChartView(chart);
        chartView2->setRenderHint(QPainter::Antialiasing);

        // Définir la géométrie de la vue du graphique
        chartView2->setGeometry(0, 0, ui->frame_type_fection_prog->width(), ui->frame_type_fection_prog->height());

        // Connecter le signal hovered pour afficher les valeurs au survol
        connect(FILMSet, &QBarSet::hovered, this, [=](bool status, int index) {
            if (status) {
                int value = FILMSet->at(index);
                QString message = QString("Film: %1").arg(value);
                QToolTip::showText(chartView2->mapToGlobal(QPoint(0, 0)), message);
            } else {
                QToolTip::hideText();
            }
        });
        connect(SERIE_Set, &QBarSet::hovered, this, [=](bool status, int index) {
            if (status) {
                int value = SERIE_Set->at(index);
                QString message = QString("Serie: %1").arg(value);
                QToolTip::showText(chartView2->mapToGlobal(QPoint(0, 0)), message);
            } else {
                QToolTip::hideText();
            }
        });
        connect(DOCUMENTAIRE_Set, &QBarSet::hovered, this, [=](bool status, int index) {
            if (status) {
                int value = DOCUMENTAIRE_Set->at(index);
                QString message = QString("Documentaire: %1").arg(value);
                QToolTip::showText(chartView2->mapToGlobal(QPoint(0, 0)), message);
            } else {
                QToolTip::hideText();
            }
        });
        connect(Pt_Set, &QBarSet::hovered, this, [=](bool status, int index) {
            if (status) {
                int value = Pt_Set->at(index);
                QString message = QString("Programme télévisé : %1").arg(value);
                QToolTip::showText(chartView2->mapToGlobal(QPoint(0, 0)), message);
            } else {
                QToolTip::hideText();
            }
        });


        // Ajouter la vue du graphique à la mise en page
        QHBoxLayout *layout2 = new QHBoxLayout(ui->frame_type_fection_prog);
        layout2->addWidget(chartView2);







//////////////////////////














}





















statProg::~statProg()
{
    delete ui;
}


/*void statProg::playGifAutomatically1() {
    QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString gifPath = desktopPath + "/output-onlinegiftools.gif";

    QMovie *gifAnimation = new QMovie(gifPath);

    // Redimensionner l'image
    QSize newSize(200, 200); // Remplacez ces valeurs par les dimensions souhaitées
    gifAnimation->setScaledSize(newSize);

    ui->gif1->setMovie(gifAnimation);
    ui->gif1->setVisible(true);
    ui->gif1->raise();
    gifAnimation->start();
}
*/
