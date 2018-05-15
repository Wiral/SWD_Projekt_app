#ifndef WINDOW_GRAPH_H
#define WINDOW_GRAPH_H

#include <QWidget>

namespace Ui {
class window_graph;
}

class window_graph : public QWidget
{
    Q_OBJECT

public:
    explicit window_graph(QWidget *parent = 0);
    ~window_graph();

private:
    Ui::window_graph *ui;

};

#endif // WINDOW_GRAPH_H
