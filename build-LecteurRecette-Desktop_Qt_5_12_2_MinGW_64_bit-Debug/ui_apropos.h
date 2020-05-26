/********************************************************************************
** Form generated from reading UI file 'apropos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APROPOS_H
#define UI_APROPOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreApropos
{
public:

    void setupUi(QWidget *FenetreApropos)
    {
        if (FenetreApropos->objectName().isEmpty())
            FenetreApropos->setObjectName(QString::fromUtf8("FenetreApropos"));
        FenetreApropos->resize(800, 600);

        retranslateUi(FenetreApropos);

        QMetaObject::connectSlotsByName(FenetreApropos);
    } // setupUi

    void retranslateUi(QWidget *FenetreApropos)
    {
        FenetreApropos->setWindowTitle(QApplication::translate("FenetreApropos", "\303\200 propos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetreApropos: public Ui_FenetreApropos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APROPOS_H
