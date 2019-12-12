#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Aritmeticke operace\n");
    int x, y = 2;
    x = (5 + 2 * y) - 4;
    x += 4;
    x++;
    y = 3 + x++ - 1 + x;
    printf("x = %i\ny = %i", x, y);

    return 0;
}