#include "window_data.h"
#include "ui_window_data.h"
#include "qdebug.h"
window_data::window_data(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::window_data)
{
    ui->setupUi(this);
}


window_data::~window_data()
{
    delete ui;
}

void window_data::updateData(QStringList data){
    if(data.length() == 7){ //poprawny format ramki
    ui->windowData_data_acc_x->setText(data[0]);
    ui->windowData_data_acc_y->setText(data[1]);
    ui->windowData_data_acc_z->setText(data[2]);
    ui->windowData_data_gyro_x->setText(data[3]);
    ui->windowData_data_gyro_y->setText(data[4]);
    ui->windowData_data_gyro_z->setText(data[5]);
    }
}

