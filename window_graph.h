#ifndef WINDOW_GRAPH_H
#define WINDOW_GRAPH_H

#include <QWidget>
#include <QTime>
namespace Ui {
class window_graph;
}

class window_graph : public QWidget
{
    Q_OBJECT

public:
    explicit window_graph(QWidget *parent = 0);
    ~window_graph();
public slots:
     void update_graphs(QStringList);
     void reset_timer();
private:
    Ui::window_graph *ui;
    void init_graphs();
    QTime* time;


};

#endif // WINDOW_GRAPH_H
