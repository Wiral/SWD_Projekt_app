#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <window_settings.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    window_settings *windowSettings;
    QSerialPort* stm32;
    QString stm32_buffer;
    QByteArray stm32_data;
    QStringList stm32_bufferSplit;
private slots:
    void stm32_connect();
    void stm32_disconnect();
    void stm32_reconnect();
    void stm32_read();
    void on_actionUstawienia_portu_triggered();
    void on_actionStart_Stop_triggered();
    void stm32_show_connect_fail();
signals:
    void stm32_newDataReady(QStringList);
    void stm32_connect_fail();
    void stm32_connect_success();
};

#endif // MAINWINDOW_H
