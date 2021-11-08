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