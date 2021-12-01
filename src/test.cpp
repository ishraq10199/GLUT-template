#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include <iostream>
#include "floor.h"
#include "plant.h"
#include "walls.h"
#include "furniture.h"
#include "outside.h"

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1, 1.0, -1, 1.0, 5.0, -5.0);
}

void renderScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0.1, 1);

    // glPushMatrix();
    drawOutside();
    drawFloor();

    drawWall_A();
    drawWall_B();
    drawAllFurniture();

    drawPlant();
    t += 0.0001;
    if (currentMode == NIGHT)
    {
        glColor4f(0, 0, 0, .7);
        glBegin(GL_POLYGON);
        glVertex3f(1, 1, 0);
        glVertex3f(1, -1, 0);
        glVertex3f(-1, -1, 0);
        glVertex3f(-1, 1, 0);
        glEnd();

        // draw stars at night

        glPushMatrix();
        glScalef(0.5, 0.5, 0);
        glTranslatef(.5, .5, 0);

        draw_stars(.8, .5, 1);
        draw_stars(.98, .47, 2);
        draw_stars(.35, .6, 3);
        draw_stars(.2, .7, 4);
        draw_stars(.5, .7, 5);
        draw_stars(1.3, .5, 6);

        glPopMatrix();
    }

    // glPopMatrix();
    glFlush();
}

void mouseFunc(int button, int state, int x, int y)
{
    unsigned int half_window_width = glutGet(GLUT_WINDOW_WIDTH) / 2;
    unsigned int half_window_height = glutGet(GLUT_WINDOW_HEIGHT) / 2;

    float _x = ((float)x - half_window_width) / half_window_width;
    float _y = -((float)y - half_window_height) / half_window_height;

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
        std::cout << "glVertex3f(" << _x << ", " << _y << ", 0);" << std::endl;

    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        if (currentMode == NIGHT)
            currentMode = DAY;
        else
            currentMode = NIGHT;
    }
}

int main(int iArgc, char **cppArgv)
{
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // glutInitWindowSize(1280, 720);
    glutInitWindowSize(1920, 1080);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("CSE_414");
    Initialize();

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);

    glutDisplayFunc(renderScene);
    glutIdleFunc(renderScene);

    // THIS LINE TO ATTACH MOUSE FUNCTION TO WINDOW
    glutMouseFunc(mouseFunc);
    glutMainLoop();
    return 0;
}
