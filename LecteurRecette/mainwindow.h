#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/**
 * \file mainwindow.h
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Classe des différentes fenêtre
 *
 */
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
#include <QMessageBox>

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
    /*!
         *  \brief Constructeur
         *
         *  Constructeur classe MainWindow
         * \param parent Pointeur sur QWidget.
         */
    MainWindow(QWidget *parent = nullptr);

    /**
     * \fn Machine à état
     * \brief  machine à état permettant la navigation dans les étapes d'une recette.
     *
     */
     void MachineEtats();

     /*!
          *  \brief Afficher Fenêtre
          *
          *  Fonction Qui aiffhce les fenêtres aprés lecture du JSON.
          */

     void AfficherFenetre();
     /*!
          *  \brief Afficher Présentation
          *
          *  Affiche le texte dans la fenêtre présentation aprés lecture du JSON.
          */

     void AfficherPresentation();
     /*!
          *  \brief Afficher Ingrédient
          *
          *  Affiche les ingédients dans la fenêtre Ingredient aprés lecture du JSON
          */
     void AfficherIngredient();
     /*!
          *  \brief Afficher temps
          *
          *  Affiche le temp après traitement.
         */
     void AfficherTemps();
     /*!
          *  \brief Destructeur
          *
          *  Destructeur de la classe MainWindow
          */

    ~MainWindow();

private:
    Ui::MainWindow *ui;/*!< Ui::MainWindow contenant l'UI*/
    Ui::FenetrePresentation presentation;/*!< Ui::FenetrePresentation contenant l'UI présentation*/
    Ui::FenetreEtapes etapes;/*!< Ui::FenetreEtapes contenant l'UI etapes*/

    LecteurJson Json;/*!< Instance de la classe LecteurJson*/
    traitement Trait;/*!< Instance de la classe traitement*/

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
    void ClearLabel();
};
#endif // MAINWINDOW_H
