#include "window_graph.h"
#include "ui_window_graph.h"

window_graph::window_graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::window_graph)
{
    ui->setupUi(this);
    init_graphs();
    time = new QTime(QTime::currentTime());
}

window_graph::~window_graph()
{
    delete ui;
}

void window_graph::init_graphs(){
    QCustomPlot* graphs[] ={ui->window_graph_acc_x,ui->window_graph_acc_y,ui->window_graph_acc_z,ui->window_graph_gyro_x,ui->window_graph_gyro_y,ui->window_graph_gyro_z};
    int i;
    for(i = 0; i < 6; i++){
        graphs[i]->addGraph(); // blue line
        graphs[i]->graph(0)->setPen(QPen(QColor(40, 110, 255)));

        QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
        timeTicker->setTimeFormat("%m:%s");
        graphs[i]->xAxis->setTicker(timeTicker);
        graphs[i]->axisRect()->setupFullAxesBox();
        graphs[i]->xAxis->setLabel("czas");
        graphs[i]->yAxis->setLabel("wartość");
        graphs[i]->yAxis->setRange(-37000, 37000);
        graphs[i]->xAxis->setRange(0, 60*0.1);
        // make left and bottom axes transfer their ranges to right and top axes:
       // connect( graphs[i]->xAxis, SIGNAL(rangeChanged(QCPRange)),  graphs[i]->xAxis2, SLOT(setRange(QCPRange)));
       // connect( graphs[i]->yAxis, SIGNAL(rangeChanged(QCPRange)),  graphs[i]->yAxis2, SLOT(setRange(QCPRange)));
    }

}

void window_graph::update_graphs(QStringList new_data){
    QCustomPlot* graphs[] ={ui->window_graph_acc_x,ui->window_graph_acc_y,ui->window_graph_acc_z,ui->window_graph_gyro_x,ui->window_graph_gyro_y,ui->window_graph_gyro_z};
    int i;
    double key;
    qDebug() << "idzie";
    if(new_data.length() == 7){ //poprawny format ramki
    for(i = 0; i < 6; i++){
        key = time->elapsed()/1000.0; // time elapsed since start of demo, in seconds
        graphs[i]->graph(0)->addData(key, new_data[i].toInt());
        graphs[i]->xAxis->setRange(key, 80, Qt::AlignRight);
        graphs[i]->replot();
        }
    }
}

void window_graph::reset_timer(){
    time->restart();
}
