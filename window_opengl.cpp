#include "window_opengl.h"
#include "ui_window_opengl.h"

window_opengl::window_opengl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::window_opengl)
{
    ui->setupUi(this);
}

window_opengl::~window_opengl()
{
    delete ui;
}
