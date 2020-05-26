#ifndef TRAITEMENT_H
#define TRAITEMENT_H

#include <QStringListModel>
#include <lecteurjson.h>

class traitement
{
private:
    LecteurJson Json;
public:
    traitement();

public slots:
    void traitementTemps(QStringList &, QStringList&, QStringList&);
};

#endif // TRAITEMENT_H
