#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    // bod A a jeho souřadnice
    float Ax = -2;
    float Ay = 4;

    // bod B a jeho souřadnice
    float Bx = 5.6;
    float By = 3;

    /* použijeme Pythagorovu větu:
    vzdalenost = odmocnina(rozdil_x**2 + rozdil_y**2) */
    float rozdil_x = abs(Ax - Bx);
    float rozdil_y = abs(Ay - By);
    float vzdalenost = sqrt(pow(rozdil_x, 2) + pow(rozdil_y, 2));
    // vypisy:
    printf("A[%.2f,%.2f], B[%.2f,%.2f]\n", Ax, Ay, Bx, By);
    printf("Vzdalenost A od B je %0.3f.\n", vzdalenost);
    return 0;
}