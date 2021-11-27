#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include "helperFunctions.h"

float bias = -1;

void draw_sky()
{

    if (currentMode == NIGHT)
        rgb(4, 2, 150);
    else
        rgb(207, 235, 252);
    glBegin(GL_POLYGON);
    glVertex3f(0.18, 0.7, 0);
    glVertex3f(0.18, -0.18, 0);
    glVertex3f(1, -0.18, 0);
    glVertex3f(1, 0.7, 0);
    glEnd();
}

void draw_cloud(float _x, float _y)
{
    glColor3f(1, 1, 1);
    draw_circle(-0.765 + _x, 0.131 + _y, 0.065);
    draw_circle(-0.719 + _x, 0.119 + _y, 0.065);
    draw_circle(-0.666 + _x, 0.117 + _y, 0.044);
    draw_circle(-0.608 + _x, 0.127 + _y, 0.072);
    draw_circle(-0.538 + _x, 0.171 + _y, 0.114);
    draw_circle(-0.481 + _x, 0.123 + _y, 0.04);
    draw_circle(-0.418 + _x, 0.165 + _y, 0.116);
    draw_circle(-0.365 + _x, 0.091 + _y, 0.038);
    draw_circle(-0.312 + _x, 0.119 + _y, 0.053);
    draw_circle(-0.291 + _x, 0.142 + _y, 0.063);
    draw_circle(-0.256 + _x, 0.113 + _y, 0.029);
    draw_circle(-0.322 + _x, 0.178 + _y, 0.057);
    draw_circle(-0.336 + _x, 0.222 + _y, 0.044);
    draw_circle(-0.375 + _x, 0.256 + _y, 0.072);
    draw_circle(-0.46 + _x, 0.264 + _y, 0.053);
    draw_circle(-0.514 + _x, 0.27 + _y, 0.078);
    draw_circle(-0.58 + _x, 0.298 + _y, 0.082);
    draw_circle(-0.637 + _x, 0.283 + _y, 0.076);
    draw_circle(-0.686 + _x, 0.228 + _y, 0.053);
    draw_circle(-0.719 + _x, 0.199 + _y, 0.053);
    draw_circle(-0.646 + _x, 0.184 + _y, 0.093);
}

void draw_cloudOverlay()
{
    glColor4f(0, 0, 0, .5);
    glBegin(GL_POLYGON);
    glVertex3f(0.18, 0.7, 0);
    glVertex3f(0.18, -0.18, 0);
    glVertex3f(1, -0.18, 0);
    glVertex3f(1, 0.7, 0);
    glEnd();
}

void draw_stars(float _x, float _y, float id, float size = 0.005)
{
    float b = abs(sinf(40 * (t + id)));

    if (b < 0.3)
        b = 0.3;

    if (b > 0.7)
        b = 0.7;

    glColor3f(b, b, b);

    glBegin(GL_LINE_LOOP);

    glVertex3f(_x - size * 2, _y, 0);
    glVertex3f(_x - size / 2, _y + size / 2, 0);
    glVertex3f(_x, _y + size * 3, 0);
    glVertex3f(_x + size / 2, _y + size / 2, 0);
    glVertex3f(_x + size * 2, _y, 0);
    glVertex3f(_x + size / 2, _y - size / 2, 0);
    glVertex3f(_x, _y - size * 3, 0);
    glVertex3f(_x - size / 2, _y - size / 2, 0);
    glEnd();

    draw_circle(_x, _y, .005);
}

void drawOutside()
{
    bias += 0.00005;
    if (bias >= 5)
        bias = -1;
    draw_sky();

    // start at .3
    // end at 2.0
    glPushMatrix();
    glRotatef(-10, 0, 0, 1);

    glRotatef(30, 0, 1, 0);
    glScalef(.3, .3, 1);
    glTranslatef(bias, 0, 0);

    draw_cloud(0, 1.5);
    glScalef(1.5, 1.5, 1);
    draw_cloud(1, .8);

    glPopMatrix();
    if (currentMode == NIGHT)
    {
        draw_cloudOverlay();
    }
}
