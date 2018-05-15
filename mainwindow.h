#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
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
    QSerialPort* stm32;
    QString stm32_buffer;
    QByteArray stm32_data;
    QStringList stm32_bufferSplit;
private slots:
    void stm32_connect();
    void stm32_read();
signals:
    void stm32_newDataReady(QStringList);
};

#endif // MAINWINDOW_H
