#ifndef WINDOW_DATA_H
#define WINDOW_DATA_H

#include <QWidget>
#include <QSerialPort>
namespace Ui {
class window_data;
}

class window_data : public QWidget
{
    Q_OBJECT
public:
    explicit window_data(QWidget *parent = 0);
    ~window_data();
private:
    Ui::window_data *ui;
public slots:
    void update_data(QStringList);

};

#endif // WINDOW_DATA_H
