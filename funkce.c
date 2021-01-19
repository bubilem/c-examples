#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void hi()
{
    printf("Hello\n");
}

void println(char text[])
{
    printf("%s\n", text);
}

int myAbs(int x)
{
    return x < 0 ? x * -1 : x;
}

double avgAbs(int x, int y)
{
    return (myAbs(x) + myAbs(y)) / 2.0;
}

double velVek3D(int x, int y, int z)
{
    return sqrt(x * x + y * y + z * z);
}

int main()
{
    hi();
    printf("%f\n", velVek3D(-2, 3, 4));
    println("Konec.");
    return 0;
}