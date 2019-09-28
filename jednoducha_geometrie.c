#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double obsahKruhu(double r)
{
    return M_PI * r * r;
}

double obvodKruhu(double r)
{
    return 2 * M_PI * r;
}

double uhloprickaObdelniku(double a, double b)
{
    return sqrt(a * a + b * b);
}

double objemKuzelu(double r, double v)
{
    return (M_PI * r * r * v) / 3;
}

int main()
{
    printf("Jednoducha geometrie\n");
    printf("--------------------\n");

    /* kruh */
    double r = 1.5;
    printf("Obvod kruhu o polomeru r = %.2f m je %.4f m.\n", r, obvodKruhu(r));
    printf("Obsah kruhu o polomeru r = %.2f m je %.4f m2.\n", r, obsahKruhu(r));

    /* obdelnik */
    double a = 5, b = 4.5;
    printf("Delka uhlopricky obdelniku o stranach %.2f x %.2f m je %.4f m.\n", a, b, uhloprickaObdelniku(a, b));

    /* jehlan */
    double v = 4;
    r = 2.5;
    printf("Objem kuzelu o polomeru podstavy r = %.2f m a vysce h = %.2f m je %.4f m3.\n", r, v, objemKuzelu(r, v));

    return 0;
}