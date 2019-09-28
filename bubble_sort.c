#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int POCET_PRVKU = 10;
const int MAX_HODNOTA = 100;

void bubbleSort(int *data)
{
    int tmp, prohozy;
    for (int j = 0; j < POCET_PRVKU - 1; j++)
    {
        prohozy = 0;
        for (int i = 0; i < POCET_PRVKU - 1 - j; i++)
        {
            if (data[i] > data[i + 1])
            {
                tmp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = tmp;
                prohozy++;
            }
        }
        if (!prohozy)
        {
            break;
        }
    }
}

void generujPrvkyPole(int *data)
{
    srand(time(0));
    for (int i = 0; i < POCET_PRVKU; i++)
    {
        data[i] = (rand() % MAX_HODNOTA) + 1;
    }
}

void zobrazPrvkyPole(int *data)
{
    for (int i = 0; i < POCET_PRVKU; i++)
    {
        if (i > 0)
        {
            printf("\t");
        }
        printf("%4i", data[i]);
    }
    printf("\n");
}

int main()
{
    int data[POCET_PRVKU];
    generujPrvkyPole(data);
    zobrazPrvkyPole(data);
    bubbleSort(data);
    zobrazPrvkyPole(data);
    return 0;
}