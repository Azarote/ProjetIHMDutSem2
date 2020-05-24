#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *fileMenu = new QMenu(tr("Fichier"), this);
    zonetexte = new QTextEdit;
    setCentralWidget(zonetexte);
    menuBar()->addMenu(fileMenu);

    fileMenu->addAction(tr("Ouvrir..."), this, SLOT(Ouvrir()),QKeySequence::Open);
    fileMenu->addAction(tr("Quitter"), qApp, SLOT(Quitter()),QKeySequence::Quit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

