#include <stdlib.h>
#include <stdio.h>

#define COUNT 20

int main()
{
    int tmp, p[COUNT];
    int count = sizeof(p) / sizeof(p[0]);
    //random naplnění a výpis pole prvek po prvku
    srand(1);
    for (int i = 0; i < count; i++)
    {
        p[i] = rand() % 100;
        printf("%02i ", p[i]);
    }
    //seřazení pole metodou Bubble sort
    for (int j = 0; j < count; j++)
    {
        for (int i = 0; i < count - j - 1; i++)
        {
            if (p[i] > p[i + 1])
            {
                tmp = p[i];
                p[i] = p[i + 1];
                p[i + 1] = tmp;
            }
        }
    }
    printf("\n");
    //výpis pole prvek po prvku
    for (int i = 0; i < count; i++)
    {
        printf("%02i ", p[i]);
    }
    return 0;
}