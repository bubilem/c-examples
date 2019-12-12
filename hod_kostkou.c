#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    printf("Hazeni kostkou dokud neni sestka\n");
    int pocetPokusu = 15;
    int pokus, hodnotaVrhu, celkovyPocetVrhu = 0;
    int seed = time(NULL);
    srand(seed);

    for (pokus = 1; pokus <= pocetPokusu; pokus++)
    {
        printf("%3i:", pokus);
        do
        {
            hodnotaVrhu = rand() % 6 + 1;
            celkovyPocetVrhu++;
            printf(" %i", hodnotaVrhu);
        } while (hodnotaVrhu != 6);
        printf("\n");
    }
    printf("\nPocet pokusu: %i\nPrumerny pocet hodu do 6: %.3f\n", pokus - 1, (double)celkovyPocetVrhu / (pokus - 1));

    return 0;
}