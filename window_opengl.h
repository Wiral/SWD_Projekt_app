#ifndef WINDOW_OPENGL_H
#define WINDOW_OPENGL_H

#include <QWidget>
#include <QOpenGLWidget>
namespace Ui {
class window_opengl;
}

class window_opengl : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit window_opengl(QWidget *parent = 0);
    virtual void initializeGL();
    virtual void resizeGL(int, int);
    ~window_opengl();
public slots:
    virtual void paintGL();
    void prepare_data(QStringList);
private:
    GLfloat rotate_x = 0;
    GLfloat rotate_y = 0;
    Ui::window_opengl *ui;
};

#endif // WINDOW_OPENGL_H
