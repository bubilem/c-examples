#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Program pro vypocet koeficientu kvadraticka rovnice Ax2+Bx+C=0\n");
        printf("Musite zadat 3 argumenty, ktere urcuji koeficienty rovnice A, B a C.\n");
        printf("napr: kvadraticka_rovnice.exe 4.2 2 -1.5\n");
        return 1;
    }
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    printf("Vase kvadraticka rovnice: ");
    printf("%.3f*x2 %c %.3f*x %c %.3f = 0\n", a, b < 0 ? '-' : '+', b < 0 ? -b : b, c < 0 ? '-' : '+', c < 0 ? -c : c);
    double D = (b * b) - (4 * a * c);
    printf("Diskriminant D = %.3f\n", D);
    if (D == 0)
    {
        double x1 = -b / (2 * a);
        printf("Rovnice ma jedno reseni x = %.3f.\n", x1);
    }
    else if (D > 0)
    {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        printf("Rovnice ma dve reseni x1 = %.3f a x2 = %.3f.\n", x1, x2);
    }
    else
    {
        printf("Rovnice nema v realnem oboru reseni.\n");
    }
    return 0;
}