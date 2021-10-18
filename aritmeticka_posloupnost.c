#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int an(int a1, int d, int n)
{
    return a1 + ((n - 1) * d);
}

void gene(int a1, int d, int n)
{
    for (int a = a1; a <= an(a1, d, n); a += d)
    {
        printf("%s%d", a != a1 ? ", " : "", a);
    }
    printf("\n");
}

int main()
{
    //printf("%d\n", an(5, 2, 4));
    gene(7, 7, 10);
    return 0;
}