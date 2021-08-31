#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float p[2][2] = {{1, 4}, {4, 2}};
    float c[2] = {15, 3};
    float k = (p[0][1] - p[1][1]) / (p[0][0] - p[1][0]);
    float q = p[0][1] - k * p[0][0];

    if (abs(c[1] - (k * c[0] + q)) < 0.000001)
    {
        puts("lezi");
    }
    else
    {
        puts("nelezi");
    }
    return 0;
}