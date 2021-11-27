#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>

void draw_circle(float cx, float cy, float radius)
{
    int num_segments = 30;
    glBegin(GL_POLYGON);
    for (int ii = 0; ii < num_segments; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);

        float x = radius * cosf(theta);
        float y = radius * sinf(theta);

        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

// call draw_cloud within your Actual Draw funtion,
// like this:

// draw_cloud(1, .8);
// if you don't give parameters, it gets drawn to the left

void draw_cloud(float _x = 0, float _y = 0)
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