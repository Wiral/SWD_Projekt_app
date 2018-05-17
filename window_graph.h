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
     void graphs_update(QStringList);
     void reset_timer();
private:
    Ui::window_graph *ui;
    void graphs_init();
    QTime* time;
    int time_stamp = 0.2;
    const int refresh_rate = 1;

};

#endif // WINDOW_GRAPH_H
