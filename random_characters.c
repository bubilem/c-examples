#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define COUNT 5

char rndChar(char *itms, int *cnts)
{
    int key;
    int min = *cnts;
    int max = *cnts;
    for (int i = 1; i < COUNT; i++)
    {
        min = *(cnts + i) < min ? *(cnts + i) : min;
        max = *(cnts + i) > max ? *(cnts + i) : max;
    }
    max = min == max ? max + 1 : max;
    do
    {
        key = rand() % COUNT;
    } while (*(cnts + key) != min);
    *(cnts + key) = *(cnts + key) + 1;
    return *(itms + key);
}

char totalRndChar(char *itms, int *cnts)
{
    int key = rand() % COUNT;
    *(cnts + key) = *(cnts + key) + 1;
    return *(itms + key);
}

int main()
{
    char itms[COUNT] = {'A', 'B', 'C', 'D', 'E'};
    int cnts[COUNT] = {0};
    srand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        printf("%c ", rndChar(itms, cnts));
        //printf("%c ", totalRndChar(itms, cnts));
    }

    puts("");
    for (int i = 0; i < COUNT; i++)
    {
        printf("%c - %d\n", itms[i], cnts[i]);
    }
    return 0;
}
