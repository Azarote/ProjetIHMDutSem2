#ifndef LECTEURJSON_H
#define LECTEURJSON_H

#include <QJsonParseError>
#include <QJsonObject>
#include <QDebug>
#include <QJsonArray>
#include <QFile>
#include <string>
#include <QStringListModel>


class LecteurJson
{
private:
    QStringList InfosRecette,Temps,Ingredients,Etapes,URL;
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
