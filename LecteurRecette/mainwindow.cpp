#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Lecteur de recettes");//titre de la fenêtre
}

MainWindow::~MainWindow()
{
    delete ui;
}

