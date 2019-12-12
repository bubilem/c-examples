#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x = 1;

    if (x == 1)
    {
        printf("x je 1\n");
    }

    if (x != 2)
    {
        printf("x neni 2\n");
    }
    else
    {
        printf("x je 2\n");
    }

    if (x > 10)
    {
        printf("x je vetsi jak 10\n");
    }
    else if (x > 0)
    {
        printf("x je vetsi jak 0\n");
    }
    else if (x == 0)
    {
        printf("x je rovno 0\n");
    }
    else
    {
        printf("x je zaporne\n");
    }

    switch (x)
    {
    case 0:
        printf("x je 0\n");
        break;
    case 100:
        printf("x je 100\n");
        break;
    default:
        printf("x neni 0 ani 100\n");
    }

    if (x >= 0 && x < 100)
    {
        printf("x je v intervalu <0;100)\n");
    }

    if (x < 100 || x > 200)
    {
        printf("x je mensi nez 100 nebo vetsi nez 200\n");
    }

    if (x % 2 == 0)
    {
        printf("x je sude cislo");
    }

    if (x % 2)
    {
        printf("x je liche cislo");
    }

    return 0;
}