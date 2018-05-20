#include "window_graph.h"
#include "ui_window_graph.h"

window_graph::window_graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::window_graph)
{
    ui->setupUi(this);
    graphs_init();
    time = new QTime(QTime::currentTime());
    load_graphs_settings();
}

window_graph::~window_graph()
{
    delete ui;
    delete time;
}

void window_graph::graphs_init(){
    QCustomPlot* graphs[] ={ui->window_graph_acc_x,ui->window_graph_acc_y,ui->window_graph_acc_z,ui->window_graph_gyro_x,ui->window_graph_gyro_y,ui->window_graph_gyro_z};
    QString labels[] = {"X","Y","Z","RotX","RotY","RotZ"};
    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    int i;
    for(i = 0; i < 6; i++){
        graphs[i]->addGraph();
        graphs[i]->graph(0)->setPen(QPen(QBrush(QColor(230, 0, 0)),2));
        graphs[i]->setBackground(QBrush(QColor(46, 51, 54)));
        timeTicker->setTimeFormat("%m:%s");
        graphs[i]->xAxis->setTicker(timeTicker);
        graphs[i]->axisRect()->setupFullAxesBox();
        graphs[i]->xAxis->grid()->setPen(QColor(0,0,0));
        graphs[i]->yAxis->grid()->setPen(QColor(0,0,0));
        graphs[i]->yAxis->setTickLabelFont(QFont("ubuntu",8));
        graphs[i]->xAxis->setLabel("czas");
        graphs[i]->xAxis->setLabelFont(QFont("ubuntu",8,-1,true));
        graphs[i]->xAxis->setTickLabelFont(QFont("ubuntu",8));
        graphs[i]->yAxis->setLabel(labels[i]);
        graphs[i]->yAxis->setRange(-37000, 37000);
        graphs[i]->xAxis->setRange(0, 60);
    }

}

void window_graph::graphs_update(QStringList new_data){
   QCustomPlot* graphs[] ={ui->window_graph_acc_x,ui->window_graph_acc_y,ui->window_graph_acc_z,ui->window_graph_gyro_x,ui->window_graph_gyro_y,ui->window_graph_gyro_z};
    int i;
    double elapsed_time;
    elapsed_time = time->elapsed()/1000.0; // aktualny czas
    if(elapsed_time - time_stamp >= refresh_rate){ //jeżeli trzeba zaktualizować wykres
        time_stamp = elapsed_time;
        if(new_data.length() == 7){ //jeżeli poprawny format ramki
            for(i = 0; i < 6; i++){
                graphs[i]->graph(0)->addData(elapsed_time, new_data[i].toInt());
                graphs[i]->xAxis->setRange(elapsed_time,60, Qt::AlignRight);
                graphs[i]->replot();
            }
        }
    }
}

void window_graph::reset_graphs(){
    QCustomPlot* graphs[] ={ui->window_graph_acc_x,ui->window_graph_acc_y,ui->window_graph_acc_z,ui->window_graph_gyro_x,ui->window_graph_gyro_y,ui->window_graph_gyro_z};
    int i;
    for(i = 0; i < 6; i++){
        graphs[i]->removeGraph(0);
    }
    graphs_init();
    time->restart();
    time_stamp = 0;
}

void window_graph::load_graphs_settings(){
    QSettings settings("jakubsobocki","projekt");
    settings.beginGroup("windowgraphs");
    refresh_rate = settings.value("refreshrate",1).toDouble();
    settings.endGroup();
    reset_graphs();
}

