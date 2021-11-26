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
    // top of table
    glColor3f(0.764, 0.545, 0.411);
    glBegin(GL_POLYGON);

    glVertex3f(-0.235938, 0.166, 0);
    glVertex3f(-0.0945095, 0.089, 0);
    glVertex3f(-0.739, 0.011, 0);
    glVertex3f(-0.891, 0.078, 0);

    glEnd();

    // left side of table

    glColor3f(0.56, 0.4, 0.302);
    glBegin(GL_POLYGON);

    glVertex3f(-0.739, 0.011, 0);
    glVertex3f(-0.891, 0.078, 0);
    glVertex3f(-0.891, -0.194, 0);
    glVertex3f(-0.739, -0.2694, 0);

    glEnd();

    // front of table
    glColor3f(0.663, 0.475, 0.357);
    glBegin(GL_POLYGON);

    glVertex3f(-0.0945095, 0.089, 0);
    glVertex3f(-0.0945095, -0.175, 0);
    glVertex3f(-0.739, -0.2694, 0);
    glVertex3f(-0.739, 0.011, 0);

    glEnd();
}

void draw_supportWall()
{
    glColor3f(0.549, 0.502, 0.651);
    glBegin(GL_POLYGON);

    glVertex3f(-0.236, -0.0972, 0);
    glVertex3f(0.285937, -0.361, 0);
    glVertex3f(0.285937, 0.811, 0);
    glVertex3f(-0.236, 0.780, 0);

    glEnd();

    glColor3f(0.969, 0.91, 0.898);
    glBegin(GL_POLYGON);

    glVertex3f(0.285937, -0.361, 0);
    glVertex3f(0.321875, -0.355, 0);
    glVertex3f(0.321875, 1, 0);
    glVertex3f(0.285937, 1, 0);

    glEnd();

    glColor3f(0.549, 0.502, 0.651);
    glBegin(GL_POLYGON);

    glVertex3f(0.286, 0.931, 0);
    glVertex3f(0.285937, 1, 0);
    glVertex3f(0.07, 1.0, 0);

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

void draw_stairs()
{
    glColor3f(0.773, 0.741, 0.839);
    glBegin(GL_POLYGON);

    glVertex3f(-0.855, 0.744, 0);
    glVertex3f(-0.961, 0.744, 0);
    glVertex3f(-1.0, 0.764, 0);
    glVertex3f(-1.0, 0.833, 0);

    glEnd();

    glColor3f(0.616, 0.545, 0.537);
    glBegin(GL_POLYGON);

    glVertex3f(-0.961, 0.636, 0);
    glVertex3f(-1.0, 0.664, 0);
    glVertex3f(-1.0, 0.764, 0);
    glVertex3f(-0.961, 0.744, 0);

    glEnd();

    rgb(247, 232, 229);
    glBegin(GL_POLYGON);

    glVertex3f(-0.823, 0.75, 0);
    glVertex3f(-0.961, 0.742, 0);
    glVertex3f(-0.961, 0.636, 0);
    glVertex3f(-0.823, 0.655, 0);

    glEnd();

    rgb(197, 189, 214);
    glBegin(GL_POLYGON);

    glVertex3f(-0.961, 0.636, 0);
    glVertex3f(-1.0, 0.664, 0);
    glVertex3f(-1.0, 0.633, 0);

    glEnd();

    rgb(247, 232, 229);
    glBegin(GL_POLYGON);

    glVertex3f(-0.923, 0.641, 0);
    glVertex3f(-1.0, 0.633, 0);
    glVertex3f(-1.0, 0.528, 0);
    glVertex3f(-0.923, 0.536, 0);

    glEnd();
}

void draw_windows()
{
    // Sky color
    rgb(207, 235, 252);
    glBegin(GL_POLYGON);

    glVertex3f(0.323, 0.667, 0);
    glVertex3f(0.613, 0.628, 0);
    glVertex3f(0.613, 0.0, 0);
    glVertex3f(0.323, 0.111, 0);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex3f(0.63, 0.625, 0);
    glVertex3f(0.63, -0.008, 0);
    glVertex3f(1.0, -0.153, 0);
    glVertex3f(1.0, 0.578, 0);

    glEnd();

    rgb(179, 179, 179);
    glBegin(GL_LINE_LOOP);

    glVertex3f(0.323, 0.667, 0);
    glVertex3f(0.613, 0.628, 0);
    glVertex3f(0.613, 0.0, 0);
    glVertex3f(0.323, 0.111, 0);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3f(0.63, 0.625, 0);
    glVertex3f(0.63, -0.008, 0);
    glVertex3f(1.0, -0.153, 0);
    glVertex3f(1.0, 0.578, 0);
    glEnd();
}

void drawAllFurniture()
{
    draw_bed();
    draw_supportWall();
    draw_table();
    draw_tv();
    draw_stairs();
    draw_windows();
}