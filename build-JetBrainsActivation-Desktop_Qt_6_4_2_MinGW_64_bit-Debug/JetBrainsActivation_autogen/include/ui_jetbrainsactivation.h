/********************************************************************************
** Form generated from reading UI file 'jetbrainsactivation.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JETBRAINSACTIVATION_H
#define UI_JETBRAINSACTIVATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JetBrainsActivation
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JetBrainsActivation)
    {
        if (JetBrainsActivation->objectName().isEmpty())
            JetBrainsActivation->setObjectName("JetBrainsActivation");
        JetBrainsActivation->resize(800, 600);
        centralwidget = new QWidget(JetBrainsActivation);
        centralwidget->setObjectName("centralwidget");
        JetBrainsActivation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JetBrainsActivation);
        menubar->setObjectName("menubar");
        JetBrainsActivation->setMenuBar(menubar);
        statusbar = new QStatusBar(JetBrainsActivation);
        statusbar->setObjectName("statusbar");
        JetBrainsActivation->setStatusBar(statusbar);

        retranslateUi(JetBrainsActivation);

        QMetaObject::connectSlotsByName(JetBrainsActivation);
    } // setupUi

    void retranslateUi(QMainWindow *JetBrainsActivation)
    {
        JetBrainsActivation->setWindowTitle(QCoreApplication::translate("JetBrainsActivation", "JetBrainsActivation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JetBrainsActivation: public Ui_JetBrainsActivation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JETBRAINSACTIVATION_H
