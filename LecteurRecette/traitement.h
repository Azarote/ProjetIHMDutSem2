#ifndef TRAITEMENT_H
#define TRAITEMENT_H

/**
 * \file traitement.h
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Traitement donnée du programme
 *
 */
#include <QStringListModel>
#include "lecteurjson.h"

class traitement
{
private:
public:
    traitement();
    void traitementTemps(QStringList &, QStringList&, QStringList&, LecteurJson);

public slots:

};

#endif // TRAITEMENT_H
