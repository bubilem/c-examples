#include <stdlib.h>
#include <stdio.h>

int interval(int min, int max, int type)
{
    if (min > max)
    {
        printf("Hehe, mas to obracene.\n");
        return 0;
    }
    switch (type)
    {
    case 0:
        printf("<%i;%i> = {", min, max);
        break;
    case 1:
        printf("(%i;%i) = {", min, max);
        min++;
        max--;
        break;
    case 2:
        printf("<%i;%i) = {", min, max);
        max--;
        break;
    case 3:
        printf("(%i;%i> = {", min, max);
        min++;
        break;
    default:
        printf("Kde jsi toto vzal?\n");
        return 0;
    }
    for (int i = min; i <= max; i++)
    {
        if (i != min)
        {
            printf(", ");
        }
        printf("%i", i);
        //printf("%s%i", i != min ? ", " : "", i);
    }
    printf("}\n");
    return (max - min) + 1;
}

int main()
{

    printf("Zapis intervalu\n");
    int pocetCiselIntervalu = interval(1, 2, 4);
    printf("Pocet cisel = %i\n", pocetCiselIntervalu);
    printf("\n");
    return 0;
}
