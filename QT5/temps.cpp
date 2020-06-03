/**
 * \file temps.cpp
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Programme qui s'occupe du traitement du temps
 *
 */
#include "temps.h"
#include "mainwindow.h"


void traitement::traitementTemps(QStringList &contenuTempsPrep, QStringList &contenuTempsCuisson, QStringList &contenuTempsTotal,LecteurJson Json)
{
    QString tempsPreparation = Json.getTemps().at(0); //Récupère le temps de préparation
    QString tempsCuisson = Json.getTemps().at(1); //Récupère le temps de cuisson
    QRegExp CalcHeures("([0-9]*)H"); //Paramètre l'affichage des heures
    QRegExp CalcMinutes("([0-9]*)M"); //Paramètre l'affichage des minutes
    int tempsTotalHeures;
    int tempsTotalMinutes;

    //Récupère les minutes et les heures séparément pour le temps de préparation
    CalcMinutes.indexIn(tempsPreparation);
    CalcHeures.indexIn(tempsPreparation);

    /*Si les heures ne sont pas spécifiées ou si elles sont égales à zéro,
     * on affiche uniquement les minutes pour ne pas surcharger l'affichage */
    if (CalcHeures.cap(1) == "" || CalcHeures.cap(1) == "0"){
        contenuTempsPrep << CalcMinutes.cap(1) + " minutes";
    }
    else {
      contenuTempsPrep << CalcHeures.cap(1) + " heures et " + CalcMinutes.cap(1) + " minutes"; //Sinon on affiche le temps complet
    }

    //On met à jour le temps total qui contient pour l'instant le temps de préparation
    tempsTotalHeures = (CalcHeures.cap(1)).toInt();
    tempsTotalMinutes = (CalcMinutes.cap(1)).toInt();

    //Récupère les minutes et les heures séparément pour le temps de cuisson
    CalcMinutes.indexIn(tempsCuisson);
    CalcHeures.indexIn(tempsCuisson);

    /*Si les heures ne sont pas spécifiées ou si elles sont égales à zéro,
     * on affiche uniquement les minutes pour ne pas surcharger l'affichage */
    if (CalcHeures.cap(1) == "" || CalcHeures.cap(1) == "0"){
        contenuTempsCuisson << CalcMinutes.cap(1) + " minutes";
    }
    else {
        contenuTempsCuisson << CalcHeures.cap(1) + " heures et " + CalcMinutes.cap(1) + " minutes"; //Sinon on affiche le temps complet
    }

    //On met à jour le temps total qui contient le temps de préparation + le temps de cuisson
    tempsTotalHeures += (CalcHeures.cap(1)).toInt();
    tempsTotalMinutes += (CalcMinutes.cap(1)).toInt();

    if (tempsTotalHeures == 0){
    contenuTempsTotal << QString::number(tempsTotalMinutes) + " minutes"; //Si les heures totales valent zéro, on affiche uniquement les minutes
    }
    else {
    contenuTempsTotal << QString::number(tempsTotalHeures) + " heures et " + QString::number(tempsTotalMinutes) + " minutes"; //Sinon on affiche le temps total
    }
}
