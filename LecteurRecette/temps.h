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
    traitement();
    void traitementTemps(QStringList &, QStringList&, QStringList&, LecteurJson);
};

#endif // TEMPS_H
