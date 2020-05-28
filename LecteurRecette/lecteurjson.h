#ifndef LECTEURJSON_H
#define LECTEURJSON_H
/**
 * \file lecteurjson.h
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Récupération des éléments souhaiter dans le JSON
 *
 */
#include <QJsonParseError>
#include <QJsonObject>
#include <QDebug>
#include <QJsonArray>
#include <QFile>
#include <string>
#include <QString>
#include <QStringListModel>


class LecteurJson
{
private:
    QStringList InfosRecette,Ingredients,Etapes,URL,Temps;
public:
    LecteurJson();
    void Lecteur(QString );

    inline QStringList getInfosRecette(){ return InfosRecette;}
    inline QStringList getTemps(){ return Temps;}
    inline QStringList getIngredients(){ return Ingredients;}
    inline QStringList getEtapes(){ return Etapes;}
    inline QString getUpdateEtapes(int i){ return Etapes.at(i);}
    inline QStringList getURL(){ return URL;}

};

#endif // LECTEURJSON_H
