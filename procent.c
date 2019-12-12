#include <stdio.h>
#include <math.h>

double procent(int value, int maxValue)
{
    double procento = (value / (double)maxValue) * 100;
    procento *= 100;
    procento = round(procento);
    procento /= 100;
    return procento;
    //return round((value / (double)maxValue) * 10000)/100;
}

int main()
{
    printf("%f\n", procent(51, 171));
    printf("%.2f\n", procent(51, 171));

    return 0;
}