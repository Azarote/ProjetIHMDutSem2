/********************************************************************************
** Form generated from reading UI file 'etapes.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETAPES_H
#define UI_ETAPES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreEtapes
{
public:
    QPushButton *btnPrecedent;
    QPushButton *btnSuivant;
    QLabel *labelTpsCuisson;
    QLabel *labelTpsPreparation;
    QListView *contenuURL;
    QLabel *labelTpsTotal;
    QListWidget *contenuEtapes;
    QLabel *label;
    QLabel *label_2;
    QListView *contenuTempsCuisson;
    QListView *contenuTempsTotal;
    QListView *contenuTempsPrep;

    void setupUi(QWidget *FenetreEtapes)
    {
        if (FenetreEtapes->objectName().isEmpty())
            FenetreEtapes->setObjectName(QStringLiteral("FenetreEtapes"));
        FenetreEtapes->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(220, 220, 220, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(237, 237, 237, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(110, 110, 110, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(147, 147, 147, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        FenetreEtapes->setPalette(palette);
        btnPrecedent = new QPushButton(FenetreEtapes);
        btnPrecedent->setObjectName(QStringLiteral("btnPrecedent"));
        btnPrecedent->setGeometry(QRect(95, 450, 305, 23));
        btnSuivant = new QPushButton(FenetreEtapes);
        btnSuivant->setObjectName(QStringLiteral("btnSuivant"));
        btnSuivant->setGeometry(QRect(400, 450, 305, 23));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        btnSuivant->setFont(font);
        labelTpsCuisson = new QLabel(FenetreEtapes);
        labelTpsCuisson->setObjectName(QStringLiteral("labelTpsCuisson"));
        labelTpsCuisson->setGeometry(QRect(266, 533, 267, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        labelTpsCuisson->setFont(font1);
        labelTpsCuisson->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelTpsPreparation = new QLabel(FenetreEtapes);
        labelTpsPreparation->setObjectName(QStringLiteral("labelTpsPreparation"));
        labelTpsPreparation->setGeometry(QRect(0, 533, 266, 16));
        labelTpsPreparation->setFont(font1);
        labelTpsPreparation->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        contenuURL = new QListView(FenetreEtapes);
        contenuURL->setObjectName(QStringLiteral("contenuURL"));
        contenuURL->setGeometry(QRect(0, 580, 800, 20));
        labelTpsTotal = new QLabel(FenetreEtapes);
        labelTpsTotal->setObjectName(QStringLiteral("labelTpsTotal"));
        labelTpsTotal->setGeometry(QRect(534, 533, 266, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(true);
        labelTpsTotal->setFont(font2);
        labelTpsTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        contenuEtapes = new QListWidget(FenetreEtapes);
        contenuEtapes->setObjectName(QStringLiteral("contenuEtapes"));
        contenuEtapes->setGeometry(QRect(95, 20, 610, 430));
        contenuEtapes->setTextElideMode(Qt::ElideNone);
        contenuEtapes->setProperty("isWrapping", QVariant(false));
        contenuEtapes->setWordWrap(true);
        label = new QLabel(FenetreEtapes);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 230, 47, 13));
        label_2 = new QLabel(FenetreEtapes);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 492, 121, 21));
        contenuTempsCuisson = new QListView(FenetreEtapes);
        contenuTempsCuisson->setObjectName(QStringLiteral("contenuTempsCuisson"));
        contenuTempsCuisson->setGeometry(QRect(266, 555, 267, 25));
        contenuTempsTotal = new QListView(FenetreEtapes);
        contenuTempsTotal->setObjectName(QStringLiteral("contenuTempsTotal"));
        contenuTempsTotal->setGeometry(QRect(533, 555, 266, 25));
        contenuTempsPrep = new QListView(FenetreEtapes);
        contenuTempsPrep->setObjectName(QStringLiteral("contenuTempsPrep"));
        contenuTempsPrep->setGeometry(QRect(0, 555, 266, 25));
        contenuTempsPrep->raise();
        contenuTempsCuisson->raise();
        contenuTempsTotal->raise();
        btnPrecedent->raise();
        btnSuivant->raise();
        labelTpsCuisson->raise();
        labelTpsPreparation->raise();
        contenuURL->raise();
        labelTpsTotal->raise();
        contenuEtapes->raise();
        label->raise();
        label_2->raise();

        retranslateUi(FenetreEtapes);

        QMetaObject::connectSlotsByName(FenetreEtapes);
    } // setupUi

    void retranslateUi(QWidget *FenetreEtapes)
    {
        FenetreEtapes->setWindowTitle(QApplication::translate("FenetreEtapes", "\303\211tapes de r\303\251alisation", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        btnPrecedent->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        btnPrecedent->setText(QApplication::translate("FenetreEtapes", "\342\206\220 Instruction pr\303\251c\303\251dente", Q_NULLPTR));
        btnSuivant->setText(QApplication::translate("FenetreEtapes", "Instruction suivante \342\206\222", Q_NULLPTR));
        labelTpsCuisson->setText(QApplication::translate("FenetreEtapes", "Temps de cuisson", Q_NULLPTR));
        labelTpsPreparation->setText(QApplication::translate("FenetreEtapes", "Temps de pr\303\251paration", Q_NULLPTR));
        labelTpsTotal->setText(QApplication::translate("FenetreEtapes", "Temps total", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FenetreEtapes: public Ui_FenetreEtapes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETAPES_H
