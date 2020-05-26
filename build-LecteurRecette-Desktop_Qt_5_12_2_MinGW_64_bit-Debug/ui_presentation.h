/********************************************************************************
** Form generated from reading UI file 'presentation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESENTATION_H
#define UI_PRESENTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QFrame *Separation1;
    QFrame *Separation2;
    QLabel *labelURL;
    QListView *contenuTemps;
    QListView *contenuURL;

    void setupUi(QWidget *FenetrePresentation)
    {
        if (FenetrePresentation->objectName().isEmpty())
            FenetrePresentation->setObjectName(QString::fromUtf8("FenetrePresentation"));
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
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
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
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
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
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        FenetrePresentation->setPalette(palette);
        Onglets = new QTabWidget(FenetrePresentation);
        Onglets->setObjectName(QString::fromUtf8("Onglets"));
        Onglets->setGeometry(QRect(0, 0, 800, 530));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush6(QColor(202, 220, 224, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush7(QColor(228, 237, 239, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(101, 110, 112, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(135, 147, 149, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        Onglets->setPalette(palette1);
        Onglets->setCursor(QCursor(Qt::ArrowCursor));
        Onglets->setIconSize(QSize(16, 16));
        Onglets->setDocumentMode(false);
        Onglets->setTabsClosable(false);
        Onglets->setMovable(false);
        Onglets->setTabBarAutoHide(false);
        ongletPresentation = new QWidget();
        ongletPresentation->setObjectName(QString::fromUtf8("ongletPresentation"));
        ongletPresentation->setAutoFillBackground(true);
        contenuPresentation = new QListWidget(ongletPresentation);
        contenuPresentation->setObjectName(QString::fromUtf8("contenuPresentation"));
        contenuPresentation->setGeometry(QRect(95, 20, 610, 430));
        Onglets->addTab(ongletPresentation, QString());
        ongletIngredients = new QWidget();
        ongletIngredients->setObjectName(QString::fromUtf8("ongletIngredients"));
        ongletIngredients->setAutoFillBackground(true);
        msgIngredients = new QLabel(ongletIngredients);
        msgIngredients->setObjectName(QString::fromUtf8("msgIngredients"));
        msgIngredients->setEnabled(true);
        msgIngredients->setGeometry(QRect(290, 20, 220, 60));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(msgIngredients->sizePolicy().hasHeightForWidth());
        msgIngredients->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Franklin Gothic Demi Cond"));
        font.setPointSize(31);
        font.setBold(true);
        font.setWeight(75);
        msgIngredients->setFont(font);
        msgIngredients->setAlignment(Qt::AlignCenter);
        contenuIngredients = new QListWidget(ongletIngredients);
        contenuIngredients->setObjectName(QString::fromUtf8("contenuIngredients"));
        contenuIngredients->setGeometry(QRect(95, 20, 610, 430));
        Onglets->addTab(ongletIngredients, QString());
        contenuIngredients->raise();
        msgIngredients->raise();
        labelTpsPreparation = new QLabel(FenetrePresentation);
        labelTpsPreparation->setObjectName(QString::fromUtf8("labelTpsPreparation"));
        labelTpsPreparation->setGeometry(QRect(0, 533, 266, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Franklin Gothic Demi Cond"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        labelTpsPreparation->setFont(font1);
        labelTpsPreparation->setAlignment(Qt::AlignCenter);
        labelTpsCuisson = new QLabel(FenetrePresentation);
        labelTpsCuisson->setObjectName(QString::fromUtf8("labelTpsCuisson"));
        labelTpsCuisson->setGeometry(QRect(266, 533, 267, 16));
        labelTpsCuisson->setFont(font1);
        labelTpsCuisson->setAlignment(Qt::AlignCenter);
        labelTpsTotal = new QLabel(FenetrePresentation);
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
        Separation1 = new QFrame(FenetrePresentation);
        Separation1->setObjectName(QString::fromUtf8("Separation1"));
        Separation1->setGeometry(QRect(256, 540, 20, 31));
        Separation1->setFrameShape(QFrame::VLine);
        Separation1->setFrameShadow(QFrame::Sunken);
        Separation2 = new QFrame(FenetrePresentation);
        Separation2->setObjectName(QString::fromUtf8("Separation2"));
        Separation2->setGeometry(QRect(524, 540, 20, 31));
        Separation2->setFrameShape(QFrame::VLine);
        Separation2->setFrameShadow(QFrame::Sunken);
        labelURL = new QLabel(FenetrePresentation);
        labelURL->setObjectName(QString::fromUtf8("labelURL"));
        labelURL->setGeometry(QRect(0, 581, 51, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Franklin Gothic Demi Cond"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        labelURL->setFont(font3);
        labelURL->setAlignment(Qt::AlignCenter);
        contenuTemps = new QListView(FenetrePresentation);
        contenuTemps->setObjectName(QString::fromUtf8("contenuTemps"));
        contenuTemps->setGeometry(QRect(0, 530, 800, 50));
        contenuURL = new QListView(FenetrePresentation);
        contenuURL->setObjectName(QString::fromUtf8("contenuURL"));
        contenuURL->setGeometry(QRect(0, 580, 800, 20));
        contenuURL->raise();
        contenuTemps->raise();
        labelTpsPreparation->raise();
        labelTpsCuisson->raise();
        labelTpsTotal->raise();
        Separation1->raise();
        Separation2->raise();
        labelURL->raise();
        Onglets->raise();

        retranslateUi(FenetrePresentation);

        Onglets->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FenetrePresentation);
    } // setupUi

    void retranslateUi(QWidget *FenetrePresentation)
    {
        FenetrePresentation->setWindowTitle(QApplication::translate("FenetrePresentation", "Pr\303\251sentation de la recette", nullptr));
        Onglets->setTabText(Onglets->indexOf(ongletPresentation), QApplication::translate("FenetrePresentation", "Pr\303\251sentation", nullptr));
        msgIngredients->setText(QApplication::translate("FenetrePresentation", "Ingr\303\251dients", nullptr));
        Onglets->setTabText(Onglets->indexOf(ongletIngredients), QApplication::translate("FenetrePresentation", "Ingr\303\251dients", nullptr));
        labelTpsPreparation->setText(QApplication::translate("FenetrePresentation", "Temps de pr\303\251paration", nullptr));
        labelTpsCuisson->setText(QApplication::translate("FenetrePresentation", "Temps de cuisson", nullptr));
        labelTpsTotal->setText(QApplication::translate("FenetrePresentation", "Temps total", nullptr));
        labelURL->setText(QApplication::translate("FenetrePresentation", "URL :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetrePresentation: public Ui_FenetrePresentation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESENTATION_H
