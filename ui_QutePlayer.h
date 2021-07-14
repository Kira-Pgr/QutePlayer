/********************************************************************************
** Form generated from reading UI file 'QutePlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUTEPLAYER_H
#define UI_QUTEPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QutePlayerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QutePlayerClass)
    {
        if (QutePlayerClass->objectName().isEmpty())
            QutePlayerClass->setObjectName(QString::fromUtf8("QutePlayerClass"));
        QutePlayerClass->resize(600, 400);
        menuBar = new QMenuBar(QutePlayerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QutePlayerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QutePlayerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QutePlayerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QutePlayerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QutePlayerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QutePlayerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QutePlayerClass->setStatusBar(statusBar);

        retranslateUi(QutePlayerClass);

        QMetaObject::connectSlotsByName(QutePlayerClass);
    } // setupUi

    void retranslateUi(QMainWindow *QutePlayerClass)
    {
        QutePlayerClass->setWindowTitle(QCoreApplication::translate("QutePlayerClass", "QutePlayer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QutePlayerClass: public Ui_QutePlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUTEPLAYER_H
