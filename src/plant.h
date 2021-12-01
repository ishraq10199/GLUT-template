#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include "helperFunctions.h"
void draw_tub()
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

void draw_stem()
{
    rgb(46, 112, 46);
    glLineWidth(8);

    glBegin(GL_LINE_STRIP);
    // glVertex3f(-0.795635, -0.654036, 0);
    // glVertex3f(-0.803571, -0.583196, 0);
    // glVertex3f(-0.798142, -0.656501, 0);
    // glVertex3f(-0.782095, -0.661316, 0);
    // glVertex3f(-0.798986, -0.661316, 0);
    // glVertex3f(-0.793074, -0.648475, 0);
    // glVertex3f(-0.788851, -0.651685, 0);
    // glVertex3f(-0.786318, -0.654896, 0);
    // glVertex3f(-0.793919, -0.659711, 0);
    // glVertex3f(-0.79223, -0.648475, 0);
    // glVertex3f(-0.792, -0.647, 0);
    // glVertex3f(-0.8, -0.592, 0);
    // glVertex3f(-0.805, -0.578, 0);
    // glVertex3f(-0.805, -0.519, 0);
    // glVertex3f(-0.803, -0.475, 0);
    // glVertex3f(-0.797, -0.414, 0);
    // glVertex3f(-0.77, -0.333, 0);

    glVertex3f(-0.757812, -0.341667, 0);
    glVertex3f(-0.759375, -0.327778, 0);
    glVertex3f(-0.764063, -0.297222, 0);
    glVertex3f(-0.757812, -0.258333, 0);
    glVertex3f(-0.762, -0.278, 0);
    glVertex3f(-0.753, -0.244, 0);
    glVertex3f(-0.75, -0.219, 0);
    glVertex3f(-0.728, -0.178, 0);
    glVertex3f(-0.697, -0.131, 0);
    glVertex3f(-0.655, -0.089, 0);
    // glVertex3f(-0.536, -0.064, 0);
    // glVertex3f(-0.5, -0.069, 0);

    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.728, -0.175, 0);
    glVertex3f(-0.739, -0.158, 0);
    glVertex3f(-0.734, -0.125, 0);
    glVertex3f(-0.731, -0.058, 0);
    glVertex3f(-0.734, -0.006, 0);
    glVertex3f(-0.739, 0.083, 0);
    glVertex3f(-0.733, 0.269, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.739062, -0.191667, 0);
    glVertex3f(-0.734375, -0.177778, 0);
    glVertex3f(-0.742188, -0.163889, 0);
    glVertex3f(-0.7375, -0.141667, 0);
    glVertex3f(-0.742, -0.136, 0);
    glVertex3f(-0.759, -0.122, 0);
    glVertex3f(-0.783, -0.097, 0);
    glVertex3f(-0.786, -0.094, 0);
    glVertex3f(-0.792, -0.092, 0);
    glVertex3f(-0.805, -0.106, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.736, -0.078, 0);
    glVertex3f(-0.745, -0.056, 0);
    glVertex3f(-0.759, -0.042, 0);
    glVertex3f(-0.773, -0.022, 0);
    glVertex3f(-0.786, 0.014, 0);
    glVertex3f(-0.797, 0.031, 0);
    glVertex3f(-0.803, 0.053, 0);
    glVertex3f(-0.838, 0.108, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.655, -0.089, 0);
    glVertex3f(-0.645, -0.044, 0);
    glVertex3f(-0.628, -0.011, 0);
    glVertex3f(-0.614, 0.031, 0);
    glVertex3f(-0.572, 0.133, 0);
    glEnd();

    // glBegin(GL_LINE_STRIP);
    // glVertex3f(-0.784, -0.353, 0);
    // glVertex3f(-0.713, -0.281, 0);
    // glVertex3f(-0.675, -0.281, 0);
    // glEnd();

    // glBegin(GL_LINE_STRIP);

    // glEnd();

    // glBegin(GL_LINE_STRIP);

    // glEnd();

    // glBegin(GL_LINE_STRIP);

    // glEnd();
    // glBegin(GL_LINE_STRIP);

    // glEnd();
    // glBegin(GL_LINE_STRIP);

    // glEnd();
    glLineWidth(1);
}

