#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include "helperFunctions.h"
// -24 degress

void draw_tv()
{

    glColor3f(0.1, 0.1, 0.1);
    glBegin(GL_POLYGON);

    glVertex3f(-0.812, 0.061, 0);
    glVertex3f(-0.234, 0.136, 0);
    glVertex3f(-0.234, 0.678, 0);
    glVertex3f(-0.812, 0.639, 0);

    glEnd();
}

void draw_table()
{
    // top of table
    glColor3f(0.764, 0.545, 0.411);
    glBegin(GL_POLYGON);

    glVertex3f(-0.235938, 0.166, 0);
    glVertex3f(-0.0945095, 0.089, 0);
    glVertex3f(-0.739, 0.011, 0);
    glVertex3f(-0.891, 0.078, 0);

    glEnd();

    // left side of table

    glColor3f(0.56, 0.4, 0.302);
    glBegin(GL_POLYGON);

    glVertex3f(-0.739, 0.011, 0);
    glVertex3f(-0.891, 0.078, 0);
    glVertex3f(-0.891, -0.194, 0);
    glVertex3f(-0.739, -0.2694, 0);

    glEnd();

    // front of table
    glColor3f(0.663, 0.475, 0.357);
    glBegin(GL_POLYGON);

    glVertex3f(-0.0945095, 0.089, 0);
    glVertex3f(-0.0945095, -0.175, 0);
    glVertex3f(-0.739, -0.2694, 0);
    glVertex3f(-0.739, 0.011, 0);

    glEnd();
}

void draw_supportWall()
{
    glColor3f(0.549, 0.502, 0.651);
    glBegin(GL_POLYGON);

    glVertex3f(-0.236, -0.0972, 0);
    glVertex3f(0.285937, -0.361, 0);
    glVertex3f(0.285937, 0.811, 0);
    glVertex3f(-0.236, 0.780, 0);

    glEnd();

    glColor3f(0.969, 0.91, 0.898);
    glBegin(GL_POLYGON);

    glVertex3f(0.285937, -0.361, 0);
    glVertex3f(0.321875, -0.355, 0);
    glVertex3f(0.321875, 1, 0);
    glVertex3f(0.285937, 1, 0);

    glEnd();

    glColor3f(0.549, 0.502, 0.651);
    glBegin(GL_POLYGON);

    glVertex3f(0.286, 0.931, 0);
    glVertex3f(0.285937, 1, 0);
    glVertex3f(0.07, 1.0, 0);

    glEnd();
}

void draw_bed()
{

    // front of the bed

    rgb(247, 232, 229);
    glBegin(GL_POLYGON);
    glVertex3f(-0.856, 0.747, 0);
    glVertex3f(0.286, 0.81, 0);
    glVertex3f(0.286, 0.931, 0);
    glVertex3f(-0.856, 0.886, 0);
    glEnd();

    // left side of the bed

    rgb(157, 139, 137);

    glBegin(GL_POLYGON);

    glVertex3f(-1.0, 0.961, 0);
    glVertex3f(-1.0, 0.833, 0);
    glVertex3f(-0.856, 0.747, 0);
    glVertex3f(-0.856, 0.886, 0);

    glEnd();

    // top of the bed

    rgb(197, 189, 214);
    glBegin(GL_POLYGON);

    glVertex3f(0.07, 1.0, 0);
    glVertex3f(0.286, 0.931, 0);
    glVertex3f(-0.856, 0.886, 0);
    glVertex3f(-1, 1, 0);
    glVertex3f(-1.0, 0.961, 0);
    glVertex3f(-0.856, 0.886, 0);

    glEnd();
}

