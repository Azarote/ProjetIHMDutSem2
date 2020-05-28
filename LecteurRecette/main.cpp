/**
 * \file main.cpp
 * \author Munoz Matteo - Dufour Mattéo
 *
 * \brief Programme principal
 *
 */
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
