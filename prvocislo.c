#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int cislo = 21;
    int jePrvocislo = 1;

    if (cislo < 2)
    {
        jePrvocislo = 0;
    }
    else if (cislo > 2)
    {
        for (int i = 2; i < cislo; i++)
        {
            if (cislo % i == 0)
            {
                jePrvocislo = 0;
                break;
            }
        }
    }
    if (jePrvocislo == 1)
    {
        printf("\n%i je prvocislo.\n\n", cislo);
    }
    else
    {
        printf("\n%i neni prvocislo.\n\n", cislo);
    }
    return 0;
}