void draw_stairs()
{
    glColor3f(0.773, 0.741, 0.839);
    glBegin(GL_POLYGON);

    glVertex3f(-0.855, 0.744, 0);
    glVertex3f(-0.961, 0.744, 0);
    glVertex3f(-1.0, 0.764, 0);
    glVertex3f(-1.0, 0.833, 0);

    glEnd();

    glColor3f(0.616, 0.545, 0.537);
    glBegin(GL_POLYGON);

    glVertex3f(-0.961, 0.636, 0);
    glVertex3f(-1.0, 0.664, 0);
    glVertex3f(-1.0, 0.764, 0);
    glVertex3f(-0.961, 0.744, 0);

    glEnd();

    rgb(247, 232, 229);
    glBegin(GL_POLYGON);

    glVertex3f(-0.823, 0.75, 0);
    glVertex3f(-0.961, 0.742, 0);
    glVertex3f(-0.961, 0.636, 0);
    glVertex3f(-0.823, 0.655, 0);

    glEnd();

    rgb(197, 189, 214);
    glBegin(GL_POLYGON);

    glVertex3f(-0.961, 0.636, 0);
    glVertex3f(-1.0, 0.664, 0);
    glVertex3f(-1.0, 0.633, 0);

    glEnd();

    rgb(247, 232, 229);
    glBegin(GL_POLYGON);

    glVertex3f(-0.923, 0.641, 0);
    glVertex3f(-1.0, 0.633, 0);
    glVertex3f(-1.0, 0.528, 0);
    glVertex3f(-0.923, 0.536, 0);

    glEnd();
}

void draw_windows()
{
    // Sky color
    // rgb(207, 235, 252);
    // glBegin(GL_POLYGON);

    // glVertex3f(0.323, 0.667, 0);
    // glVertex3f(0.613, 0.628, 0);
    // glVertex3f(0.613, 0.0, 0);
    // glVertex3f(0.323, 0.111, 0);

    // glEnd();

    // glBegin(GL_POLYGON);

    // glVertex3f(0.63, 0.625, 0);
    // glVertex3f(0.63, -0.008, 0);
    // glVertex3f(1.0, -0.153, 0);
    // glVertex3f(1.0, 0.578, 0);

    // glEnd();

    rgb(179, 179, 179);
    glBegin(GL_LINE_LOOP);

    glVertex3f(0.323, 0.667, 0);
    glVertex3f(0.613, 0.628, 0);
    glVertex3f(0.613, -0.0018, 0);
    glVertex3f(0.323, 0.111, 0);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3f(0.63, 0.627, 0);
    glVertex3f(0.63, -0.0095, 0);
    glVertex3f(1.0, -0.153, 0);
    glVertex3f(1.0, 0.578, 0);
    glEnd();
}

