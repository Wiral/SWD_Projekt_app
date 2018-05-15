/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "window_data.h"
#include "window_graph.h"
#include "window_opengl.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionWarto_ci_pobrane_z_urz_dzenia;
    QAction *actionWykresy_przebiegu_zmiennych;
    QAction *actionWizualizacja;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    window_opengl *windowOpenGL;
    window_data *windowData;
    window_graph *windowGraph;
    QMenuBar *menuBar;
    QMenu *menuWDSPro;
    QMenu *menuStop;
    QMenu *menuOpcje;
    QMenu *menuPomoc;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(828, 672);
        actionWarto_ci_pobrane_z_urz_dzenia = new QAction(MainWindow);
        actionWarto_ci_pobrane_z_urz_dzenia->setObjectName(QStringLiteral("actionWarto_ci_pobrane_z_urz_dzenia"));
        actionWykresy_przebiegu_zmiennych = new QAction(MainWindow);
        actionWykresy_przebiegu_zmiennych->setObjectName(QStringLiteral("actionWykresy_przebiegu_zmiennych"));
        actionWizualizacja = new QAction(MainWindow);
        actionWizualizacja->setObjectName(QStringLiteral("actionWizualizacja"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        windowOpenGL = new window_opengl(centralWidget);
        windowOpenGL->setObjectName(QStringLiteral("windowOpenGL"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(windowOpenGL->sizePolicy().hasHeightForWidth());
        windowOpenGL->setSizePolicy(sizePolicy);
        windowOpenGL->setMinimumSize(QSize(400, 300));

        horizontalLayout_9->addWidget(windowOpenGL);

        windowData = new window_data(centralWidget);
        windowData->setObjectName(QStringLiteral("windowData"));

        horizontalLayout_9->addWidget(windowData);


        verticalLayout->addLayout(horizontalLayout_9);

        windowGraph = new window_graph(centralWidget);
        windowGraph->setObjectName(QStringLiteral("windowGraph"));

        verticalLayout->addWidget(windowGraph);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 828, 22));
        menuWDSPro = new QMenu(menuBar);
        menuWDSPro->setObjectName(QStringLiteral("menuWDSPro"));
        menuStop = new QMenu(menuBar);
        menuStop->setObjectName(QStringLiteral("menuStop"));
        menuOpcje = new QMenu(menuBar);
        menuOpcje->setObjectName(QStringLiteral("menuOpcje"));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QStringLiteral("menuPomoc"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuWDSPro->menuAction());
        menuBar->addAction(menuStop->menuAction());
        menuBar->addAction(menuOpcje->menuAction());
        menuBar->addAction(menuPomoc->menuAction());
        menuPomoc->addAction(actionWarto_ci_pobrane_z_urz_dzenia);
        menuPomoc->addAction(actionWykresy_przebiegu_zmiennych);
        menuPomoc->addAction(actionWizualizacja);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionWarto_ci_pobrane_z_urz_dzenia->setText(QApplication::translate("MainWindow", "Warto\305\233ci pobrane z urz\304\205dzenia", 0));
        actionWykresy_przebiegu_zmiennych->setText(QApplication::translate("MainWindow", "Wykresy przebiegu zmiennych", 0));
        actionWizualizacja->setText(QApplication::translate("MainWindow", "Wizualizacja po\305\202o\305\274enia p\305\202ytki", 0));
        menuWDSPro->setTitle(QApplication::translate("MainWindow", "Start", 0));
        menuStop->setTitle(QApplication::translate("MainWindow", "Stop", 0));
        menuOpcje->setTitle(QApplication::translate("MainWindow", "Opcje", 0));
        menuPomoc->setTitle(QApplication::translate("MainWindow", "Pomoc", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
