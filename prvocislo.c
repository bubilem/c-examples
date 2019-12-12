#include <stdio.h>
#include <math.h>

int jePrvocislo(int n)
{
    switch (n)
    {
    case 0:
    case 1:
        return 0;
    default:
        for (int i = 2; i <= ceil(sqrt(abs(n))); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

void vypisPrvocisla(int min, int max)
{
    for (int i = min; i <= max; i++)
    {
        if (jePrvocislo(i))
        {
            printf("%s%i", i > min ? " " : "", i);
        }
    }
}

int main()
{
    printf("\n\nVypis prvocisel: ");
    vypisPrvocisla(1000, 2000);
    return 0;
}