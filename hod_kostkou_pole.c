#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* cislo hazene serie */
    int serie;
    /* hodnota jednotliveho hodu 1 - 6 */
    int hod;
    /* pole pro citani jednotlivych hazenych hodnot */
    int statistika[7] = {0, 0, 0, 0, 0, 0, 0};
    /* nastaveni generatoru nahodnych cisel */
    srand(time(0));
    printf("------------------------\nHazeni kostkou do sestky\n------------------------\n");
    for (serie = 1; serie <= 100; serie++)
    {
        printf("%3i:", serie);
        /* delej... */
        do
        {
            /* generuj nahodne cislo z rozsahu <1;6> */
            hod = (rand() % 6) + 1;
            /* vypis jej */
            printf(" %i", hod);
            /* eviduj hod jako takovy */
            statistika[0]++;
            /* eviduj konkretni hod cisla */
            statistika[hod]++;
        } while (hod != 6); /* ...dokud nepadla sestka */
        printf("\n");
    }
    /* vypis statistika */
    printf("----------\nStatistika:\n");
    printf("Pocet hodu cisla 1: %3i\n", statistika[1]);
    printf("Pocet hodu cisla 2: %3i\n", statistika[2]);
    printf("Pocet hodu cisla 3: %3i\n", statistika[3]);
    printf("Pocet hodu cisla 4: %3i\n", statistika[4]);
    printf("Pocet hodu cisla 5: %3i\n", statistika[5]);
    printf("Pocet hodu cisla 6: %3i\n", statistika[6]);
    printf("Prumerny pocet hodu do cisla 6: %i / %i = %.2f\n", statistika[0], serie, (double)statistika[0] / (serie - 1));
    return 0;
}