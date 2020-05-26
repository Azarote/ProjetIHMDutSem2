#ifndef TRAITEMENT_H
#define TRAITEMENT_H

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
