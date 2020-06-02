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
    void Lecteur(QString );

    inline QStringList getInfosRecette(){ return InfosRecette;}
    inline QStringList getTemps(){ return Temps;}
    inline QStringList getIngredients(){ return Ingredients;}
    inline QStringList getEtapes(){ return Etapes;}
    inline QString getUpdateEtapes(int i){ return Etapes.at(i);}
    inline QStringList getURL(){ return URL;}
};

#endif // LECTEURJSON_H
