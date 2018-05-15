/********************************************************************************
** Form generated from reading UI file 'window_opengl.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_OPENGL_H
#define UI_WINDOW_OPENGL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window_opengl
{
public:
    QGridLayout *gridLayout;
    QOpenGLWidget *openGLWidget;

    void setupUi(QWidget *window_opengl)
    {
        if (window_opengl->objectName().isEmpty())
            window_opengl->setObjectName(QStringLiteral("window_opengl"));
        window_opengl->resize(549, 376);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(window_opengl->sizePolicy().hasHeightForWidth());
        window_opengl->setSizePolicy(sizePolicy);
        window_opengl->setMinimumSize(QSize(400, 300));
        gridLayout = new QGridLayout(window_opengl);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        openGLWidget = new QOpenGLWidget(window_opengl);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setMinimumSize(QSize(400, 300));

        gridLayout->addWidget(openGLWidget, 0, 0, 1, 1);


        retranslateUi(window_opengl);

        QMetaObject::connectSlotsByName(window_opengl);
    } // setupUi

    void retranslateUi(QWidget *window_opengl)
    {
        window_opengl->setWindowTitle(QApplication::translate("window_opengl", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class window_opengl: public Ui_window_opengl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_OPENGL_H
