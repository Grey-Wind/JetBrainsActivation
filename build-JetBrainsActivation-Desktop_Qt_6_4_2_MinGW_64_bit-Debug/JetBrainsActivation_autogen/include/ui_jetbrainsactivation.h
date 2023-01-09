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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JetBrainsActivation
{
public:
    QWidget *centralwidget;
    QLabel *Title;
    QPushButton *CLion;
    QPushButton *DataGrip;
    QPushButton *GoLand;
    QPushButton *IDEA;
    QPushButton *PhpStorm;
    QPushButton *PyCharm;
    QPushButton *WebStorm;
    QLabel *warning1;
    QLabel *warning2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JetBrainsActivation)
    {
        if (JetBrainsActivation->objectName().isEmpty())
            JetBrainsActivation->setObjectName("JetBrainsActivation");
        JetBrainsActivation->resize(311, 230);
        centralwidget = new QWidget(JetBrainsActivation);
        centralwidget->setObjectName("centralwidget");
        Title = new QLabel(centralwidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(60, 0, 211, 21));
        QFont font;
        font.setPointSize(14);
        Title->setFont(font);
        CLion = new QPushButton(centralwidget);
        CLion->setObjectName("CLion");
        CLion->setGeometry(QRect(10, 30, 93, 29));
        DataGrip = new QPushButton(centralwidget);
        DataGrip->setObjectName("DataGrip");
        DataGrip->setGeometry(QRect(110, 30, 93, 29));
        GoLand = new QPushButton(centralwidget);
        GoLand->setObjectName("GoLand");
        GoLand->setGeometry(QRect(210, 30, 93, 29));
        IDEA = new QPushButton(centralwidget);
        IDEA->setObjectName("IDEA");
        IDEA->setGeometry(QRect(10, 70, 93, 29));
        PhpStorm = new QPushButton(centralwidget);
        PhpStorm->setObjectName("PhpStorm");
        PhpStorm->setGeometry(QRect(110, 70, 93, 29));
        PyCharm = new QPushButton(centralwidget);
        PyCharm->setObjectName("PyCharm");
        PyCharm->setGeometry(QRect(210, 70, 93, 29));
        WebStorm = new QPushButton(centralwidget);
        WebStorm->setObjectName("WebStorm");
        WebStorm->setGeometry(QRect(10, 110, 93, 29));
        warning1 = new QLabel(centralwidget);
        warning1->setObjectName("warning1");
        warning1->setGeometry(QRect(10, 140, 261, 20));
        warning2 = new QLabel(centralwidget);
        warning2->setObjectName("warning2");
        warning2->setGeometry(QRect(10, 160, 291, 20));
        JetBrainsActivation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JetBrainsActivation);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 311, 26));
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
        Title->setText(QCoreApplication::translate("JetBrainsActivation", "JetBrainsActivation", nullptr));
        CLion->setText(QCoreApplication::translate("JetBrainsActivation", "CLion", nullptr));
        DataGrip->setText(QCoreApplication::translate("JetBrainsActivation", "DataGrip", nullptr));
        GoLand->setText(QCoreApplication::translate("JetBrainsActivation", "GoLand", nullptr));
        IDEA->setText(QCoreApplication::translate("JetBrainsActivation", "IDEA", nullptr));
        PhpStorm->setText(QCoreApplication::translate("JetBrainsActivation", "PhpStorm", nullptr));
        PyCharm->setText(QCoreApplication::translate("JetBrainsActivation", "PyCharm", nullptr));
        WebStorm->setText(QCoreApplication::translate("JetBrainsActivation", "WebStorm", nullptr));
        warning1->setText(QCoreApplication::translate("JetBrainsActivation", "Warning:If you download these app", nullptr));
        warning2->setText(QCoreApplication::translate("JetBrainsActivation", "from toolbox, it can't activate correctly.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JetBrainsActivation: public Ui_JetBrainsActivation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JETBRAINSACTIVATION_H
