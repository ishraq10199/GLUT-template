#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include <iostream>
#include "arc.h"

float ratio;

void Initialize()
{
    glClearColor(0, 0, 0.1, 1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1, 1.0, -1, 1.0, 5.0, -5.0);
}

void renderScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0.1, 1);

    draw_arc();

    glFlush();
}

void mouseFunc(int button, int state, int x, int y)
{
    unsigned int half_window_width = glutGet(GLUT_WINDOW_WIDTH) / 2;
    unsigned int half_window_height = glutGet(GLUT_WINDOW_HEIGHT) / 2;

    float _x = ((float)x - half_window_width) / half_window_width;
    float _y = -((float)y - half_window_height) / half_window_height;

    if (button == GLUT_LEFT_BUTTON)
        std::cout << "(" << _x << ", " << _y << ")" << std::endl;
}

int main(int iArgc, char **cppArgv)
{
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("TEST 2");
    Initialize();
    glutDisplayFunc(renderScene);
    // glutIdleFunc(renderScene);

    // THIS LINE TO ATTACH MOUSE FUNCTION TO WINDOW
    glutMouseFunc(mouseFunc);
    glutMainLoop();
    return 0;
}
