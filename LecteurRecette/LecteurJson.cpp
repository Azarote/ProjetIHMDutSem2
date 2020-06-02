/**
 * \file lecteurjson.cpp
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Programme qui lit le fichier JSON et qui récupère les données
 *
 */
#include "lecteurjson.h"

void LecteurJson::Lecteur(QString nomFichier )
{
    InfosRecette.clear();
    Ingredients.clear();
    Etapes.clear();
    Temps.clear();
    URL.clear();

    QFile fichier(nomFichier);
    QJsonParseError error;

    if(fichier.open(QFile::ReadOnly)) {
        QByteArray donnees = fichier.readAll();
        QJsonDocument doc = QJsonDocument::fromJson(donnees, &error);

        if(error.error != QJsonParseError::NoError){
            qCritical() << "Impossible d’interpréter le fichier : " << error.errorString();
        }
        else {
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

            Temps <<  (obj.value("prepTime")).toString();
            Temps <<  (obj.value("cookTime")).toString();
            Temps <<  (obj.value("totalTime")).toString();


            URL << "URL : " + (obj.value("url")).toString();
        }
    }
    else {
        qCritical() << "Impossible de lire le fichier : " << error.errorString();
    }
}
