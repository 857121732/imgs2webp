/********************************************************************************
** Form generated from reading UI file 'createwebp.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWEBP_H
#define UI_CREATEWEBP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateWebpClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CreateWebpClass)
    {
        if (CreateWebpClass->objectName().isEmpty())
            CreateWebpClass->setObjectName(QStringLiteral("CreateWebpClass"));
        CreateWebpClass->resize(600, 400);
        menuBar = new QMenuBar(CreateWebpClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        CreateWebpClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CreateWebpClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CreateWebpClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CreateWebpClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CreateWebpClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CreateWebpClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CreateWebpClass->setStatusBar(statusBar);

        retranslateUi(CreateWebpClass);

        QMetaObject::connectSlotsByName(CreateWebpClass);
    } // setupUi

    void retranslateUi(QMainWindow *CreateWebpClass)
    {
        CreateWebpClass->setWindowTitle(QApplication::translate("CreateWebpClass", "CreateWebp", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateWebpClass: public Ui_CreateWebpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWEBP_H
