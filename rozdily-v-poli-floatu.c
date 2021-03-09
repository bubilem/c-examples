#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int size = 5;
    float pole_cisel[size];
    float pole_rozdilu[size - 1];
    char space[] = "     ";
    srand(time(NULL));
    printf("Prvky pole a rozdily sousedu:\n");
    for (int i = 0; i < size; i++)
    {
        pole_cisel[i] = (rand() % 10000) / 100.;
        printf("%05.2f%s", pole_cisel[i], space);
    }
    printf("\n%s", space);
    for (int i = 0; i < size - 1; i++)
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