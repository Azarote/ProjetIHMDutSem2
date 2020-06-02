/**
 * \file lecteurjson.cpp
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Programme qui lit le fichier JSON et qui récupère les données
 *
 */
#include "lecteurjson.h"

/**
 * \fn LecteurJson::Lecteur
 * \brief Fonction qui extrait les différentes infos du fichier Json
 *
 * \param QString qui contient le chemin du fichier.
 */
void LecteurJson::Lecteur(QString nomFichier )
{
    //On réinitialise les infos par précaution
    InfosRecette.clear();
    Ingredients.clear();
    Etapes.clear();
    Temps.clear();
    URL.clear();

    QFile fichier(nomFichier);
    QJsonParseError error;

    if(fichier.open(QFile::ReadOnly)) {
        QByteArray donnees = fichier.readAll();                                             //On récupère le contenu dufichier Json
        QJsonDocument doc = QJsonDocument::fromJson(donnees, &error);

        if(error.error != QJsonParseError::NoError){                                        //En cas d'erreur lors de la lecture des données
            qCritical() << "Impossible d’interpréter le fichier : " << error.errorString();
        }
        else {                                                                              //Sinon on lance la lecture
            QJsonObject obj=doc.object();

            InfosRecette << (obj.value("name")).toString();                                 //Récupère le nom de la recette
            InfosRecette << "\nDescription : " << (obj.value("description")).toString();    //Récupère sa decription
            InfosRecette << "\nMot Clés : " << (obj.value("keywords")).toString();          //Récupère les mots-clés

            QJsonValue val = obj.value("recipeIngredient");                                 //Récupère les ingrédients
            QJsonArray valArray = val.toArray();

            Ingredients << "\n\n";                                                          //Mise en forme de l'affichage des ingrédients
            for (auto value: valArray)
                Ingredients << "- " + value.toString();

            val = obj.value("recipeInstructions");                                          //Récupère les étapes
            valArray = val.toArray();
            for (auto value: valArray)
                Etapes << value.toString();

            Temps <<  (obj.value("prepTime")).toString();                                   //Récupère les différents temps
            Temps <<  (obj.value("cookTime")).toString();
            Temps <<  (obj.value("totalTime")).toString();


            URL << "URL : " + (obj.value("url")).toString();                                //Récupère l'URL
        }
    }
    else {
        qCritical() << "Impossible de lire le fichier : " << error.errorString();
    }
}
