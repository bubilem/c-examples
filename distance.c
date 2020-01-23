#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double distance(int a[], int b[])
{
    int dx = abs(a[0] - b[0]);
    int dy = abs(a[1] - b[1]);
    return sqrt(dx * dx + pow(dy, 2));
}

int main()
{
    int Franta[2];
    Franta[0] = 4;
    Franta[1] = 10;

    int Babeta[] = {14, 21};

    printf("Distance: %.2f\n", distance(Franta, Babeta));
    printf("Distance: %.2f\n", distance(Babeta, Franta));

    return 0;
}