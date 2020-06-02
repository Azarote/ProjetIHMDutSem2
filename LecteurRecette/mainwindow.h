/**
 * \file mainwindow.h
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Classe des différentes fenêtre
 *
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "lecteurjson.h"
#include "temps.h"
#include "ui_etapes.h"
#include "ui_presentation.h"

#include <QDebug>
#include <QDropEvent>
#include <QFile>
#include <QFileDialog>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QLabel>
#include <QListView>
#include <QMainWindow>
#include <QMessageBox>
#include <QMimeData>
#include <QStateMachine>
#include <QStringListModel>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/*! \class MainWindow
   * \brief classe qui gère l'affichage des différentes fenêtres
   *
   */
class MainWindow : public QMainWindow
{
    Q_OBJECT

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
    void dropEvent(QDropEvent*);

    QStateMachine *MachineEtapes;

    QWidget * WidgetEtape,* WidgetPresentation,* WidgetApropos;

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
          *  Fonction Qui affichee les fenêtres après lecture du JSON.
          */

     void AfficherFenetre();
     /*!
          *  \brief Afficher Présentation
          *
          *  Affiche le texte dans la fenêtre présentation après lecture du JSON.
          */

     void AfficherPresentation();
     /*!
          *  \brief Afficher Ingrédient
          *
          *  Affiche les ingédients dans la fenêtre Ingredient après lecture du JSON
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

public slots:
     /**
      * \fn Ouvrir
      * \brief Fonction qui permet d'ouvrir un fichier sur la fenêtre
      *
      * \param Qstring qui contient le chemin du fichier.
      */
    void Ouvrir(const QString &path = QString());
    /**
     * \fn Help
     * \brief Menu aide sur la fenêtre principal.
     *
     */
    void Help();
    /**
     * \fn AfficherEtape
     * \brief Fonction qui affiche les etapes de la recette.
     *
     */
    void AfficherEtape();
    /**
     * \fn Lancementlecture
     * \brief Fonction qui appelle la fonction qui traite le json + ouvre toutes les fenêtres nécéssaires.
     *
     * \param QString qui contient le chemin du fichier(reçue par la fonction ouvrir).
     */

    void Lancementlecture(QString);

signals:
    /**
     * \sa signal cheminfichier
     * \brief Signal qui indique qu'un fichier à été trouvé
     *
     * \param QString qui contient le chemin du fichier
     */

    void cheminFichier(QString);

    /**
     * \sa signal clearlabel
     * \brief Signal qui clear les numéro des étapes
     *
     *
     */
    void ClearLabel();
};
#endif // MAINWINDOW_H
