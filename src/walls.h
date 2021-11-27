#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>

void drawWall_A()
{
    float bottom_right_x = 0.084;
    float bottom_right_y = -0.048;
    float bottom_left_x = -1;
    float bottom_left_y = -.211;
    float top_left_x = -1;
    float top_left_y = 1;
    float top_right_x = bottom_right_x;
    float top_right_y = 1;

    glColor3f(0.7, 0.7, 0.7);

    glBegin(GL_POLYGON);
    glVertex3f(top_left_x, top_left_y, 0);
    glVertex3f(bottom_left_x, bottom_left_y, 0);
    glVertex3f(bottom_right_x, bottom_right_y, 0);
    glVertex3f(top_right_x, top_right_y, 0);

    glEnd();
}

void drawWall_B()
{
    float bottom_right_x = 1;
    float bottom_right_y = -0.458;
    float bottom_left_x = 0.084;
    float bottom_left_y = -0.048;
    float top_left_x = bottom_left_x;
    float top_left_y = 1;
    float top_right_x = bottom_right_x;
    float top_right_y = 1;

    glColor3f(0.9, 0.9, 0.9);

    glBegin(GL_POLYGON);
    glVertex3f(bottom_left_x, bottom_left_y, 0);
    glVertex3f(top_left_x, top_left_y, 0);
    glVertex3f(0.323, top_left_y, 0);
    glVertex3f(0.323, -0.153, 0);
    glEnd();

    glBegin(GL_POLYGON);

    glEnd();
    glVertex3f(0.323, 0.111, 0);
    glVertex3f(0.323, -0.153, 0);
    glVertex3f(0.613, 0.0, 0);
    glVertex3f(0.614, -0.281, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0.63, 0.630, 0);
    glVertex3f(0.63, -0.0095, 0);
    glVertex3f(0.613, -0.0018, 0);
    glVertex3f(0.613, 0.628, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.0, 0.578, 0);
    glVertex3f(1, 1, 0);
    glVertex3f(0.323, 1, 0);
    glVertex3f(0.323, 0.667, 0);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0.323, 0.111, 0);
    glVertex3f(0.323, -0.153, 0);
    glVertex3f(1, bottom_right_y, 0);
    glVertex3f(1, -0.153, 0);

    glEnd();
}

//glVertex3f(0.323, 0.111, 0);
