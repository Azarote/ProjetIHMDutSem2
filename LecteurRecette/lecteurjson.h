#ifndef LECTEURJSON_H
#define LECTEURJSON_H

#include <QJsonParseError>
#include <QJsonObject>
#include <QDebug>
#include <QJsonArray>
#include <QFile>

class LecteurJson
{
public:
    LecteurJson();
    void Lecteur(QString );
};

#endif // LECTEURJSON_H
