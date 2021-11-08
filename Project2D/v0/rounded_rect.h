#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>

float corner_radius = 0.1;

void draw_vertices_for_rounded_corner(float cx, float cy, int quadrant, float r = corner_radius)
{

    if (quadrant == 1)
    {
        for (int i = 0; i <= 25; i++)
        {
            float theta = 2.0f * 3.1415926f * float(i) / 100.0; //get the current angle

            float x = r * cosf(theta); //calculate the x component
            float y = r * sinf(theta); //calculate the y component

            glVertex2f(x + cx, y + cy);
        }
    }

    if (quadrant == 2)
    {
        for (int i = 25; i >= 0; i--)
        {
            float theta = 2.0f * 3.1415926f * float(i) / 100.0; //get the current angle

            float x = r * cosf(theta); //calculate the x component
            float y = r * sinf(theta); //calculate the y component

            glVertex2f(-x + cx, y + cy);
        }
    }

    if (quadrant == 3)
    {
        for (int i = 0; i <= 25; i++)
        {
            float theta = 2.0f * 3.1415926f * float(i) / 100.0; //get the current angle

            float x = r * cosf(theta); //calculate the x component
            float y = r * sinf(theta); //calculate the y component

            glVertex2f(-x + cx, -y + cy);
        }
    }
    if (quadrant == 4)
    {
        for (int i = 25; i >= 0; i--)
        {
            float theta = 2.0f * 3.1415926f * float(i) / 100.0; //get the current angle

            float x = r * cosf(theta); //calculate the x component
            float y = r * sinf(theta); //calculate the y component

            glVertex2f(x + cx, -y + cy);
        }
    }
}

void draw_rounded_rect(float bottom_left_x, float bottom_left_y, float length, float width, float gap = corner_radius)
{
    glColor3f(.8, .8, 1);

    // USE GL_LINE_LOOP FOR NO INSIDE COLOR (NO FILL COLOR)
    // USE GL_POLYGON FOR FILLING THE SHAPE WITH COLOR
    // glBegin(GL_LINE_LOOP);
    glBegin(GL_POLYGON);

    // FOLLOWING LINES ONLY DRAW VERTICES FOR THE CORNER POINTS

    draw_vertices_for_rounded_corner(bottom_left_x + length - gap, bottom_left_y + width - gap, 1, gap);
    draw_vertices_for_rounded_corner(bottom_left_x + gap, bottom_left_y + width - gap, 2, gap);
    draw_vertices_for_rounded_corner(bottom_left_x + gap, bottom_left_y + gap, 3, gap);
    draw_vertices_for_rounded_corner(bottom_left_x + length - gap, bottom_left_y + gap, 4, gap);

    glEnd();
}
