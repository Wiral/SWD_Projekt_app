#include "window_graph.h"
#include "ui_window_graph.h"

window_graph::window_graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::window_graph)
{
    ui->setupUi(this);
}

window_graph::~window_graph()
{
    delete ui;
}
