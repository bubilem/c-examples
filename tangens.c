#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.141593

float inch2cm(float inch)
{
    return inch * 2.54;
}

float deg2rad(float deg)
{
    return (deg / 180) * PI;
}

float rad2deg(float rad)
{
    return (rad / PI) * 180;
}

double prepona(double alpha, double a)
{
    /* tan(alpha) = b/a  */
    double b = tan(deg2rad(alpha)) * a;
    /* pythagoras */
    double c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

int main()
{
    printf("%f\n", deg2rad(360));
    printf("%f\n", rad2deg(PI / 4));
    return 0;
}
