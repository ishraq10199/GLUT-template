#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>

void drawPlant_1()
{

    float top_radius = 0.10;
    float bottom_radius = 0.07;
    float height = -0.3;

    glPushMatrix();
    glTranslatef(-.8, -.65, 0);

    glPushMatrix();

    float angle = -70;

    glRotatef(angle, 1, 0, 0);

    // OUTSIDE SURFACE OF POT
    glColor3f(0.6, 0.4, 0.25);

    glBegin(GL_POLYGON);

    int isTop = 1;
    int isBottom = 0;

    for (int i = -1; i < 50; i++)
    {
        float theta = 2.0 * 3.1415926f * (float)i / (float)50;
        float x_comp_top = top_radius * cosf(theta);
        float x_comp_bottom = bottom_radius * cosf(theta);

        float y_comp_top = top_radius * sinf(theta);
        float y_comp_bottom = bottom_radius * sinf(theta);

        if (isTop != 0)
        {
            if (isTop == 1)
            {
                glVertex3f(x_comp_top, y_comp_top, 0);
                isTop = 2;
            }
            else if (isTop == 2)
            {
                glVertex3f(x_comp_top, y_comp_top, 0);
                isTop = 0;
                isBottom = 1;
                i -= 3;
            }
        }
        else
        {
            if (isBottom == 1)
            {
                glVertex3f(x_comp_bottom, y_comp_bottom, height);
                isBottom = 2;
            }
            else if (isBottom == 2)
            {
                glVertex3f(x_comp_bottom, y_comp_bottom, height);
                isBottom = 0;
                isTop = 1;
            }
        }
    }

    glEnd();

    glColor3f(0, 0, 0);

    glLineWidth(1);

    glBegin(GL_LINE_LOOP);

    for (int i = 0; i < 50; i++)
    {
        float theta = 2.0 * 3.1415926f * (float)i / (float)50;
        float x_comp = top_radius * cosf(theta);
        float y_comp = top_radius * sinf(theta);
        glVertex3f(x_comp, y_comp, 0);
    }
    glEnd();

    glColor3f(.34, .18, .15);

    glBegin(GL_POLYGON);

    float seg_end_i;

    int num_seg = 50;
    for (int i = 2; i < num_seg; i++)
    {
        float theta = 2.0 * 3.1415926f * (float)i / (float)num_seg;
        float x_comp = (top_radius - .01) * cosf(theta);
        float y_comp = (top_radius - .01) * sinf(theta);
        glVertex3f(x_comp, y_comp, -0.025);
        seg_end_i = i;
        if (i >= num_seg / 2.25)
            break;
    }
    glEnd();

    glBegin(GL_POLYGON);

    for (int i = 3; i < 50; i++)
    {
        float theta = 2.0 * 3.1415926f * (float)i / (float)num_seg;
        float x_comp = -top_radius * cosf(theta);
        float y_comp = -top_radius * sinf(theta);
        glVertex3f(x_comp, y_comp, 0);

        if (i >= 22)
            break;
    }
    glEnd();

    glPopMatrix();
    glPopMatrix();
}