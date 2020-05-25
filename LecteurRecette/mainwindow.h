#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QFileDialog>
#include <QFile>
#include <QJsonArray>
#include <QTextEdit>
#include <QJsonValue>
#include <QDebug>
#include <QListView>
#include <QStringListModel>
#include <QJsonDocument>
#include <QJsonObject>

#include <QDropEvent>
#include <QMimeData>

#include "traitement.h"
#include "lecteurjson.h"
#include "ui_presentation.h"
#include "ui_etapes.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
     QTextEdit * zonetexte;
     void AfficherFenetre();
     void AfficherEtape();
     void AfficherPresentation();
     void AfficherIngredient();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Ui::FenetrePresentation presentation;
    Ui::FenetreEtapes etapes;

    LecteurJson Json;

    void MenuPrincipal();
    void MenuFichier();
    void MenuAide();

    void dragEnterEvent(QDragEnterEvent*);

    void dropEvent(QDropEvent*);

    QWidget * WidgetEtape,* WidgetPresentation;


public slots:
    void Ouvrir(const QString &path = QString());

signals:
    void cheminFichier(QString);
};
#endif // MAINWINDOW_H
