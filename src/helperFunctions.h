#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H

#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>

void rgb(int r, int g, int b)
{
    float _r = r / 255.0;
    float _g = g / 255.0;
    float _b = b / 255.0;
    glColor3f(_r, _g, _b);
}

void draw_circle(float cx, float cy, float radius, uint16_t mode = GL_POLYGON)
{
    int num_segments = 30;
    glBegin(mode);
    for (int ii = 0; ii < num_segments; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments); //get the current angle

        float x = radius * cosf(theta); //calculate the x component
        float y = radius * sinf(theta); //calculate the y component

        glVertex2f(x + cx, y + cy); //output vertex
    }
    glEnd();
}

#endif