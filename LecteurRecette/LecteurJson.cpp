#include "lecteurjson.h"

LecteurJson::LecteurJson()
{

}

void LecteurJson::Lecteur(QString nomFichier ){
    InfosRecette.clear();
    Ingredients.clear();
    Etapes.clear();
    TempsTot.clear();
    TempsPrep.clear();
    Tempscuisson.clear();
    URL.clear();


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
           InfosRecette << "\nDescription : " << (obj.value("description")).toString();
           InfosRecette << "\nMot Clés : " << (obj.value("keywords")).toString();

           QJsonValue val = obj.value("recipeIngredient");
           QJsonArray valArray = val.toArray();

           Ingredients << "\n\n";
           for (auto value: valArray)
               Ingredients << "- " + value.toString();

           val = obj.value("recipeInstructions");
           valArray = val.toArray();
           for (auto value: valArray)
               Etapes << value.toString();

           TempsPrep <<  (obj.value("prepTime")).toString();
           Tempscuisson <<  (obj.value("cookTimes")).toString();
           TempsTot <<  (obj.value("totalTime")).toString();

           URL << "URL : " + (obj.value("url")).toString();

       }
    }
    else {
        qCritical() << "Impossible de lire le fichier : " << error.errorString();
    }

}
