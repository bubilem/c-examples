#include <stdlib.h>
#include <stdio.h>

void printItems(int items[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s%i", i > 0 ? ", " : "", items[i]);
    }
    printf("\n");
}

void bubleSort(int *items, int size)
{
    int i, n, tmp;
    for (i = 0; i < size; i++)
    {
        for (n = 0; n < size - i - 1; n++)
        {
            if (items[n] > items[n + 1])
            {
                tmp = items[n];
                items[n] = items[n + 1];
                items[n + 1] = tmp;
            }
        }
    }
}

int main()
{
    int prvky[] = {5, 8, 3, 7, 6, 9, 1, 2, 4};
    int pocetPrvku = (int)(sizeof(prvky) / sizeof(prvky[0]));

    printItems(prvky, pocetPrvku);
    bubleSort(prvky, pocetPrvku);
    printItems(prvky, pocetPrvku);

    return 0;
}