/********************************************************************************
** Form generated from reading UI file 'etapes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETAPES_H
#define UI_ETAPES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QListView *contenuTemps;
    QFrame *Separation1;
    QListView *contenuURL;
    QFrame *Separation2;
    QLabel *labelURL;
    QLabel *labelTpsTotal;
    QListWidget *contenuEtapes;

    void setupUi(QWidget *FenetreEtapes)
    {
        if (FenetreEtapes->objectName().isEmpty())
            FenetreEtapes->setObjectName(QString::fromUtf8("FenetreEtapes"));
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
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
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
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
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
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        FenetreEtapes->setPalette(palette);
        btnPrecedent = new QPushButton(FenetreEtapes);
        btnPrecedent->setObjectName(QString::fromUtf8("btnPrecedent"));
        btnPrecedent->setGeometry(QRect(95, 450, 305, 23));
        btnSuivant = new QPushButton(FenetreEtapes);
        btnSuivant->setObjectName(QString::fromUtf8("btnSuivant"));
        btnSuivant->setGeometry(QRect(400, 450, 305, 23));
        labelTpsCuisson = new QLabel(FenetreEtapes);
        labelTpsCuisson->setObjectName(QString::fromUtf8("labelTpsCuisson"));
        labelTpsCuisson->setGeometry(QRect(266, 533, 267, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Franklin Gothic Demi Cond"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        labelTpsCuisson->setFont(font);
        labelTpsCuisson->setAlignment(Qt::AlignCenter);
        labelTpsPreparation = new QLabel(FenetreEtapes);
        labelTpsPreparation->setObjectName(QString::fromUtf8("labelTpsPreparation"));
        labelTpsPreparation->setGeometry(QRect(0, 533, 266, 16));
        labelTpsPreparation->setFont(font);
        labelTpsPreparation->setAlignment(Qt::AlignCenter);
        contenuTemps = new QListView(FenetreEtapes);
        contenuTemps->setObjectName(QString::fromUtf8("contenuTemps"));
        contenuTemps->setGeometry(QRect(0, 530, 800, 50));
        Separation1 = new QFrame(FenetreEtapes);
        Separation1->setObjectName(QString::fromUtf8("Separation1"));
        Separation1->setGeometry(QRect(256, 540, 20, 31));
        Separation1->setFrameShape(QFrame::VLine);
        Separation1->setFrameShadow(QFrame::Sunken);
        contenuURL = new QListView(FenetreEtapes);
        contenuURL->setObjectName(QString::fromUtf8("contenuURL"));
        contenuURL->setGeometry(QRect(0, 580, 800, 20));
        Separation2 = new QFrame(FenetreEtapes);
        Separation2->setObjectName(QString::fromUtf8("Separation2"));
        Separation2->setGeometry(QRect(524, 540, 20, 31));
        Separation2->setFrameShape(QFrame::VLine);
        Separation2->setFrameShadow(QFrame::Sunken);
        labelURL = new QLabel(FenetreEtapes);
        labelURL->setObjectName(QString::fromUtf8("labelURL"));
        labelURL->setGeometry(QRect(0, 581, 51, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Franklin Gothic Demi Cond"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        labelURL->setFont(font1);
        labelURL->setAlignment(Qt::AlignCenter);
        labelTpsTotal = new QLabel(FenetreEtapes);
        labelTpsTotal->setObjectName(QString::fromUtf8("labelTpsTotal"));
        labelTpsTotal->setGeometry(QRect(534, 533, 266, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Franklin Gothic Demi Cond"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(true);
        labelTpsTotal->setFont(font2);
        labelTpsTotal->setAlignment(Qt::AlignCenter);
        contenuEtapes = new QListWidget(FenetreEtapes);
        contenuEtapes->setObjectName(QString::fromUtf8("contenuEtapes"));
        contenuEtapes->setGeometry(QRect(95, 20, 610, 430));
        contenuTemps->raise();
        btnPrecedent->raise();
        btnSuivant->raise();
        labelTpsCuisson->raise();
        labelTpsPreparation->raise();
        Separation1->raise();
        contenuURL->raise();
        Separation2->raise();
        labelURL->raise();
        labelTpsTotal->raise();
        contenuEtapes->raise();

        retranslateUi(FenetreEtapes);

        QMetaObject::connectSlotsByName(FenetreEtapes);
    } // setupUi

    void retranslateUi(QWidget *FenetreEtapes)
    {
        FenetreEtapes->setWindowTitle(QApplication::translate("FenetreEtapes", "\303\211tapes de r\303\251alisation", nullptr));
        btnPrecedent->setText(QApplication::translate("FenetreEtapes", "PushButton", nullptr));
        btnSuivant->setText(QApplication::translate("FenetreEtapes", "PushButton", nullptr));
        labelTpsCuisson->setText(QApplication::translate("FenetreEtapes", "Temps de cuisson", nullptr));
        labelTpsPreparation->setText(QApplication::translate("FenetreEtapes", "Temps de pr\303\251paration", nullptr));
        labelURL->setText(QApplication::translate("FenetreEtapes", "URL :", nullptr));
        labelTpsTotal->setText(QApplication::translate("FenetreEtapes", "Temps total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetreEtapes: public Ui_FenetreEtapes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETAPES_H
