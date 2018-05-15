#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

QSerialPort stm32;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    stm32_connect();
    QObject::connect(stm32,SIGNAL(readyRead()),this, SLOT(stm32_read()));
    QObject::connect(this,SIGNAL(stm32_newDataReady(QStringList)),ui->windowData,SLOT(updateData(QStringList)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::stm32_read(){
    while(stm32->canReadLine()){
        stm32_data = stm32->readLine();
        stm32_buffer = QString::fromStdString(stm32_data.toStdString());
        stm32_bufferSplit = stm32_buffer.split(" ");
        emit(stm32_newDataReady(stm32_bufferSplit));
        qDebug() << stm32_bufferSplit;
    }
}

void MainWindow::stm32_connect(){
    stm32 = new QSerialPort(this);
    stm32->setPortName("ttyUSB0");
    stm32->setBaudRate(QSerialPort::Baud9600);
    stm32->setDataBits(QSerialPort::Data8);
    stm32->setFlowControl(QSerialPort::NoFlowControl);
    stm32->setStopBits(QSerialPort::OneStop);
    stm32->setParity(QSerialPort::NoParity);
    stm32->open(QSerialPort::ReadWrite);
}




