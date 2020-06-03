/**
 * \file mainwindow.cpp
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Programme qui gère tout l'affichage
 *
 */
#include "mainwindow.h"
#include "temps.h"
#include "ui_mainwindow.h"

#include <QtDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Lecteur de recettes"); //Renomme la fenêtre principale

    MenuFichier(); //Crée onglet "Fichier"
    MenuAide(); //Crée onglet "Aide"

    setAcceptDrops(true); //Autorise le glisser-déposer
    this->setFixedSize(QSize(800, 600)); //Empêche de redimensionner la fenêtre principale
    connect(this,SIGNAL(cheminFichier(QString)),this,SLOT(Lancementlecture(QString)));

    //Prépare les widgets qui seront des fenêtres
    WidgetEtape = new QWidget;
    WidgetPresentation = new QWidget;
    WidgetApropos = new QWidget;
}

MainWindow::~MainWindow()
{
    delete ui; //Supprime l'UI
}

void MainWindow::Lancementlecture(QString nomFichier)
{
    //Appelle les fonctions pour la lecture du fichier
    Json.Lecteur(nomFichier);
    AfficherFenetre();
    MachineEtats();

    //Les fonctions suivantes servent à afficher les informations propres aux recettes
    AfficherPresentation();
    AfficherIngredient();
    AfficherTemps();
}

void MainWindow::AfficherFenetre()
{
    etapes.setupUi(WidgetEtape); //Paramètre l'UI
    etapes.label->hide();
    WidgetEtape->show(); //Affiche la fenêtre "Étapes de réalisation"
    WidgetEtape->setFixedSize(QSize(800, 600)); //Empêche de redimensionner la fenêtre

    presentation.setupUi(WidgetPresentation); //Paramètre l'UI
    WidgetPresentation->show(); //Affiche la fenêtre "Présentation de la recette"
    WidgetPresentation->setFixedSize(QSize(800, 600)); //Empêche de redimensionner la fenêtre
}

void MainWindow::AfficherPresentation()
{
    QString style = ""; //Stylise le texte
       style += "QListView { ";
       style += "font-family: Helvetica;font-size: 15pt;";
       style += "}";
    QFont titre("Franklin Gothic Demi Cond", 31, QFont::Bold);
    presentation.contenuPresentation->setStyleSheet(style);

    presentation.contenuPresentation->clear();
    presentation.contenuPresentation->addItems(Json.getInfosRecette()); //Affiche le nom de la recette, la description et les mots-clés dans "Présentation de la recette", onglet Présentation

    presentation.contenuPresentation->itemAt(1,0)->setTextAlignment(Qt::AlignCenter);
    presentation.contenuPresentation->itemAt(1,0)->setFont(titre);

    QStringListModel *modeleURL = new QStringListModel(Json.getURL());
    presentation.contenuURL->setModel(modeleURL); //Affiche l'URL en bas de fenêtre
}

void MainWindow::AfficherIngredient()
{
    QString style = ""; //Stylise le texte
       style += "QListView { ";
       style += "font-family: Helvetica;font-size: 12pt;";
       style += "}";
    presentation.contenuIngredients->setStyleSheet(style);

    presentation.contenuIngredients->clear();
    presentation.contenuIngredients->addItems(Json.getIngredients()); //Affiche les ingrédients dans "Présentation de la recette", onglet Ingrédients
}

void MainWindow::AfficherEtape()
{
    QString style = ""; //Stylise le texte
       style += "QListView { ";
       style += "font-family: Helvetica;font-size: 12pt;";
       style += "}";
    etapes.contenuEtapes->setStyleSheet(style);

    etapes.contenuEtapes->clear();
    etapes.contenuEtapes->addItem(etapes.label->text()); //Affiche les étapes dans "Étapes de réalisation"

    QStringListModel *modeleURL = new QStringListModel(Json.getURL());
    etapes.contenuURL->setModel(modeleURL); //Affiche l'URL en bas de fenêtre
}

void MainWindow::AfficherTemps()
{
    QStringList contenuTempsPrep, contenuTempsCuisson, contenuTempsTotal;
    Trait.traitementTemps(contenuTempsPrep, contenuTempsCuisson, contenuTempsTotal, Json);

    QStringListModel *modeleTempsPrep = new QStringListModel(contenuTempsPrep);
    QStringListModel *modeleTempsCuisson = new QStringListModel(contenuTempsCuisson);
    QStringListModel *modeleTempsTotal = new QStringListModel(contenuTempsTotal);

    //Affiche les trois temps différents dans "Présentation de la recette"
    presentation.contenuTempsPrep->setModel(modeleTempsPrep);
    presentation.contenuTempsCuisson->setModel(modeleTempsCuisson);
    presentation.contenuTempsTotal->setModel(modeleTempsTotal);

    //Affiche les trois temps différents dans "Étapes de réalisation"
    etapes.contenuTempsPrep->setModel(modeleTempsPrep);
    etapes.contenuTempsCuisson->setModel(modeleTempsCuisson);
    etapes.contenuTempsTotal->setModel(modeleTempsTotal);
}

