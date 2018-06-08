#include "window_opengl.h"
#include "ui_window_opengl.h"
#include <GL/glu.h>
#include <math.h>
#include <QDebug>

window_opengl::window_opengl(QWidget *parent) :
    QOpenGLWidget(parent),
    ui(new Ui::window_opengl)
{
    ui->setupUi(this);
}

void window_opengl::initializeGL()
{
    glEnable(GL_DEPTH_TEST);
}

void window_opengl::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glDepthFunc(GL_LESS);
    glShadeModel(GL_SMOOTH);
    glLoadIdentity();
    glRotatef(rotate_y,0,0,1);
    glRotatef(rotate_x,-1,0,0);


     glBegin(GL_POLYGON);

     glColor3f( 1.0, 0.0, 0.0 );     glVertex3f(  0.5, -0.5, -0.5 );      // P1 is red
     glColor3f( 0.0, 1.0, 0.0 );     glVertex3f(  0.5,  0.5, -0.5 );      // P2 is green
     glColor3f( 0.0, 0.0, 1.0 );     glVertex3f( -0.5,  0.5, -0.5 );      // P3 is blue
     glColor3f( 1.0, 0.0, 1.0 );     glVertex3f( -0.5, -0.5, -0.5 );      // P4 is purple

     glEnd();
     // White side - BACK
     glBegin(GL_POLYGON);
     glColor3f(   1.0,  1.0, 1.0 );
     glVertex3f(  0.5, -0.5, 0.5 );
     glVertex3f(  0.5,  0.5, 0.5 );
     glVertex3f( -0.5,  0.5, 0.5 );
     glVertex3f( -0.5, -0.5, 0.5 );
     glEnd();

     // Purple side - RIGHT
     glBegin(GL_POLYGON);
     glColor3f(  1.0,  0.0,  1.0 );
     glVertex3f( 0.5, -0.5, -0.5 );
     glVertex3f( 0.5,  0.5, -0.5 );
     glVertex3f( 0.5,  0.5,  0.5 );
     glVertex3f( 0.5, -0.5,  0.5 );
     glEnd();

     // Green side - LEFT
     glBegin(GL_POLYGON);
     glColor3f(   0.0,  1.0,  0.0 );
     glVertex3f( -0.5, -0.5,  0.5 );
     glVertex3f( -0.5,  0.5,  0.5 );
     glVertex3f( -0.5,  0.5, -0.5 );
     glVertex3f( -0.5, -0.5, -0.5 );
     glEnd();

     // Blue side - TOP
     glBegin(GL_POLYGON);
     glColor3f(   0.0,  0.0,  1.0 );
     glVertex3f(  0.5,  0.5,  0.5 );
     glVertex3f(  0.5,  0.5, -0.5 );
     glVertex3f( -0.5,  0.5, -0.5 );
     glVertex3f( -0.5,  0.5,  0.5 );
     glEnd();

     // Red side - BOTTOM
     glBegin(GL_POLYGON);
     glColor3f(   1.0,  0.0,  0.0 );
     glVertex3f(  0.5, -0.5, -0.5 );
     glVertex3f(  0.5, -0.5,  0.5 );
     glVertex3f( -0.5, -0.5,  0.5 );
     glVertex3f( -0.5, -0.5, -0.5 );
     glEnd();

     glFlush();

}

void window_opengl::prepare_data(QStringList new_data)
{
    float x_g = new_data[0].toInt()*2.0f/32678.0f;
    float y_g = new_data[1].toInt()*2.0f/32678.0f;
    float z_g = new_data[2].toInt()*2.0f/32678.0f;

    rotate_y = atan2(z_g,x_g)*180.0f/M_PI-90.0f;
    rotate_x = atan2(z_g,y_g)*180.0f/M_PI-90.0f;
    update();

}

void window_opengl::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
}

window_opengl::~window_opengl()
{
    delete ui;
}

