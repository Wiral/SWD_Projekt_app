/********************************************************************************
** Form generated from reading UI file 'window_data.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_DATA_H
#define UI_WINDOW_DATA_H

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

class Ui_window_data
{
public:
    QGridLayout *gridLayout;
    QFrame *windowData;
    QFormLayout *formLayout_3;
    QHBoxLayout *windowData_header_4;
    QSpacerItem *horizontalSpacer_33;
    QLabel *windowData_header_title_4;
    QSpacerItem *horizontalSpacer_34;
    QHBoxLayout *windowData_subheader_4;
    QLabel *windowData_subheader_title2_4;
    QSpacerItem *horizontalSpacer_35;
    QLabel *windowData_subheader_title1_4;
    QSpacerItem *horizontalSpacer_36;
    QHBoxLayout *windowData_data_x_4;
    QLabel *windowData_label_x_4;
    QLabel *windowData_data_acc_x_4;
    QSpacerItem *horizontalSpacer_37;
    QLabel *windowData_label_rot_x_4;
    QLabel *windowData_data_gyro_x_4;
    QSpacerItem *horizontalSpacer_38;
    QHBoxLayout *windowData_data_y_4;
    QLabel *windowData_label_y_4;
    QLabel *windowData_data_acc_y_4;
    QSpacerItem *horizontalSpacer_39;
    QLabel *windowData_label_rot_y_4;
    QLabel *windowData_data_gyro_y_4;
    QSpacerItem *horizontalSpacer_40;
    QHBoxLayout *windowData_data_z_4;
    QLabel *windowData_label_z_4;
    QLabel *windowData_data_acc_z_4;
    QSpacerItem *horizontalSpacer_41;
    QLabel *windowData_label_rot_z_4;
    QLabel *windowData_data_gyro_z_4;
    QSpacerItem *horizontalSpacer_42;

    void setupUi(QWidget *window_data)
    {
        if (window_data->objectName().isEmpty())
            window_data->setObjectName(QStringLiteral("window_data"));
        window_data->resize(418, 318);
        gridLayout = new QGridLayout(window_data);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        windowData = new QFrame(window_data);
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
        windowData_header_4 = new QHBoxLayout();
        windowData_header_4->setObjectName(QStringLiteral("windowData_header_4"));
        horizontalSpacer_33 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        windowData_header_4->addItem(horizontalSpacer_33);

        windowData_header_title_4 = new QLabel(windowData);
        windowData_header_title_4->setObjectName(QStringLiteral("windowData_header_title_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(windowData_header_title_4->sizePolicy().hasHeightForWidth());
        windowData_header_title_4->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("URW Gothic L"));
        font.setBold(true);
        font.setWeight(75);
        windowData_header_title_4->setFont(font);
        windowData_header_title_4->setFrameShape(QFrame::WinPanel);

        windowData_header_4->addWidget(windowData_header_title_4);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        windowData_header_4->addItem(horizontalSpacer_34);


        formLayout_3->setLayout(0, QFormLayout::SpanningRole, windowData_header_4);

        windowData_subheader_4 = new QHBoxLayout();
        windowData_subheader_4->setObjectName(QStringLiteral("windowData_subheader_4"));
        windowData_subheader_title2_4 = new QLabel(windowData);
        windowData_subheader_title2_4->setObjectName(QStringLiteral("windowData_subheader_title2_4"));
        sizePolicy.setHeightForWidth(windowData_subheader_title2_4->sizePolicy().hasHeightForWidth());
        windowData_subheader_title2_4->setSizePolicy(sizePolicy);
        windowData_subheader_title2_4->setFont(font);
        windowData_subheader_title2_4->setFrameShape(QFrame::WinPanel);

        windowData_subheader_4->addWidget(windowData_subheader_title2_4);

        horizontalSpacer_35 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        windowData_subheader_4->addItem(horizontalSpacer_35);

        windowData_subheader_title1_4 = new QLabel(windowData);
        windowData_subheader_title1_4->setObjectName(QStringLiteral("windowData_subheader_title1_4"));
        windowData_subheader_title1_4->setFont(font);
        windowData_subheader_title1_4->setFrameShape(QFrame::WinPanel);

        windowData_subheader_4->addWidget(windowData_subheader_title1_4);

        horizontalSpacer_36 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        windowData_subheader_4->addItem(horizontalSpacer_36);


        formLayout_3->setLayout(1, QFormLayout::SpanningRole, windowData_subheader_4);

        windowData_data_x_4 = new QHBoxLayout();
        windowData_data_x_4->setObjectName(QStringLiteral("windowData_data_x_4"));
        windowData_label_x_4 = new QLabel(windowData);
        windowData_label_x_4->setObjectName(QStringLiteral("windowData_label_x_4"));

        windowData_data_x_4->addWidget(windowData_label_x_4);

        windowData_data_acc_x_4 = new QLabel(windowData);
        windowData_data_acc_x_4->setObjectName(QStringLiteral("windowData_data_acc_x_4"));

        windowData_data_x_4->addWidget(windowData_data_acc_x_4);

        horizontalSpacer_37 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        windowData_data_x_4->addItem(horizontalSpacer_37);

        windowData_label_rot_x_4 = new QLabel(windowData);
        windowData_label_rot_x_4->setObjectName(QStringLiteral("windowData_label_rot_x_4"));

        windowData_data_x_4->addWidget(windowData_label_rot_x_4);

        windowData_data_gyro_x_4 = new QLabel(windowData);
        windowData_data_gyro_x_4->setObjectName(QStringLiteral("windowData_data_gyro_x_4"));

        windowData_data_x_4->addWidget(windowData_data_gyro_x_4);

        horizontalSpacer_38 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        windowData_data_x_4->addItem(horizontalSpacer_38);


        formLayout_3->setLayout(2, QFormLayout::SpanningRole, windowData_data_x_4);

        windowData_data_y_4 = new QHBoxLayout();
        windowData_data_y_4->setObjectName(QStringLiteral("windowData_data_y_4"));
        windowData_label_y_4 = new QLabel(windowData);
        windowData_label_y_4->setObjectName(QStringLiteral("windowData_label_y_4"));

        windowData_data_y_4->addWidget(windowData_label_y_4);

        windowData_data_acc_y_4 = new QLabel(windowData);
        windowData_data_acc_y_4->setObjectName(QStringLiteral("windowData_data_acc_y_4"));

        windowData_data_y_4->addWidget(windowData_data_acc_y_4);

        horizontalSpacer_39 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        windowData_data_y_4->addItem(horizontalSpacer_39);

        windowData_label_rot_y_4 = new QLabel(windowData);
        windowData_label_rot_y_4->setObjectName(QStringLiteral("windowData_label_rot_y_4"));

        windowData_data_y_4->addWidget(windowData_label_rot_y_4);

        windowData_data_gyro_y_4 = new QLabel(windowData);
        windowData_data_gyro_y_4->setObjectName(QStringLiteral("windowData_data_gyro_y_4"));

        windowData_data_y_4->addWidget(windowData_data_gyro_y_4);

        horizontalSpacer_40 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        windowData_data_y_4->addItem(horizontalSpacer_40);


        formLayout_3->setLayout(3, QFormLayout::SpanningRole, windowData_data_y_4);

        windowData_data_z_4 = new QHBoxLayout();
        windowData_data_z_4->setObjectName(QStringLiteral("windowData_data_z_4"));
        windowData_label_z_4 = new QLabel(windowData);
        windowData_label_z_4->setObjectName(QStringLiteral("windowData_label_z_4"));

        windowData_data_z_4->addWidget(windowData_label_z_4);

        windowData_data_acc_z_4 = new QLabel(windowData);
        windowData_data_acc_z_4->setObjectName(QStringLiteral("windowData_data_acc_z_4"));

        windowData_data_z_4->addWidget(windowData_data_acc_z_4);

        horizontalSpacer_41 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        windowData_data_z_4->addItem(horizontalSpacer_41);

        windowData_label_rot_z_4 = new QLabel(windowData);
        windowData_label_rot_z_4->setObjectName(QStringLiteral("windowData_label_rot_z_4"));

        windowData_data_z_4->addWidget(windowData_label_rot_z_4);

        windowData_data_gyro_z_4 = new QLabel(windowData);
        windowData_data_gyro_z_4->setObjectName(QStringLiteral("windowData_data_gyro_z_4"));

        windowData_data_z_4->addWidget(windowData_data_gyro_z_4);

        horizontalSpacer_42 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        windowData_data_z_4->addItem(horizontalSpacer_42);


        formLayout_3->setLayout(4, QFormLayout::SpanningRole, windowData_data_z_4);


        gridLayout->addWidget(windowData, 0, 0, 1, 1);


        retranslateUi(window_data);

        QMetaObject::connectSlotsByName(window_data);
    } // setupUi

    void retranslateUi(QWidget *window_data)
    {
        window_data->setWindowTitle(QApplication::translate("window_data", "Form", 0));
        windowData_header_title_4->setText(QApplication::translate("window_data", "Warto\305\233ci pobrane z urz\304\205dzenia", 0));
        windowData_subheader_title2_4->setText(QApplication::translate("window_data", "Akcelerometr", 0));
        windowData_subheader_title1_4->setText(QApplication::translate("window_data", "\305\273yroskop", 0));
        windowData_label_x_4->setText(QApplication::translate("window_data", "X:", 0));
        windowData_data_acc_x_4->setText(QApplication::translate("window_data", "TextLabel", 0));
        windowData_label_rot_x_4->setText(QApplication::translate("window_data", "RotX:", 0));
        windowData_data_gyro_x_4->setText(QApplication::translate("window_data", "TextLabel", 0));
        windowData_label_y_4->setText(QApplication::translate("window_data", "Y:", 0));
        windowData_data_acc_y_4->setText(QApplication::translate("window_data", "TextLabel", 0));
        windowData_label_rot_y_4->setText(QApplication::translate("window_data", "RotY:", 0));
        windowData_data_gyro_y_4->setText(QApplication::translate("window_data", "TextLabel", 0));
        windowData_label_z_4->setText(QApplication::translate("window_data", "Z:", 0));
        windowData_data_acc_z_4->setText(QApplication::translate("window_data", "TextLabel", 0));
        windowData_label_rot_z_4->setText(QApplication::translate("window_data", "RotZ:", 0));
        windowData_data_gyro_z_4->setText(QApplication::translate("window_data", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class window_data: public Ui_window_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_DATA_H
