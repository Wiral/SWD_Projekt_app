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
    glRotatef(orientation_y,-1,0,0);
    glRotatef(orientation_x,0,0,1);
    glRotatef(orientation_z,0,-1,0);

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
    angle_x += new_data[3].toInt();
    orientation_x = ((angle_x*DPS/20)/ABS_SAMPLE_MAX) %360;
    angle_y += new_data[4].toInt();
    orientation_y = ((angle_y*DPS/20)/ABS_SAMPLE_MAX) %360;
    angle_z += new_data[5].toInt();
    orientation_z = ((angle_z*DPS/20)/ABS_SAMPLE_MAX) %360;
    update();
}

window_opengl::~window_opengl()
{
    delete ui;
}

