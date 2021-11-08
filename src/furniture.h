#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include "helperFunctions.h"
// -24 degress

void draw_tv()
{

    glColor3f(0.1, 0.1, 0.1);
    glBegin(GL_POLYGON);

    glVertex3f(-0.812, 0.061, 0);
    glVertex3f(-0.234, 0.136, 0);
    glVertex3f(-0.234, 0.678, 0);
    glVertex3f(-0.812, 0.639, 0);

    glEnd();
}

void draw_table()
{
    glColor3f(0.764, 0.545, 0.411);
    glBegin(GL_POLYGON);

    // glVertex3f(-0.234, 0.147, 0);
    glVertex3f(-0.235938, 0.166, 0);
    glVertex3f(-0.0945095, 0.089, 0);
    glVertex3f(-0.739, -0.003, 0);
    glVertex3f(-0.891, 0.078, 0);

    // glVertex3f(-0.812, 0.0725, 0);

    glEnd();
}

void draw_bed()
{

    // front of the bed

    rgb(247, 232, 229);
    glBegin(GL_POLYGON);
    glVertex3f(-0.856, 0.747, 0);
    glVertex3f(0.286, 0.81, 0);
    glVertex3f(0.286, 0.931, 0);
    glVertex3f(-0.856, 0.886, 0);
    glEnd();

    // left side of the bed

    rgb(157, 139, 137);

    glBegin(GL_POLYGON);

    glVertex3f(-1.0, 0.961, 0);
    glVertex3f(-1.0, 0.833, 0);
    glVertex3f(-0.856, 0.747, 0);
    glVertex3f(-0.856, 0.886, 0);

    glEnd();

    // top of the bed

    rgb(197, 189, 214);
    glBegin(GL_POLYGON);

    glVertex3f(0.07, 1.0, 0);
    glVertex3f(0.286, 0.931, 0);
    glVertex3f(-0.856, 0.886, 0);
    glVertex3f(-1, 1, 0);
    glVertex3f(-1.0, 0.961, 0);
    glVertex3f(-0.856, 0.886, 0);

    glEnd();
}

void drawAllFurniture()
{
    draw_bed();
    draw_table();
    draw_tv();
}