void draw_beanbags()
{
    rgb(189, 110, 116);
    glLineWidth(2);
    glBegin(GL_POLYGON);

    glVertex3f(-0.155, -0.639, 0);
    glVertex3f(-0.177, -0.633, 0);
    glVertex3f(-0.186, -0.628, 0);
    glVertex3f(-0.211, -0.617, 0);
    glVertex3f(-0.225, -0.597, 0);
    glVertex3f(-0.237, -0.594, 0);
    glVertex3f(-0.242, -0.592, 0);
    glVertex3f(-0.247, -0.581, 0);
    glVertex3f(-0.273, -0.586, 0);
    glVertex3f(-0.291, -0.589, 0);
    glVertex3f(-0.317, -0.65, 0);
    glVertex3f(-0.32, -0.692, 0);
    glVertex3f(-0.32, -0.747, 0);
    glVertex3f(-0.317, -0.772, 0);
    glVertex3f(-0.314, -0.789 - 0.1, 0);
    glVertex3f(-0.309, -0.808 - 0.1, 0);
    glVertex3f(-0.305, -0.825 - 0.1, 0);
    glVertex3f(-0.295, -0.842 - 0.1, 0);
    glVertex3f(-0.266, -0.878 - 0.1, 0);
    glVertex3f(-0.25, -0.889 - 0.1, 0);
    glVertex3f(-0.212, -0.914 - 0.1, 0);
    glVertex3f(-0.145, -0.914 - 0.1, 0);
    glVertex3f(-0.089, -0.931 - 0.1, 0);
    glVertex3f(0.05, -0.931 - 0.1, 0);
    glVertex3f(0.059, -0.919 - 0.1, 0);
    glVertex3f(0.1, -0.928 - 0.1, 0);
    glVertex3f(0.144, -0.928 - 0.1, 0);
    glVertex3f(0.155, -0.919 - 0.1, 0);
    glVertex3f(0.188, -0.878 - 0.1, 0);
    glVertex3f(0.237, -0.856 - 0.1, 0);
    glVertex3f(0.267, -0.847 - 0.1, 0);
    glVertex3f(0.28, -0.833 - 0.1, 0);
    glVertex3f(0.295, -0.758 - 0.1, 0);
    glVertex3f(0.295, -0.703, 0);
    glVertex3f(0.287, -0.683, 0);
    glVertex3f(0.273, -0.672, 0);
    glVertex3f(0.264, -0.631, 0);
    glVertex3f(0.25, -0.594, 0);
    glVertex3f(0.25, -0.531, 0);
    glVertex3f(0.248, -0.511, 0);
    glVertex3f(0.247, -0.503, 0);
    glVertex3f(0.244, -0.483, 0);
    glVertex3f(0.234, -0.461, 0);
    glVertex3f(0.222, -0.439, 0);
    glVertex3f(0.216, -0.4, 0);
    glVertex3f(0.212, -0.372, 0);
    glVertex3f(0.2, -0.356, 0);
    glVertex3f(0.186, -0.344, 0);
    glVertex3f(0.122, -0.342, 0);
    glVertex3f(0.092, -0.347, 0);
    glVertex3f(0.056, -0.333, 0);
    glVertex3f(0.036, -0.331, 0);
    glVertex3f(0.023, -0.336, 0);
    glVertex3f(-0.003, -0.353, 0);
    glVertex3f(-0.05, -0.353, 0);
    glVertex3f(-0.086, -0.392, 0);
    glVertex3f(-0.097, -0.411, 0);
    glVertex3f(-0.114, -0.453, 0);
    glVertex3f(-0.141, -0.458, 0);
    glVertex3f(-0.163, -0.461, 0);
    glVertex3f(-0.172, -0.469, 0);
    glVertex3f(-0.2, -0.494, 0);
    glVertex3f(-0.22, -0.5, 0);
    glVertex3f(-0.244, -0.519, 0);
    glVertex3f(-0.27, -0.558, 0);
    glVertex3f(-0.294, -0.589, 0);
    glVertex3f(-0.302, -0.592, 0);
    glVertex3f(-0.312, -0.611, 0);
    glVertex3f(-0.309, -0.636, 0);

    glEnd();

    // shade

    //darker shade
    rgb(150, 76, 80);
    glBegin(GL_POLYGON);
    glVertex3f(-0.260938, -0.591667, 0);
    glVertex3f(-0.217187, -0.633333, 0);
    glVertex3f(-0.2, -0.669444, 0);
    glVertex3f(-0.1875, -0.694444, 0);
    glVertex3f(-0.154687, -0.730556, 0);
    glVertex3f(-0.115625, -0.780556, 0);
    glVertex3f(-0.071875, -0.827778, 0);
    glVertex3f(-0.0421875, -0.869444, 0);
    glVertex3f(-0.01875, -0.913889, 0);
    glVertex3f(-0.003125, -0.955556, 0);
    glVertex3f(0.009375, -0.994444, 0);
    glVertex3f(0.009375, -1, 0);
    glVertex3f(-0.240625, -1, 0);
    glVertex3f(-0.274165, -0.966258, 0);
    glVertex3f(-0.282074, -0.955521, 0);
    glVertex3f(-0.289982, -0.946319, 0);
    glVertex3f(-0.297891, -0.935583, 0);
    glVertex3f(-0.304921, -0.920245, 0);
    glVertex3f(-0.31283, -0.903374, 0);
    glVertex3f(-0.31283, -0.889571, 0);
    glVertex3f(-0.31283, -0.877301, 0);
    glVertex3f(-0.313708, -0.866564, 0);
    glVertex3f(-0.313708, -0.851227, 0);
    glVertex3f(-0.314587, -0.842025, 0);
    glVertex3f(-0.314587, -0.828221, 0);
    glVertex3f(-0.314587, -0.812883, 0);
    glVertex3f(-0.314587, -0.791411, 0);
    glVertex3f(-0.314587, -0.77454, 0);
    glVertex3f(-0.318981, -0.753067, 0);
    glVertex3f(-0.318981, -0.731595, 0);
    glVertex3f(-0.318981, -0.708589, 0);
    glVertex3f(-0.319859, -0.691718, 0);
    glVertex3f(-0.317223, -0.662577, 0);
    glVertex3f(-0.315466, -0.644172, 0);
    glVertex3f(-0.3058, -0.634969, 0);
    glVertex3f(-0.298438, -0.619444, 0);
    glVertex3f(-0.290625, -0.611111, 0);
    glVertex3f(-0.28125, -0.597222, 0);
    glVertex3f(-0.289982, -0.621166, 0);
    glVertex3f(-0.282813, -0.6, 0);
    glVertex3f(-0.275, -0.586111, 0);
    glVertex3f(-0.26875, -0.583333, 0);
    glVertex3f(-0.259375, -0.597222, 0);
    glEnd();

    // lighter shade
    rgb(159, 80, 84);

    glBegin(GL_POLYGON);
    glVertex3f(-0.127979, -0.759202, 0);
    glVertex3f(-0.171227, -0.843558, 0);
    glVertex3f(-0.136805, -1, 0);
    glVertex3f(0.173112, -0.996997, 0);
    glVertex3f(0.186004, -0.978979, 0);
    glVertex3f(0.240331, -0.954955, 0);
    glVertex3f(0.268877, -0.944444, 0);
    glVertex3f(0.278085, -0.938438, 0);
    glVertex3f(0.294659, -0.86036, 0);
    glVertex3f(0.294659, -0.825826, 0);
    glVertex3f(0.276563, -0.8, 0);
    glVertex3f(0.2375, -0.783333, 0);
    glVertex3f(0.215625, -0.786111, 0);
    glVertex3f(0.171875, -0.805556, 0);
    glVertex3f(0.109375, -0.819444, 0);
    glVertex3f(0.0546875, -0.833333, 0);
    glVertex3f(0.0171875, -0.833333, 0);
    glVertex3f(-0.0359375, -0.811111, 0);
    glVertex3f(-0.0796875, -0.777778, 0);
    glVertex3f(-0.148438, -0.716667, 0);
    glVertex3f(-0.176563, -0.705556, 0);
    glVertex3f(-0.178288, -0.696319, 0);
    glEnd();

    // lighter middle shade
    rgb(153, 77, 81);
    glBegin(GL_POLYGON);
    glVertex3f(-0.16875, -0.716667, 0);
    glVertex3f(-0.192188, -0.716667, 0);
    glVertex3f(-0.203125, -0.741667, 0);
    glVertex3f(-0.207813, -0.786111, 0);
    glVertex3f(-0.209375, -0.825, 0);
    glVertex3f(-0.209375, -0.858333, 0);
    glVertex3f(-0.214062, -0.925, 0);
    glVertex3f(-0.210938, -0.963889, 0);
    glVertex3f(-0.203125, -0.986111, 0);
    glVertex3f(-0.189063, -0.988889, 0);
    glVertex3f(-0.0765625, -0.994444, 0);
    glVertex3f(-0.0546875, -0.983333, 0);
    glVertex3f(-0.0421875, -0.944444, 0);
    glVertex3f(-0.0375, -0.897222, 0);
    glVertex3f(-0.0375, -0.85, 0);
    glVertex3f(-0.040625, -0.811111, 0);
    glVertex3f(-0.053125, -0.775, 0);
    glVertex3f(-0.0578125, -0.763889, 0);
    glVertex3f(-0.0859375, -0.763889, 0);
    glVertex3f(-0.104687, -0.763889, 0);
    glVertex3f(-0.129688, -0.736111, 0);
    glVertex3f(-0.148438, -0.719444, 0);
    glEnd();

    //outlines

    rgb(130, 61, 64);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.155, -0.639, 0);
    glVertex3f(-0.177, -0.633, 0);
    glVertex3f(-0.186, -0.628, 0);
    glVertex3f(-0.211, -0.617, 0);
    glVertex3f(-0.225, -0.597, 0);
    glVertex3f(-0.237, -0.594, 0);
    glVertex3f(-0.242, -0.592, 0);
    glVertex3f(-0.247, -0.581, 0);
    glVertex3f(-0.273, -0.586, 0);
    glVertex3f(-0.317, -0.65, 0);
    glVertex3f(-0.32, -0.692, 0);
    glVertex3f(-0.32, -0.747, 0);
    glVertex3f(-0.317, -0.772, 0);
    glVertex3f(-0.314, -0.789 - 0.1, 0);
    glVertex3f(-0.309, -0.808 - 0.1, 0);
    glVertex3f(-0.305, -0.825 - 0.1, 0);
    glVertex3f(-0.295, -0.842 - 0.1, 0);
    glVertex3f(-0.266, -0.878 - 0.1, 0);
    glVertex3f(-0.25, -0.889 - 0.1, 0);
    glVertex3f(-0.212, -0.914 - 0.1, 0);
    glVertex3f(-0.145, -0.914 - 0.1, 0);
    glVertex3f(-0.089, -0.931 - 0.1, 0);
    glVertex3f(0.05, -0.931 - 0.1, 0);
    glVertex3f(0.059, -0.919 - 0.1, 0);
    glVertex3f(0.1, -0.928 - 0.1, 0);
    glVertex3f(0.144, -0.928 - 0.1, 0);
    glVertex3f(0.155, -0.919 - 0.1, 0);
    glVertex3f(0.188, -0.878 - 0.1, 0);
    glVertex3f(0.237, -0.856 - 0.1, 0);
    glVertex3f(0.267, -0.847 - 0.1, 0);
    glVertex3f(0.28, -0.833 - 0.1, 0);
    glVertex3f(0.295, -0.758 - 0.1, 0);
    glVertex3f(0.295, -0.703, 0);
    glVertex3f(0.287, -0.683, 0);
    glVertex3f(0.273, -0.672, 0);
    glVertex3f(0.264, -0.631, 0);
    glVertex3f(0.25, -0.594, 0);
    glVertex3f(0.25, -0.531, 0);
    glVertex3f(0.248, -0.511, 0);
    glVertex3f(0.247, -0.503, 0);
    glVertex3f(0.244, -0.483, 0);
    glVertex3f(0.234, -0.461, 0);
    glVertex3f(0.222, -0.439, 0);
    glVertex3f(0.216, -0.4, 0);
    glVertex3f(0.212, -0.372, 0);
    glVertex3f(0.2, -0.356, 0);
    glVertex3f(0.186, -0.344, 0);
    glVertex3f(0.122, -0.342, 0);
    glVertex3f(0.092, -0.347, 0);
    glVertex3f(0.056, -0.333, 0);
    glVertex3f(0.036, -0.331, 0);
    glVertex3f(0.023, -0.336, 0);
    glVertex3f(-0.003, -0.353, 0);
    glVertex3f(-0.05, -0.353, 0);
    glVertex3f(-0.086, -0.392, 0);
    glVertex3f(-0.097, -0.411, 0);
    glVertex3f(-0.114, -0.453, 0);
    glVertex3f(-0.141, -0.458, 0);
    glVertex3f(-0.163, -0.461, 0);
    glVertex3f(-0.172, -0.469, 0);
    glVertex3f(-0.2, -0.494, 0);
    glVertex3f(-0.22, -0.5, 0);
    glVertex3f(-0.244, -0.519, 0);
    glVertex3f(-0.27, -0.558, 0);
    glVertex3f(-0.294, -0.589, 0);
    glVertex3f(-0.302, -0.592, 0);
    glVertex3f(-0.312, -0.611, 0);
    glVertex3f(-0.309, -0.636, 0);

    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.056, -0.6, 0);
    glVertex3f(-0.006, -0.6, 0);
    glVertex3f(0.013, -0.572, 0);
    glVertex3f(0.027, -0.561, 0);
    glVertex3f(0.053, -0.533, 0);
    glVertex3f(0.077, -0.519, 0);
    glVertex3f(0.109, -0.514, 0);
    glVertex3f(0.131, -0.519, 0);
    glVertex3f(0.158, -0.553, 0);
    glVertex3f(0.181, -0.558, 0);
    glVertex3f(0.198, -0.561, 0);
    glVertex3f(0.225, -0.567, 0);
    glVertex3f(0.244, -0.603, 0);
    glVertex3f(0.252, -0.594, 0);

    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.198, -0.497, 0);
    glVertex3f(-0.184, -0.5, 0);
    glVertex3f(-0.172, -0.494, 0);
    glEnd();

    glLineWidth(1);
}

void drawAllFurniture()
{
    draw_bed();
    draw_supportWall();
    draw_table();
    draw_tv();
    draw_stairs();
    draw_windows();
    draw_beanbags();
}