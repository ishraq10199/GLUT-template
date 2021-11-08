#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>

void drawFloor()
{
    int rows = 20;
    int cols = 6;
    float padding = 0.0075;

    float plank_length = .6;
    float plank_width = .2;

    glPushMatrix();

    glTranslatef(-.75, -.5, 0);

    glRotatef(180, 0, 0, 1);

    glRotatef(-75, 1, 0, 0);

    glRotatef(30, 0, 0, 1);

    glRotatef(180, 0, 0, 1);

    glTranslatef(-2, -2.9, 0);

    float r = .83;
    float g = .65;
    float b = .46;

    float offset_x = 0;
    float offset_y = 0;

    srand(0);

    for (int i = 0; i < rows; i++)
    {
        r = .83;
        g = .65;
        b = .46;
        for (int j = 0; j < cols; j++)
        {
            glColor3f(r, g, b);
            r += 0.03;
            g += 0.03;
            b += 0.03;
            glBegin(GL_QUADS);
            glVertex3f(offset_x + j * plank_length + padding / 2.25, offset_y + i * plank_width + padding / 1.5, 0);
            glVertex3f(offset_x + (j + 1) * plank_length - padding / 2.25, offset_y + i * plank_width + padding / 1.5, 0);
            glVertex3f(offset_x + (j + 1) * plank_length - padding / 2.25, offset_y + (i + 1) * plank_width - padding / 1.5, 0);
            glVertex3f(offset_x + j * plank_length + padding / 2.25, offset_y + (i + 1) * plank_width - padding / 1.5, 0);
            glEnd();

            if (1)
            {

                float starting_lines_x = offset_x + j * plank_length + padding / 2;
                float starting_lines_y = offset_y + i * plank_width - padding;

                float ending_lines_x = offset_x + (j + 1) * plank_length - padding / 2;
                float ending_lines_y = offset_y + (i + 1) * plank_width - padding;

                for (int m = 0; m < rand() % 5 + 2; m++)
                {

                    glColor3f(0, 0, 0);
                    // glLineWidth(2);
                    glBegin(GL_LINES);

                    float lineLength = 0.01 * (rand() % 6 + 1);

                    glVertex3f(starting_lines_x + (padding + .01) / 5, starting_lines_y + (m + 2) * (padding + .05) / 3, 0);
                    glVertex3f(starting_lines_x + (padding + .01) / 5 + lineLength, starting_lines_y + (m + 2) * (padding + .05) / 3, 0);

                    glEnd();

                    glBegin(GL_LINES);

                    lineLength = 0.01 * (rand() % 6 + 1);

                    glVertex3f(ending_lines_x - (padding + .01) / 5, ending_lines_y - (m + 2) * (padding + .05) / 3, 0);
                    glVertex3f(ending_lines_x - (padding + .01) / 5 - lineLength, ending_lines_y - (m + 2) * (padding + .05) / 3, 0);

                    glEnd();
                }
            }
        }
    }

    glPopMatrix();
}