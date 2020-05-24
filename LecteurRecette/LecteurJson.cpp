#include "lecteurjson.h"

LecteurJson::LecteurJson()
{

}

void LecteurJson::Lecteur(QString nomFichier ){


    QFile fichier(nomFichier);
    QJsonParseError error;

    if(fichier.open(QFile::ReadOnly)) {
       QByteArray donnees = fichier.readAll();

       QJsonDocument doc = QJsonDocument::fromJson(donnees, &error);
       if(error.error != QJsonParseError::NoError)
       {
           qCritical() << "Impossible d’interpréter le fichier : " << error.errorString();
       }
       else
       {
           QJsonObject obj=doc.object();


           InfosRecette << (obj.value("name")).toString();
           InfosRecette << "Description : " << (obj.value("description")).toString();
           InfosRecette << "Catégorie : " << (obj.value("recipeCategory")).toString();
           InfosRecette << "Mot Clés : " << (obj.value("keywords")).toString();

           QJsonValue val = obj.value("recipeIngredient");
           QJsonArray valArray = val.toArray();

           for (auto value: valArray)
               Ingredients << value.toString();

           val = obj.value("recipeInstructions");
           valArray = val.toArray();
           for (auto value: valArray)
               Etapes << "instruction " << value.toString();

           Temps <<  (obj.value("prepTime")).toString();
           Temps <<  (obj.value("cookTimes")).toString();

           Temps << "Temps total : " << (obj.value("totalTime")).toString();
           URL << "URL : " << (obj.value("url")).toString();

       }
    }
    else {
        qCritical() << "Impossible de lire le fichier : " << error.errorString();
    }

}
