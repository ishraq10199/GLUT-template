#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>

void drawWall_A(){
    float bottom_right_x = 0.084;
    float bottom_right_y =  -0.048;
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

void drawWall_B(){
    float bottom_right_x = 1;
    float bottom_right_y =  -0.458;
    float bottom_left_x = 0.084;
    float bottom_left_y = -0.048;
    float top_left_x = bottom_left_x;
    float top_left_y = 1;
    float top_right_x = bottom_right_x;
    float top_right_y = 1;

    glColor3f(0.9, 0.9, 0.9);

    glBegin(GL_POLYGON);
    glVertex3f(top_left_x, top_left_y, 0);
    glVertex3f(bottom_left_x, bottom_left_y, 0);
    glVertex3f(bottom_right_x, bottom_right_y, 0);
    glVertex3f(top_right_x, top_right_y, 0);

    glEnd();
}