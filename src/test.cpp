#include <GL/glut.h>

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1, 1.0, -1, 1.0, 1.0, -1.0);
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.5, 0.5);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.5, 0.5);
    glVertex2d(-0.5, 0.5);
    glVertex2f(0, -0.25);
    glEnd();

    glColor3f(0.5, 0.5, 1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.482, 0.49);
    glVertex2d(-0.482, 0.49);
    glVertex2f(0, -0.225);

    glEnd();

    glFlush();
}

int main(int iArgc, char **cppArgv)
{
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(960, 1040);
    glutInitWindowPosition(959, 0);
    glutCreateWindow("CSE_414");
    Initialize();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}