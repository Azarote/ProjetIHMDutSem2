#include "traitement.h"
#include "mainwindow.h"

traitement::traitement()
{

}

void traitement::traitementTemps(QStringList &contenuTempsPrep, QStringList &contenuTempsCuisson, QStringList &contenuTempsTotal)
{
    QString tempsPreparation = Json.getTemps()[0];               // Récupère le temps de préparation
    QString tempsCuisson = Json.getTemps()[1];                   // Récupère le temps de cuisson
    int tempsTotalHeures;                              // Choix de le calculer car le temps total n'est pas toujours spécifié
    int tempsTotalMinutes;                             // Choix de le calculer car le temps total n'est pas toujours spécifié
    QRegExp CalcHeures("([0-9]*)H");                   // Expréssion régulière pour récupérer les heures
    QRegExp CalcMinutes("([0-9]*)M");                  // Expréssion régulière pour récupérer les minutes
    CalcMinutes.indexIn(tempsPreparation);                                                                                                      // || Récupère le temps de préparation
    CalcHeures.indexIn(tempsPreparation);                                                                                                       // ||
    contenuTempsPrep << CalcHeures.cap(1) + " heures et " + CalcMinutes.cap(1) + " minutes";                       // \/
    tempsTotalHeures = (CalcHeures.cap(1)).toInt();        // || Pour calculer le temps total
    tempsTotalMinutes = (CalcMinutes.cap(1)).toInt();      // \/
    CalcMinutes.indexIn(tempsCuisson);                                                                                                          // || Récupère le temps de cuisson
    CalcHeures.indexIn(tempsCuisson);                                                                                                           // ||
    contenuTempsCuisson << CalcHeures.cap(1) + " heures et " + CalcMinutes.cap(1) + " minutes";                           // \/
    tempsTotalHeures += (CalcHeures.cap(1)).toInt();       // || Pour calculer le temps total
    tempsTotalMinutes += (CalcMinutes.cap(1)).toInt();     // \/
    contenuTempsTotal << QString::number(tempsTotalHeures) + " heures et " + QString::number(tempsTotalMinutes) + " minutes";// Récupère le temps total
}
