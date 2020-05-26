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
#include <QStateMachine>

#include <QDropEvent>
#include <QMimeData>

#include "traitement.h"
#include "lecteurjson.h"
#include "ui_presentation.h"
#include "ui_etapes.h"
#include "ui_apropos.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
     QTextEdit * zonetexte;
     void MachineEtats();


     void AfficherFenetre();
     void AfficherPresentation();
     void AfficherIngredient();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Ui::FenetrePresentation presentation;
    Ui::FenetreEtapes etapes;
    Ui::FenetreApropos apropos;

    LecteurJson Json;

    void MenuPrincipal();
    void MenuFichier();
    void MenuAide();

    void dragEnterEvent(QDragEnterEvent*);

    QStateMachine *MachineEtapes;

    void dropEvent(QDropEvent*);

    QWidget * WidgetEtape,* WidgetPresentation,* WidgetApropos;


public slots:
    void Ouvrir(const QString &path = QString());
    void Help();
    void AfficherEtape();
    void Lancementlecture(QString);

signals:
    void cheminFichier(QString);
};
#endif // MAINWINDOW_H
