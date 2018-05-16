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
    windowSettings = new window_settings(this);
    stm32 = new QSerialPort(this);
    windowSettings->load_settings();

    QObject::connect(stm32,SIGNAL(readyRead()),this, SLOT(stm32_read()));
    QObject::connect(this,SIGNAL(stm32_newDataReady(QStringList)),ui->windowData,SLOT(updateData(QStringList)));
    QObject::connect(windowSettings,SIGNAL(new_settings()),this,SLOT(stm32_reconnect()));
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
    if(!stm32->isOpen()){
        QSettings settings("jakubsobocki","projekt");
        settings.beginGroup("stm32");
        stm32->setPortName(settings.value("port").toString());
        stm32->setBaudRate(settings.value("baundrate").toInt());
        stm32->setDataBits((QSerialPort::DataBits)settings.value("databits").toInt());
        stm32->setStopBits((QSerialPort::StopBits)settings.value("stopbits").toInt());
        stm32->setFlowControl((QSerialPort::FlowControl)settings.value("flowcontrol").toInt());
        if(settings.value("paritybits").toInt() == 0)
            stm32->setParity((QSerialPort::Parity)settings.value("paritybits").toInt());
        else
            stm32->setParity((QSerialPort::Parity)(settings.value("paritybits").toInt()+1));
        stm32->open(QSerialPort::ReadWrite);
        settings.endGroup();
    }
}

void MainWindow::stm32_disconnect(){
    if(stm32->isOpen())
        stm32->close();
}

void MainWindow::stm32_reconnect(){
    stm32_disconnect();
    stm32_connect();
}



void MainWindow::on_actionUstawienia_portu_triggered()
{
    windowSettings->show();
}

void MainWindow::on_actionStart_Stop_triggered()
{
    if(stm32->isOpen())
        stm32_disconnect();
    else
        stm32_connect();
}