void MainWindow::MenuFichier()
{
    QMenu *fileMenu = new QMenu(tr("Fichier"), this);

    menuBar()->addMenu(fileMenu); //Ajoute l'onglet "Fichier" au menu

    //Ajoute les options "Ouvrir..." et "Quitter" lorsque l'onglet "Fichier" est déroulé
    fileMenu->addAction(tr("Ouvrir..."), this, SLOT(Ouvrir()),QKeySequence::Open);
    fileMenu->addAction(tr("Quitter"), qApp, SLOT(quit()),QKeySequence::Quit);
}

void MainWindow::MenuAide()
{
    QMenu *HelpMenu = new QMenu(tr("Aide"), this);
    menuBar()->addMenu(HelpMenu); //Ajoute l'onglet "Aide"
    HelpMenu->addAction(tr("À propos"), this, SLOT(Help())); //Ajoute l'option "À propos" lorsque l'onglet "Aide" est déroulé
}

void MainWindow::Help()
{
    //Remplit la page "À propos" à l'aide de l'HTML
    QMessageBox::about(this, QString::fromUtf8("Information Projet"), QString::fromUtf8("	<p>On veut construire une application qui lit et exécute des recettes de cuisine. Les fichiers de recette sont au format JSON, suivant le schéma : https://schema.org/Recipe. Un exemple est donné ci-dessous. Une fois la recette lue, on peut démarrer l affichage des informations :</p><ol><li>nom, description, mots-clés</li><li>liste des ingrédients</li><li>chacune des étapes de réalisation</li></ol><p>Les 2 premiers affichages se font dans 2 widgets (fenêtre ou onglet). Les étapes de réalisation (3) sont affichées l une après l autre, en séquence, de la 1ère à la dernière. On peut passer à l étape suivante ou à l étape précédente en appuyant sur un bouton, ou à partir de la liste des étapes (liste déroulante).</p><h3>Contraintes :</h3><ul><li>utilisation de QT, C++</li><li>chargement du fichier de recette via une boîte de dialogue (QFileDialog adapté aux fichiers JSON)</li><li>automate QT pour les étapes de réalisation de la recette (QStateMachine)</li><li>documentation obligatoire pour les classes et méthodes, schéma de votre machine à état</li><li>UI QT ou non ( à la main ), ce n est pas une contrainte !</li><li>conception type MVC où le stockage des informations et les traitements sont indépendants, et ne se font pas dans des classes QT (couplage faible, comme vu dans les contrôles de TP).</li></ul><h3>Bonus :</h3><ul><li>un seul widget pour afficher chacune des étapes (plutôt qu un widget par étape)</li><li>utilisation de Doxygen (cf https://franckh.developpez.com/tutoriels/outils/doxygen/)pour la documentation</li><li>portage sur Android (attention, cela nécessite le téléchargement du sdk Android)</li></ul><p>Le projet se fait par binôme (cf. choix des groupes), rendu le 12 juin via Ametice (cf Remise du projet). Le projet rendu devra contenir les sources, le .pro, les fichiers d exemple et une documentation en PDF donnant le diagramme des classes, le schéma de la machien à états et l architecture de l application.</p>"));
}

//Ouvre une fenêtre de dialogue pour la sélection d'un fichier
void MainWindow::Ouvrir(const QString &path)
{
    QString fileName = path;

    if (fileName.isNull())
        fileName = QFileDialog::getOpenFileName(this, tr("Ouvrir le fichier"), "", tr("Fichiers JSON (*.json)"));

    if (!fileName.isNull())
        emit cheminFichier(fileName); //Si le fichier est ouvert, on envoit un signal
}

//Machine à états qui gère l'affichage des étapes au moyen de boutons "Précédent" et "Suivant"
void MainWindow::MachineEtats()
{
    MachineEtapes = new QStateMachine(this);
    QList<QState*> listeQState;

    for(int i=0; i<Json.getEtapes().size();i++)
    {
      QState *etat = new QState();
      etat->assignProperty(etapes.label, "text", Json.getUpdateEtapes(i));
      emit ClearLabel();
      connect(this,SIGNAL(ClearLabel()),etapes.label_2, SLOT(clear()) );
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

//Procédures glisser-déposer
void MainWindow::dragEnterEvent(QDragEnterEvent *e)
{
    if (e->mimeData()->hasUrls())
        e->acceptProposedAction();
}

void MainWindow::dropEvent(QDropEvent *e)
{
    foreach (const QUrl &url, e->mimeData()->urls()) {
        QString fileName = url.toLocalFile();
        if(QFileInfo(fileName).suffix() != "json") return;
        Ouvrir(fileName);
    }
}
