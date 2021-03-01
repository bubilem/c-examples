#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pole_cisel[12];
    float pole_rozdilu[11];
    char space[] = "     ";
    srand(0);
    printf("Prvky pole a rozdily sousedu:\n");
    for (int i = 0; i < sizeof(pole_cisel) / 4; i++)
    {
        pole_cisel[i] = (rand() % 10000) / 100.;
        printf("%05.2f%s", pole_cisel[i], space);
    }
    printf("\n%s", space);
    for (int i = 0; i < sizeof(pole_rozdilu) / 4; i++)
    {
        pole_rozdilu[i] = pole_cisel[i] - pole_cisel[i + 1];
        if (pole_rozdilu[i] < 0)
        {
            pole_rozdilu[i] *= -1;
        }
        printf("%05.2f%s", pole_rozdilu[i], space);
    }
    return 0;
}