void draw_leaf_A()
{
    rgb(84, 196, 84);

    glBegin(GL_POLYGON);
    glVertex3f(-0.733, 0.269, 0);
    glVertex3f(-0.733, 0.294, 0);
    glVertex3f(-0.728, 0.303, 0);
    glVertex3f(-0.728, 0.317, 0);
    glVertex3f(-0.731, 0.322, 0);
    glVertex3f(-0.741, 0.342, 0);
    glVertex3f(-0.747, 0.353, 0);
    glVertex3f(-0.758, 0.356, 0);
    glVertex3f(-0.778, 0.339, 0);
    glVertex3f(-0.789, 0.303, 0);
    glVertex3f(-0.775, 0.303, 0);
    glVertex3f(-0.769, 0.294, 0);
    glVertex3f(-0.756, 0.278, 0);
    glVertex3f(-0.759, 0.261, 0);
    glVertex3f(-0.762, 0.256, 0);
    glVertex3f(-0.769, 0.256, 0);
    glVertex3f(-0.778, 0.264, 0);
    glVertex3f(-0.791, 0.264, 0);
    glVertex3f(-0.808, 0.25, 0);
    glVertex3f(-0.817, 0.217, 0);
    glVertex3f(-0.791, 0.222, 0);
    glVertex3f(-0.789, 0.214, 0);
    glVertex3f(-0.792, 0.206, 0);
    glVertex3f(-0.808, 0.203, 0);
    glVertex3f(-0.814, 0.194, 0);
    glVertex3f(-0.816, 0.183, 0);
    glVertex3f(-0.823, 0.164, 0);
    glVertex3f(-0.8, 0.178, 0);
    glVertex3f(-0.805, 0.15, 0);
    glVertex3f(-0.816, 0.136, 0);
    glVertex3f(-0.823, 0.097, 0);
    glVertex3f(-0.825, 0.078, 0);
    glVertex3f(-0.828, 0.014, 0);
    glVertex3f(-0.814, 0.05, 0);
    glVertex3f(-0.8, 0.064, 0);
    glVertex3f(-0.792, 0.069, 0);
    glVertex3f(-0.778, 0.078, 0);
    glVertex3f(-0.775, 0.15, 0);
    glVertex3f(-0.77, 0.172, 0);
    glVertex3f(-0.758, 0.186, 0);
    glVertex3f(-0.758, 0.133, 0);
    glVertex3f(-0.764, 0.122, 0);
    glVertex3f(-0.764, 0.103, 0);
    glVertex3f(-0.761, 0.097, 0);
    glVertex3f(-0.758, 0.094, 0);
    glVertex3f(-0.706, 0.097, 0);
    glVertex3f(-0.698, 0.103, 0);
    glVertex3f(-0.697, 0.117, 0);
    glVertex3f(-0.702, 0.122, 0);
    glVertex3f(-0.714, 0.128, 0);
    glVertex3f(-0.716, 0.136, 0);
    glVertex3f(-0.72, 0.147, 0);
    glVertex3f(-0.719, 0.158, 0);
    glVertex3f(-0.705, 0.158, 0);
    glVertex3f(-0.697, 0.15, 0);
    glVertex3f(-0.688, 0.128, 0);
    glVertex3f(-0.673, 0.142, 0);
    glVertex3f(-0.658, 0.164, 0);
    glVertex3f(-0.653, 0.189, 0);
    glVertex3f(-0.658, 0.194, 0);
    glVertex3f(-0.664, 0.197, 0);
    glVertex3f(-0.675, 0.172, 0);
    glVertex3f(-0.697, 0.208, 0);
    glVertex3f(-0.702, 0.217, 0);
    glVertex3f(-0.702, 0.228, 0);
    glVertex3f(-0.683, 0.233, 0);
    glVertex3f(-0.678, 0.225, 0);
    glVertex3f(-0.659, 0.225, 0);
    glVertex3f(-0.645, 0.214, 0);
    glVertex3f(-0.644, 0.231, 0);
    glVertex3f(-0.67, 0.272, 0);
    glVertex3f(-0.673, 0.289, 0);
    glVertex3f(-0.711, 0.286, 0);
    glVertex3f(-0.72, 0.286, 0);
    glVertex3f(-0.733, 0.269, 0);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINE_LOOP);
    //glVertex3f(-0.733, 0.269, 0);
    glVertex3f(-0.733, 0.294, 0);
    glVertex3f(-0.728, 0.303, 0);
    glVertex3f(-0.728, 0.317, 0);
    glVertex3f(-0.731, 0.322, 0);
    glVertex3f(-0.741, 0.342, 0);
    glVertex3f(-0.747, 0.353, 0);
    glVertex3f(-0.758, 0.356, 0);
    glVertex3f(-0.778, 0.339, 0);
    glVertex3f(-0.789, 0.303, 0);
    glVertex3f(-0.775, 0.303, 0);
    glVertex3f(-0.769, 0.294, 0);
    glVertex3f(-0.756, 0.278, 0);
    glVertex3f(-0.759, 0.261, 0);
    glVertex3f(-0.762, 0.256, 0);
    glVertex3f(-0.769, 0.256, 0);
    glVertex3f(-0.778, 0.264, 0);
    glVertex3f(-0.791, 0.264, 0);
    glVertex3f(-0.808, 0.25, 0);
    glVertex3f(-0.817, 0.217, 0);
    glVertex3f(-0.791, 0.222, 0);
    glVertex3f(-0.789, 0.214, 0);
    glVertex3f(-0.792, 0.206, 0);
    glVertex3f(-0.808, 0.203, 0);
    glVertex3f(-0.814, 0.194, 0);
    glVertex3f(-0.816, 0.183, 0);
    glVertex3f(-0.823, 0.164, 0);
    glVertex3f(-0.8, 0.178, 0);
    glVertex3f(-0.805, 0.15, 0);
    glVertex3f(-0.816, 0.136, 0);
    glVertex3f(-0.823, 0.097, 0);
    glVertex3f(-0.825, 0.078, 0);
    glVertex3f(-0.828, 0.014, 0);
    glVertex3f(-0.814, 0.05, 0);
    glVertex3f(-0.8, 0.064, 0);
    glVertex3f(-0.792, 0.069, 0);
    glVertex3f(-0.778, 0.078, 0);
    glVertex3f(-0.775, 0.15, 0);
    glVertex3f(-0.77, 0.172, 0);
    glVertex3f(-0.758, 0.186, 0);
    glVertex3f(-0.758, 0.133, 0);
    glVertex3f(-0.764, 0.122, 0);
    glVertex3f(-0.764, 0.103, 0);
    glVertex3f(-0.761, 0.097, 0);
    glVertex3f(-0.758, 0.094, 0);
    glVertex3f(-0.706, 0.097, 0);
    glVertex3f(-0.698, 0.103, 0);
    glVertex3f(-0.697, 0.117, 0);
    glVertex3f(-0.702, 0.122, 0);
    glVertex3f(-0.714, 0.128, 0);
    glVertex3f(-0.716, 0.136, 0);
    glVertex3f(-0.72, 0.147, 0);
    glVertex3f(-0.719, 0.158, 0);
    glVertex3f(-0.705, 0.158, 0);
    glVertex3f(-0.697, 0.15, 0);
    glVertex3f(-0.688, 0.128, 0);
    glVertex3f(-0.673, 0.142, 0);
    glVertex3f(-0.658, 0.164, 0);
    glVertex3f(-0.653, 0.189, 0);
    glVertex3f(-0.658, 0.194, 0);
    glVertex3f(-0.664, 0.197, 0);
    glVertex3f(-0.675, 0.172, 0);
    glVertex3f(-0.697, 0.208, 0);
    glVertex3f(-0.702, 0.217, 0);
    glVertex3f(-0.702, 0.228, 0);
    glVertex3f(-0.683, 0.233, 0);
    glVertex3f(-0.678, 0.225, 0);
    glVertex3f(-0.659, 0.225, 0);
    glVertex3f(-0.645, 0.214, 0);
    glVertex3f(-0.644, 0.231, 0);
    glVertex3f(-0.67, 0.272, 0);
    glVertex3f(-0.673, 0.289, 0);
    glVertex3f(-0.711, 0.286, 0);
    glVertex3f(-0.72, 0.286, 0);
    glVertex3f(-0.733, 0.269, 0);
    glEnd();
    glLineWidth(1);

    rgb(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.733, 0.269, 0);

    glVertex3f(-0.732538, 0.276878, 0);
    glVertex3f(-0.741908, 0.243004, 0);
    glVertex3f(-0.75724, 0.215022, 0);
    glVertex3f(-0.775128, 0.179676, 0);
    glVertex3f(-0.789608, 0.145803, 0);
    glVertex3f(-0.800681, 0.116348, 0);
    glVertex3f(-0.810903, 0.0854197, 0);

    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.733221, 0.274311, 0);
    glVertex3f(-0.705537, 0.255443, 0);
    glVertex3f(-0.680369, 0.267054, 0);
    glVertex3f(-0.669463, 0.265602, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.692898, 0.260057, 0);
    glVertex3f(-0.680422, 0.25431, 0);
    glVertex3f(-0.675624, 0.239943, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.743653, 0.239478, 0);
    glVertex3f(-0.712531, 0.21045, 0);
    glVertex3f(-0.695332, 0.201742, 0);
    glVertex3f(-0.670762, 0.187228, 0);

    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.708138, 0.209337, 0);
    glVertex3f(-0.70159, 0.189759, 0);
    glVertex3f(-0.696913, 0.177711, 0);
    glVertex3f(-0.685688, 0.173193, 0);
    glVertex3f(-0.682881, 0.161145, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.754671, 0.217009, 0);
    glVertex3f(-0.740861, 0.190616, 0);
    glVertex3f(-0.735987, 0.16129, 0);
    glVertex3f(-0.74411, 0.133431, 0);
    glVertex3f(-0.74411, 0.120235, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.737679, 0.172714, 0);
    glVertex3f(-0.732909, 0.165457, 0);
    glVertex3f(-0.72814, 0.152395, 0);
    glVertex3f(-0.72814, 0.140784, 0);
    glVertex3f(-0.719396, 0.129173, 0);
    glVertex3f(-0.720986, 0.119013, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.775168, 0.179289, 0);
    glVertex3f(-0.781879, 0.14374, 0);
    glVertex3f(-0.785235, 0.11592, 0);
    glVertex3f(-0.790588, 0.105023, 0);
    glVertex3f(-0.785098, 0.0882801, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.761337, 0.207547, 0);
    glVertex3f(-0.782021, 0.203193, 0);
    glVertex3f(-0.801909, 0.194485, 0);
    glVertex3f(-0.809069, 0.187228, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.783677, 0.204644, 0);
    glVertex3f(-0.792393, 0.191582, 0);
    glVertex3f(-0.797147, 0.190131, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.745081, 0.236575, 0);
    glVertex3f(-0.765612, 0.24238, 0);
    glVertex3f(-0.776732, 0.238026, 0);
    glVertex3f(-0.784431, 0.248186, 0);
    glVertex3f(-0.795552, 0.248186, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.778947, 0.24, 0);
    glVertex3f(-0.786235, 0.238571, 0);
    glVertex3f(-0.797571, 0.234286, 0);
    glVertex3f(-0.805668, 0.231429, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.734787, 0.267728, 0);
    glVertex3f(-0.739328, 0.30246, 0);
    glVertex3f(-0.748411, 0.324168, 0);
    glVertex3f(-0.766576, 0.325615, 0);
    glVertex3f(-0.769301, 0.332851, 0);

    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.740179, 0.302158, 0);
    glVertex3f(-0.753571, 0.315108, 0);
    glVertex3f(-0.7625, 0.31223, 0);
    glEnd();
}
void draw_leaf_B()
{
    glBegin(GL_POLYGON);
    rgb(84, 196, 84);

    glVertex3f(-0.566, 0.133, 0);
    glVertex3f(-0.594, 0.169, 0);
    glVertex3f(-0.595, 0.181, 0);
    glVertex3f(-0.623, 0.197, 0);

    glVertex3f(-0.656987, 0.135678, 0);
    glVertex3f(-0.625, 0.125, 0);
    glVertex3f(-0.591, 0.117, 0);
    glVertex3f(-0.594, 0.108, 0);
    glVertex3f(-0.65, 0.103, 0);
    glVertex3f(-0.661, 0.094, 0);
    glVertex3f(-0.659, 0.083, 0);
    glVertex3f(-0.641, -0.008, 0);
    glVertex3f(-0.631, 0.025, 0);
    glVertex3f(-0.606, 0.053, 0);
    glVertex3f(-0.595, 0.05, 0);
    glVertex3f(-0.6, 0.036, 0);
    glVertex3f(-0.613, 0.008, 0);
    glVertex3f(-0.619, -0.022, 0);
    glVertex3f(-0.613, -0.033, 0);
    glVertex3f(-0.603, -0.014, 0);
    glVertex3f(-0.589, -0.006, 0);
    glVertex3f(-0.592, -0.019, 0);
    glVertex3f(-0.602, -0.036, 0);
    glVertex3f(-0.602, -0.053, 0);
    glVertex3f(-0.575, -0.111, 0);
    glVertex3f(-0.572, -0.089, 0);
    glVertex3f(-0.548, -0.042, 0);
    glVertex3f(-0.547, -0.025, 0);
    glVertex3f(-0.553, 0.0, 0);
    glVertex3f(-0.567, 0.025, 0);
    glVertex3f(-0.57, 0.042, 0);
    glVertex3f(-0.561, 0.044, 0);
    glVertex3f(-0.552, 0.017, 0);
    glVertex3f(-0.534, -0.014, 0);
    glVertex3f(-0.517, 0.017, 0);
    glVertex3f(-0.52, 0.047, 0);
    glVertex3f(-0.55, 0.072, 0);
    glVertex3f(-0.55, 0.089, 0);
    glVertex3f(-0.523, 0.089, 0);
    glVertex3f(-0.517, 0.014, 0);
    glVertex3f(-0.514, 0.061, 0);
    glVertex3f(-0.502, 0.092, 0);
    glVertex3f(-0.503, 0.117, 0);
    glVertex3f(-0.52, 0.147, 0);
    glVertex3f(-0.566, 0.133, 0);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.566, 0.133, 0);
    glVertex3f(-0.594, 0.169, 0);
    glVertex3f(-0.595, 0.181, 0);
    glVertex3f(-0.623, 0.197, 0);

    glVertex3f(-0.656987, 0.135678, 0);
    glVertex3f(-0.625, 0.125, 0);
    glVertex3f(-0.591, 0.117, 0);
    glVertex3f(-0.594, 0.108, 0);
    glVertex3f(-0.65, 0.103, 0);
    glVertex3f(-0.661, 0.094, 0);
    glVertex3f(-0.659, 0.083, 0);
    glVertex3f(-0.641, -0.008, 0);
    glVertex3f(-0.631, 0.025, 0);
    glVertex3f(-0.606, 0.053, 0);
    glVertex3f(-0.595, 0.05, 0);
    glVertex3f(-0.6, 0.036, 0);
    glVertex3f(-0.613, 0.008, 0);
    glVertex3f(-0.619, -0.022, 0);
    glVertex3f(-0.613, -0.033, 0);
    glVertex3f(-0.603, -0.014, 0);
    glVertex3f(-0.589, -0.006, 0);
    glVertex3f(-0.592, -0.019, 0);
    glVertex3f(-0.602, -0.036, 0);
    glVertex3f(-0.602, -0.053, 0);
    glVertex3f(-0.575, -0.111, 0);
    glVertex3f(-0.572, -0.089, 0);
    glVertex3f(-0.548, -0.042, 0);
    glVertex3f(-0.547, -0.025, 0);
    glVertex3f(-0.553, 0.0, 0);
    glVertex3f(-0.567, 0.025, 0);
    glVertex3f(-0.57, 0.042, 0);
    glVertex3f(-0.561, 0.044, 0);
    glVertex3f(-0.552, 0.017, 0);
    glVertex3f(-0.534, -0.014, 0);
    glVertex3f(-0.517, 0.017, 0);
    glVertex3f(-0.52, 0.047, 0);
    glVertex3f(-0.55, 0.072, 0);
    glVertex3f(-0.55, 0.089, 0);
    glVertex3f(-0.523, 0.089, 0);
    glVertex3f(-0.517, 0.014, 0);
    glVertex3f(-0.514, 0.061, 0);
    glVertex3f(-0.502, 0.092, 0);
    glVertex3f(-0.503, 0.117, 0);
    glVertex3f(-0.52, 0.147, 0);
    glVertex3f(-0.566, 0.133, 0);
    glEnd();
    glLineWidth(1);

    rgb(0, 0, 0);
    glBegin(GL_LINE_STRIP);

    glVertex3f(-0.566, 0.133, 0);
    glVertex3f(-0.567187, 0.111111, 0);
    glVertex3f(-0.567187, 0.0833333, 0);
    glVertex3f(-0.571875, 0.075, 0);
    glVertex3f(-0.576563, 0.0527778, 0);
    glVertex3f(-0.578125, 0.025, 0);
    glVertex3f(-0.578125, -0, 0);
    glVertex3f(-0.575, -0.0194444, 0);
    glVertex3f(-0.575, -0.0333333, 0);
    glVertex3f(-0.575, -0.0583333, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.565725, 0.118326, 0);
    glVertex3f(-0.589094, 0.141414, 0);
    glVertex3f(-0.59591, 0.155844, 0);
    glVertex3f(-0.610516, 0.154401, 0);
    glVertex3f(-0.622201, 0.152958, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.6, 0.156384, 0);
    glVertex3f(-0.611404, 0.169297, 0);
    glVertex3f(-0.623684, 0.170732, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);

    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.56493, 0.119013, 0);
    glVertex3f(-0.540116, 0.105951, 0);
    glVertex3f(-0.531017, 0.0827286, 0);
    glVertex3f(-0.531017, 0.0638607, 0);
    glVertex3f(-0.537634, 0.0435414, 0);
    glVertex3f(-0.540116, 0.0319303, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.530942, 0.0725689, 0);
    glVertex3f(-0.530942, 0.0638607, 0);
    glVertex3f(-0.528251, 0.0507983, 0);
    glVertex3f(-0.527354, 0.0377358, 0);
    glVertex3f(-0.531839, 0.0232221, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.536817, 0.0986938, 0);
    glVertex3f(-0.522565, 0.0856313, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.570312, 0.0888889, 0);
    glVertex3f(-0.582812, 0.0861111, 0);
    glVertex3f(-0.6125, 0.0833333, 0);
    glVertex3f(-0.635938, 0.0722222, 0);
    glVertex3f(-0.642187, 0.0611111, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.609881, 0.0854197, 0);
    glVertex3f(-0.617547, 0.0692194, 0);
    glVertex3f(-0.636286, 0.0353461, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.578195, 0.0168919, 0);
    glVertex3f(-0.583557, -0.00506757, 0);
    glVertex3f(-0.589812, -0.0320946, 0);
    glVertex3f(-0.590706, -0.0557432, 0);

    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.552563, 0.111756, 0);
    glVertex3f(-0.544744, 0.113208, 0);
    glVertex3f(-0.53258, 0.11611, 0);
    glVertex3f(-0.522155, 0.11611, 0);
    glVertex3f(-0.511729, 0.101597, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.572006, 0.0914369, 0);
    glVertex3f(-0.56877, 0.0914369, 0);

    glEnd();
}

