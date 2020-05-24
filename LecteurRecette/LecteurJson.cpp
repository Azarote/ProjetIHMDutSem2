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

           //qDebug() << doc.isObject();

           QJsonObject obj=doc.object();
           //qDebug() << obj;

           qDebug() << "Nom " << (obj.value("name")).toString();
           qDebug() << "Description : " << (obj.value("description")).toString();
           QJsonValue val = obj.value("recipeIngredient");
           //qDebug() << val.isArray();

           QJsonArray valArray = val.toArray();
           for (auto value: valArray)
               qDebug() << "ingredient " << value.toString();

           val = obj.value("recipeInstructions");
           valArray = val.toArray();
           for (auto value: valArray)
               qDebug() << "instruction " << value.toString();

           qDebug() << "Total time : " << (obj.value("totalTime")).toString();
           qDebug() << "URL : " << (obj.value("url")).toString();

       }
    }
    else {
        qCritical() << "Impossible de lire le fichier : " << error.errorString();
    }

}
