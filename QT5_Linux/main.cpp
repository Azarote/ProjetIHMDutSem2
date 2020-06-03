/**
 * \file main.cpp
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Programme principal
 *
 */
#include "mainwindow.h"

#include <QApplication>

/**
 * \fn int main
 * \brief Fonction de création d'une nouvelle instance d'une MainWindow.
 *
 * \param argc int
 * \param argv[] Pointeur sur char
 * \return int
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //Création de l'application
    MainWindow w;
    w.show();                   //Affichage
    return a.exec();
}
