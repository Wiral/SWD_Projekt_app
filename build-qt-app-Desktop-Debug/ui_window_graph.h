/********************************************************************************
** Form generated from reading UI file 'window_graph.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_GRAPH_H
#define UI_WINDOW_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window_graph
{
public:
    QGridLayout *gridLayout;
    QFrame *windowData;
    QFormLayout *formLayout_3;
    QHBoxLayout *windowData_header;
    QSpacerItem *horizontalSpacer_5;
    QLabel *windowData_header_title;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *window_graph)
    {
        if (window_graph->objectName().isEmpty())
            window_graph->setObjectName(QStringLiteral("window_graph"));
        window_graph->resize(705, 475);
        gridLayout = new QGridLayout(window_graph);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        windowData = new QFrame(window_graph);
        windowData->setObjectName(QStringLiteral("windowData"));
        windowData->setMinimumSize(QSize(400, 300));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(136, 138, 133, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(204, 207, 200, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(170, 172, 166, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(68, 69, 66, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(91, 92, 89, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(195, 196, 194, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        windowData->setPalette(palette);
        windowData->setAutoFillBackground(true);
        windowData->setFrameShape(QFrame::StyledPanel);
        windowData->setFrameShadow(QFrame::Raised);
        formLayout_3 = new QFormLayout(windowData);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        windowData_header = new QHBoxLayout();
        windowData_header->setObjectName(QStringLiteral("windowData_header"));
        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        windowData_header->addItem(horizontalSpacer_5);

        windowData_header_title = new QLabel(windowData);
        windowData_header_title->setObjectName(QStringLiteral("windowData_header_title"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(windowData_header_title->sizePolicy().hasHeightForWidth());
        windowData_header_title->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("URW Gothic L"));
        font.setBold(true);
        font.setWeight(75);
        windowData_header_title->setFont(font);
        windowData_header_title->setFrameShape(QFrame::WinPanel);

        windowData_header->addWidget(windowData_header_title);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        windowData_header->addItem(horizontalSpacer_4);


        formLayout_3->setLayout(0, QFormLayout::SpanningRole, windowData_header);


        gridLayout->addWidget(windowData, 0, 0, 1, 1);


        retranslateUi(window_graph);

        QMetaObject::connectSlotsByName(window_graph);
    } // setupUi

    void retranslateUi(QWidget *window_graph)
    {
        window_graph->setWindowTitle(QApplication::translate("window_graph", "Form", 0));
        windowData_header_title->setText(QApplication::translate("window_graph", "Wykresy danych", 0));
    } // retranslateUi

};

namespace Ui {
    class window_graph: public Ui_window_graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_GRAPH_H
