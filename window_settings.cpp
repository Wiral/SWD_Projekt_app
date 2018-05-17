#include "window_settings.h"
#include "ui_window_settings.h"
#include <QDebug>
window_settings::window_settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window_settings)
{
    ui->setupUi(this);
}

window_settings::~window_settings()
{
    delete ui;
}

void window_settings::load_stm32_settings(){
    QSettings settings("jakubsobocki","projekt");
    settings.beginGroup("stm32");
    ui->window_settings_port->setText(settings.value("port","ttyUSB0").toString());
    ui->window_settings_baundrate->setText(settings.value("baundrate",9600).toString());
    ui->window_settings_databits->setText(settings.value("databits",8).toString());
    ui->window_settings_stopbits->setText(settings.value("stopbits",1).toString());
    ui->window_settings_flowcontrol->setCurrentIndex(settings.value("flowcontrol",0).toInt());
    ui->window_settings_paritybits->setCurrentIndex(settings.value("paritybits",0).toInt());
    settings.endGroup();
}

void window_settings::save_stm32_settings(){
    QSettings settings("jakubsobocki","projekt");
    settings.beginGroup("stm32");
    settings.setValue("port",ui->window_settings_port->text());
    settings.setValue("baundrate",ui->window_settings_baundrate->text());
    settings.setValue("databits",ui->window_settings_databits->text());
     settings.setValue("stopbits",ui->window_settings_stopbits->text());
    settings.setValue("flowcontrol",ui->window_settings_flowcontrol->currentIndex());
    settings.setValue("paritybits",ui->window_settings_paritybits->currentIndex());
    settings.endGroup();

}

void window_settings::on_buttonBox_accepted()
{
    save_stm32_settings();
    emit(new_settings());
}


void window_settings::on_buttonBox_rejected()
{
    load_stm32_settings();
}

void window_settings::reject(){
    load_stm32_settings();
    QDialog::reject();
}
