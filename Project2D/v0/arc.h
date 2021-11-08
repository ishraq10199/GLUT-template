#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>

void draw_vertices_for_arcs(float radius, float location_x, float location_y, float starting_angle, float ending_angle, float arc_length)
{
    for (int i = 1; i < 101; i++)
    {
        starting_angle = 3.1415926f * starting_angle / 180.0;
        float theta = (arc_length * 2.0 * 3.1415926f * float(i) / 100.0) + starting_angle; //get the current angle
        if (theta >= ending_angle)
            break;
        float x = radius * cosf(theta); //calculate the x component
        float y = radius * sinf(theta); //calculate the y component

        glVertex2f(x + location_x, y + location_y);
    }
}

void draw_arc()
{
    glBegin(GL_LINE_STRIP);

    float partial = .5;

    draw_vertices_for_arcs(0.5, 0, 0, 30.0, 60.0, partial);

    glEnd();
}