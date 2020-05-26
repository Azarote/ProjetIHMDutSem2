#ifndef LECTEURJSON_H
#define LECTEURJSON_H

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
    QStringList InfosRecette,Ingredients,Etapes,URL,Tempscuisson,TempsPrep,TempsTot;
public:
    LecteurJson();
    void Lecteur(QString );

    inline QStringList getInfosRecette(){ return InfosRecette;}
    inline QStringList getTempscuisson(){ return Tempscuisson;}
    inline QStringList getTempsprep(){ return TempsPrep;}
    inline QStringList getTempstot(){ return TempsTot;}
    inline QStringList getIngredients(){ return Ingredients;}
    inline QStringList getEtapes(){ return Etapes;}
    inline QString getUpdateEtapes(int i){ return Etapes.at(i);}
    inline QStringList getURL(){ return URL;}

};

#endif // LECTEURJSON_H
