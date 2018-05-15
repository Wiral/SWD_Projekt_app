#ifndef WINDOW_OPENGL_H
#define WINDOW_OPENGL_H

#include <QWidget>

namespace Ui {
class window_opengl;
}

class window_opengl : public QWidget
{
    Q_OBJECT

public:
    explicit window_opengl(QWidget *parent = 0);
    ~window_opengl();

private:
    Ui::window_opengl *ui;
};

#endif // WINDOW_OPENGL_H
