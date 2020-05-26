#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MenuPrincipal();
    MenuFichier();
    MenuAide();

    setAcceptDrops(true);
    this->setFixedSize(QSize(800, 600)); //On empêche de redimensionner la fenêtre
    connect(this,SIGNAL(cheminFichier(QString)),this,SLOT(Lancementlecture(QString)));

    WidgetEtape = new QWidget;
    WidgetPresentation = new QWidget;
    WidgetApropos = new QWidget;
}

void MainWindow::Lancementlecture(QString nomFichier)
{
    Json.Lecteur(nomFichier);
    AfficherFenetre();
    MachineEtats();
    AfficherIngredient();
    AfficherPresentation();
}

void MainWindow::AfficherFenetre()
{
    presentation.setupUi(WidgetPresentation);
    WidgetPresentation->show();
    WidgetPresentation->setFixedSize(QSize(800, 600)); //On empêche de redimensionner la fenêtre
    etapes.setupUi(WidgetEtape);
    etapes.label->hide();
    WidgetEtape->show();
    WidgetEtape->setFixedSize(QSize(800, 600)); //On empêche de redimensionner la fenêtre
}

void MainWindow::AfficherIngredient()
{
    //Stylisation du texte
    QString style = "";
       style += "QListView { ";
       style += "font-family: Helvetica;font-size: 12pt;";
       style += "}";
    presentation.contenuIngredients->setStyleSheet(style);
    presentation.contenuIngredients->clear();
    presentation.contenuIngredients->addItems(Json.getIngredients());
}

void MainWindow::AfficherEtape()
{
    //Stylisation du texte
    QString style = "";
       style += "QListView { ";
       style += "font-family: Helvetica;font-size: 12pt;";
       style += "}";
    etapes.contenuEtapes->setStyleSheet(style);
    etapes.contenuEtapes->clear();
    etapes.contenuEtapes->addItem(etapes.label->text());

    //On affiche l'URL
    QStringListModel *modeleURL = new QStringListModel(Json.getURL());
    etapes.contenuURL->setModel(modeleURL);
}

void MainWindow::AfficherPresentation()
{
    //Stylisation du texte
    QString style = "";
       style += "QListView { ";
       style += "font-family: Helvetica;font-size: 15pt;";
       style += "}";
    QFont titre("Franklin Gothic Demi Cond", 31, QFont::Bold);
    presentation.contenuPresentation->setStyleSheet(style);
    presentation.contenuPresentation->clear();
    presentation.contenuPresentation->addItems(Json.getInfosRecette());
    presentation.contenuPresentation->itemAt(1,0)->setTextAlignment(Qt::AlignCenter);
    presentation.contenuPresentation->itemAt(1,0)->setFont(titre);

    //On affiche l'URL
    QStringListModel *modeleURL = new QStringListModel(Json.getURL());
    presentation.contenuURL->setModel(modeleURL);
}

void MainWindow::MenuFichier(){

    QMenu *fileMenu = new QMenu(tr("Fichier"), this);

    menuBar()->addMenu(fileMenu);

    fileMenu->addAction(tr("Ouvrir..."), this, SLOT(Ouvrir()),QKeySequence::Open);
    fileMenu->addAction(tr("Quitter"), qApp, SLOT(quit()),QKeySequence::Quit);
}

void MainWindow::MenuAide(){

   QMenu *HelpMenu = new QMenu(tr("Aide"), this);
   menuBar()->addMenu(HelpMenu);
   HelpMenu->addAction(tr("À propos"), this, SLOT(Help()));
}

void MainWindow::Help()
{
    apropos.setupUi(WidgetApropos);
    WidgetApropos->show();
    WidgetApropos->setFixedSize(QSize(800, 600)); //On empêche de redimensionner la fenêtre
}

void MainWindow::MenuPrincipal(){

    setWindowTitle("Lecteur de recettes");

}

void MainWindow::Ouvrir(const QString &path)
{
    QString fileName = path;

    if (fileName.isNull())
        fileName = QFileDialog::getOpenFileName(this, tr("Ouvrir le fichier"), "", tr("Fichiers JSON (*.json)"));

    if (!fileName.isNull())
        emit cheminFichier(fileName);

}

void MainWindow::MachineEtats()
{
    MachineEtapes = new QStateMachine(this);
    QList<QState*> listeQState;
    for(int i=0; i<Json.getEtapes().size();i++)
    {
      QState *etat = new QState();
      etat->assignProperty(etapes.label, "text", Json.getUpdateEtapes(i));
      etat->assignProperty(etapes.label_2, "text", "Etape : " + QString::number(i+1) + " / " + QString::number(Json.getEtapes().size()));
      listeQState.append(etat);
      MachineEtapes->addState(etat); 
    }
    for(int i=0; i<Json.getEtapes().size();i++)
    {
        if (i!=0)
            listeQState[i]->addTransition(etapes.btnPrecedent, SIGNAL(clicked()), listeQState[i-1]);
        if (i!=Json.getEtapes().size()-1)
            listeQState[i]->addTransition(etapes.btnSuivant, SIGNAL(clicked()), listeQState[i+1]);
        connect(listeQState[i], SIGNAL(entered()), this, SLOT(AfficherEtape()));
    }
    MachineEtapes->setInitialState(listeQState[0]);
    MachineEtapes->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::dragEnterEvent(QDragEnterEvent *e)
{
    if (e->mimeData()->hasUrls()) {
        e->acceptProposedAction();
    }
}

void MainWindow::dropEvent(QDropEvent *e)
{
    foreach (const QUrl &url, e->mimeData()->urls()) {
        QString fileName = url.toLocalFile();
        Ouvrir(fileName);
    }
}
