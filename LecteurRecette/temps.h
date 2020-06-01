#ifndef TEMPS_H
#define TEMPS_H

/**
 * \file temps.h
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Traitement donnée du programme
 *
 */
#include "lecteurjson.h"

class traitement
{
public:
    /**
     * \fn Traitement temps pour affichage
     * \brief Fonction qui calcul le temps
     * \showrefs
     *
     * \param Tous les QStringList en passage par adresse qui récupère le temps
     * \param instance de la classe LecteurJson qui contient les temps.
     * \return Modifie les variable qui contient maintenant le temps sous forme compréhensible.
     */
    void traitementTemps(QStringList &, QStringList&, QStringList&, LecteurJson);
};

#endif // TEMPS_H
