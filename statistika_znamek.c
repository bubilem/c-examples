#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    float p[20] = {0.0};
    int i;

    /* prvni zpusob generovani znamek */
    float z[9] = {1., 1.5, 2., 2.5, 3., 3.5, 4., 4.5, 5.};
    for (i = 0; i < 20; i++)
    {
        int k = rand() % 9;
        p[i] = z[k];
        printf("%.1f ", p[i]);
    }

    printf("\n\n");

    /* druhy zpusob generovani znamek */
    for (i = 0; i < 20; i++)
    {
        p[i] = rand() % 9 / 2. + 1;
        printf("%.1f ", p[i]);
    }

    printf("\n\n");

    /* prumerna hodnota */
    float sum = 0;
    for (i = 0; i < 20; i++)
    {
        sum += p[i];
    }
    printf("Prumerna znamka: %.2f\n", sum / 20.);

    return 0;
}