void draw_leaf_C()
{
    rgb(84, 196, 84);

    glBegin(GL_POLYGON);
    glVertex3f(-0.973437, -0.427778, 0);
    glVertex3f(-0.948438, -0.475, 0);
    glVertex3f(-0.953125, -0.538889, 0);
    glVertex3f(-12, -0.536111, 0);
    glVertex3f(-12, -0.536111, 0);
    glVertex3f(-1, -0.375, 0);
    glVertex3f(-0.973437, -0.352778, 0);
    glVertex3f(-0.960938, -0.372222, 0);
    glVertex3f(-0.964063, -0.405556, 0);
    glEnd();

    rgb(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.96875, -0.419444, 0);
    glVertex3f(-0.979688, -0.430556, 0);
    glVertex3f(-1, -0.447222, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.990625, -0.438889, 0);
    glVertex3f(-0.984375, -0.463889, 0);
    glVertex3f(-0.965625, -0.483333, 0);
    glVertex3f(-0.965625, -0.491667, 0);
    glVertex3f(-0.965625, -0.505556, 0);

    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.976125, -0.472644, 0);
    glVertex3f(-0.976125, -0.480243, 0);
    glVertex3f(-0.977961, -0.489362, 0);
    glVertex3f(-0.977961, -0.49848, 0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.984245, -0.431343, 0);
    glVertex3f(-0.981758, -0.404478, 0);
    glVertex3f(-0.987562, -0.395522, 0);
    glVertex3f(-0.994196, -0.391045, 0);
    glEnd();
}
float rtA = 0;
float f = 0;
int factorA = -1;
void drawPlant()
{
    f += 0.05;
    rtA = (5.0 * sinf(t * 1.8));
    float rtB = (2.0 * cosf(t)) + rtA;

        glPushMatrix();
    glTranslatef(-.13, 0, 0);
    draw_tub();
    glPushMatrix();
    glTranslatef(-.04, -0.32, 0);

    glPushMatrix();
    glTranslatef(-0.755, -0.45, 0);
    glRotatef(-rtB / 5, 0, 0, 1);
    glTranslatef(0.755, 0.45, 0);
    draw_stem();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.755, .25, 0);
    glRotatef((rtA + rtB) / 2, 0, 0, 1);
    glTranslatef(0.755, -.25, 0);
    draw_leaf_A();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.57, .14, 0);
    glRotatef((rtA + rtB) / 2, 0, 0, 1);
    glTranslatef(0.57, -.14, 0);
    draw_leaf_B();
    glPopMatrix();

    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-.96, -.42, 0);
    glRotatef((rtA + rtB) / 2, 0, 0, 1);
    glTranslatef(.96, .42, 0);
    draw_leaf_C();
    glPopMatrix();

    rgb(87, 46, 38);
    glBegin(GL_POLYGON);
    glVertex3f(-0.951581, -0.656364, 0);
    glVertex3f(-0.937747, -0.638182, 0);
    glVertex3f(-0.932806, -0.629091, 0);
    glVertex3f(-0.918972, -0.636364, 0);
    glVertex3f(-0.913043, -0.654545, 0);
    glVertex3f(-0.903162, -0.663636, 0);
    glVertex3f(-0.947628, -0.670909, 0);
    glEnd();

    if (currentMode == NIGHT)
    {
        rtA = -(8.0 * sinf(t * 3));
        rtB = -(5.0 * cosf(t)) + rtA;
    }
}