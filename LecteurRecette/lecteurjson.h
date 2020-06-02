/**
 * \file lecteurjson.h
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Récupération des éléments souhaiter dans le JSON
 *
 */
#ifndef LECTEURJSON_H
#define LECTEURJSON_H

#include <QDebug>
#include <QFile>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonParseError>
#include <QString>
#include <QStringListModel>

/*! \class LecteurJson
   * \brief classe qui permet la lecture d'un fichier JSON
   *
   */
class LecteurJson
{
private:
    QStringList InfosRecette,Ingredients,Etapes,URL,Temps;

public:
    /**
     * \fn Lecteur
     * \brief Fonction qui lis le fichier Json.
     *
     * \param QString qui contient le chemin du fichier.
     */
    void Lecteur(QString );

    /**
     * \fn Lancementlecture
     * \brief Fonction qui appelle la fonction qui traite le json + ouvre toutes les fenêtres nécéssaires.
     *
     * \param QString qui contient le chemin du fichier(reçue par la fonction ouvrir).
     */
    inline QStringList getInfosRecette(){ return InfosRecette;}/*!< QStringList qui retourne les infos de la recette*/
    inline QStringList getTemps(){ return Temps;}/*!< QStringList qui retourne les temps de la recette*/
    inline QStringList getIngredients(){ return Ingredients;}/*!< QStringList qui retourne les ingredients de la recette*/
    inline QStringList getEtapes(){ return Etapes;}/*!< QStringList qui retourne les etapes de la recette*/
    inline QString getUpdateEtapes(int i){ return Etapes.at(i);}/*!< QString qui retourne le numéro de l'étape*/
    inline QStringList getURL(){ return URL;}/*!< QStringList qui retourne l'URL de la recette */
};

#endif // LECTEURJSON_H
