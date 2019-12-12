#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void clearInputBuffer()
{
    while (getchar() != '\n')
        ;
}

int main()
{
    int x, y, cisloVypoctu = 0;
    double r;
    char c;
    printf("Vypocet kvantove konstanty bosonu tretiho stupne\n");
    do
    {
        printf("\nVypocet #%i:\n", ++cisloVypoctu);
        printf("Zadej x:");
        scanf(" %d", &x);
        clearInputBuffer();
        do
        {
            printf("Zadej y:");
            scanf(" %d", &y);
            clearInputBuffer();
            if (y == 0)
            {
                printf("Pozor. Y musi byt ruzne od nuly. Nulou nelze delit.\n");
            }
        } while (y == 0);

        if (x < 0)
        {
            x = x * (-1);
        }
        if (y < 0)
        {
            y *= -1;
        }
        r = (double)x / y;
        printf("r = x/y = %i/%i = %f\n", x, y, r);
        printf("\nChcete pokracovat?[A]no [N]e:");
        scanf(" %1c", &c);
        clearInputBuffer();
    } while (c == 'a' || c == 'A');
    return 0;
}