#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //pravouhly trojuhelnik
    float a = 20;
    float b = 1000;
    float fi;

    fi = atan(a / b);
    fi = fi / M_PI * 180;

    printf("%f", fi);
    return 0;
}