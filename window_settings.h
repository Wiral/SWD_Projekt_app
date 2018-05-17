#ifndef WINDOW_SETTINGS_H
#define WINDOW_SETTINGS_H

#include <QDialog>
#include <QSettings>
#include <QComboBox>
namespace Ui {
class window_settings;
}

class window_settings : public QDialog
{
    Q_OBJECT

public:
    explicit window_settings(QWidget *parent = 0);
    ~window_settings();
    void load_stm32_settings();
    void save_stm32_settings();
signals:
    void new_settings();
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::window_settings *ui;
    void reject();
};

#endif // WINDOW_SETTINGS_H
