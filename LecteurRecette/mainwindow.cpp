#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    connect(this,SIGNAL(cheminFichier(QString)),this,SLOT(Lecteur(QString)));

    WidgetEtape = new QWidget;
    WidgetPresentation = new QWidget;
}

void MainWindow::AfficherFenetre()
{
    presentation.setupUi(WidgetPresentation);
    WidgetPresentation->show();
    WidgetPresentation->setFixedSize(QSize(800, 600)); //On empêche de redimensionner la fenêtre
    etapes.setupUi(WidgetEtape);
    WidgetEtape->show();
    WidgetEtape->setFixedSize(QSize(800, 600)); //On empêche de redimensionner la fenêtre
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

    AfficherFenetre();
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
        cheminFichier(fileName);
    }
}
