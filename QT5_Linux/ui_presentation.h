/********************************************************************************
** Form generated from reading UI file 'presentation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESENTATION_H
#define UI_PRESENTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetrePresentation
{
public:
    QTabWidget *Onglets;
    QWidget *ongletPresentation;
    QListWidget *contenuPresentation;
    QWidget *ongletIngredients;
    QLabel *msgIngredients;
    QListWidget *contenuIngredients;
    QLabel *labelTpsPreparation;
    QLabel *labelTpsCuisson;
    QLabel *labelTpsTotal;
    QListView *contenuTempsPrep;
    QListView *contenuURL;
    QListView *contenuTempsCuisson;
    QListView *contenuTempsTotal;

    void setupUi(QWidget *FenetrePresentation)
    {
        if (FenetrePresentation->objectName().isEmpty())
            FenetrePresentation->setObjectName(QStringLiteral("FenetrePresentation"));
        FenetrePresentation->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        FenetrePresentation->setPalette(palette);
        Onglets = new QTabWidget(FenetrePresentation);
        Onglets->setObjectName(QStringLiteral("Onglets"));
        Onglets->setGeometry(QRect(0, 0, 800, 556));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush5(QColor(202, 220, 224, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush6(QColor(228, 237, 239, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush7(QColor(101, 110, 112, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(135, 147, 149, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Onglets->setPalette(palette1);
        Onglets->setCursor(QCursor(Qt::ArrowCursor));
        Onglets->setIconSize(QSize(16, 16));
        Onglets->setDocumentMode(false);
        Onglets->setTabsClosable(false);
        Onglets->setMovable(false);
        Onglets->setTabBarAutoHide(false);
        ongletPresentation = new QWidget();
        ongletPresentation->setObjectName(QStringLiteral("ongletPresentation"));
        ongletPresentation->setAutoFillBackground(true);
        contenuPresentation = new QListWidget(ongletPresentation);
        contenuPresentation->setObjectName(QStringLiteral("contenuPresentation"));
        contenuPresentation->setGeometry(QRect(95, 20, 610, 430));
        contenuPresentation->setTextElideMode(Qt::ElideNone);
        contenuPresentation->setWordWrap(true);
        Onglets->addTab(ongletPresentation, QString());
        ongletIngredients = new QWidget();
        ongletIngredients->setObjectName(QStringLiteral("ongletIngredients"));
        ongletIngredients->setAutoFillBackground(true);
        msgIngredients = new QLabel(ongletIngredients);
        msgIngredients->setObjectName(QStringLiteral("msgIngredients"));
        msgIngredients->setEnabled(true);
        msgIngredients->setGeometry(QRect(255, 20, 290, 60));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(msgIngredients->sizePolicy().hasHeightForWidth());
        msgIngredients->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Franklin Gothic Demi Cond"));
        font.setPointSize(31);
        font.setBold(true);
        font.setWeight(75);
        msgIngredients->setFont(font);
        msgIngredients->setAlignment(Qt::AlignCenter);
        contenuIngredients = new QListWidget(ongletIngredients);
        contenuIngredients->setObjectName(QStringLiteral("contenuIngredients"));
        contenuIngredients->setGeometry(QRect(95, 20, 610, 430));
        Onglets->addTab(ongletIngredients, QString());
        contenuIngredients->raise();
        msgIngredients->raise();
        labelTpsPreparation = new QLabel(FenetrePresentation);
        labelTpsPreparation->setObjectName(QStringLiteral("labelTpsPreparation"));
        labelTpsPreparation->setGeometry(QRect(0, 533, 266, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        labelTpsPreparation->setFont(font1);
        labelTpsPreparation->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelTpsCuisson = new QLabel(FenetrePresentation);
        labelTpsCuisson->setObjectName(QStringLiteral("labelTpsCuisson"));
        labelTpsCuisson->setGeometry(QRect(266, 533, 267, 16));
        labelTpsCuisson->setFont(font1);
        labelTpsCuisson->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelTpsTotal = new QLabel(FenetrePresentation);
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
        contenuTempsPrep = new QListView(FenetrePresentation);
        contenuTempsPrep->setObjectName(QStringLiteral("contenuTempsPrep"));
        contenuTempsPrep->setGeometry(QRect(0, 555, 266, 25));
        contenuURL = new QListView(FenetrePresentation);
        contenuURL->setObjectName(QStringLiteral("contenuURL"));
        contenuURL->setGeometry(QRect(0, 580, 800, 20));
        contenuTempsCuisson = new QListView(FenetrePresentation);
        contenuTempsCuisson->setObjectName(QStringLiteral("contenuTempsCuisson"));
        contenuTempsCuisson->setGeometry(QRect(266, 555, 267, 25));
        contenuTempsTotal = new QListView(FenetrePresentation);
        contenuTempsTotal->setObjectName(QStringLiteral("contenuTempsTotal"));
        contenuTempsTotal->setGeometry(QRect(533, 555, 266, 25));
        Onglets->raise();
        contenuTempsTotal->raise();
        contenuTempsCuisson->raise();
        contenuURL->raise();
        contenuTempsPrep->raise();
        labelTpsPreparation->raise();
        labelTpsCuisson->raise();
        labelTpsTotal->raise();

        retranslateUi(FenetrePresentation);

        Onglets->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FenetrePresentation);
    } // setupUi

    void retranslateUi(QWidget *FenetrePresentation)
    {
        FenetrePresentation->setWindowTitle(QApplication::translate("FenetrePresentation", "Pr\303\251sentation de la recette", Q_NULLPTR));
        Onglets->setTabText(Onglets->indexOf(ongletPresentation), QApplication::translate("FenetrePresentation", "Pr\303\251sentation", Q_NULLPTR));
        msgIngredients->setText(QApplication::translate("FenetrePresentation", "Ingr\303\251dients", Q_NULLPTR));
        Onglets->setTabText(Onglets->indexOf(ongletIngredients), QApplication::translate("FenetrePresentation", "Ingr\303\251dients", Q_NULLPTR));
        labelTpsPreparation->setText(QApplication::translate("FenetrePresentation", "Temps de pr\303\251paration", Q_NULLPTR));
        labelTpsCuisson->setText(QApplication::translate("FenetrePresentation", "Temps de cuisson", Q_NULLPTR));
        labelTpsTotal->setText(QApplication::translate("FenetrePresentation", "Temps total", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FenetrePresentation: public Ui_FenetrePresentation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESENTATION_H
