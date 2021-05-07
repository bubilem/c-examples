#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void my_print_floats(float *ptr, int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        printf("%09.6f%s", *(ptr + i), i < cnt - 1 ? ", " : "\n");
    }
}

void my_gener_floats(float *ptr, int cnt)
{
    float number;
    srand(time(NULL));
    for (int i = 0; i < cnt; i++)
    {
        number = ((float)rand() / (float)RAND_MAX) * 100;
        *(ptr + i) = number;
    }
}

void my_round_floats(float *ptr, int cnt)
{
    float number;
    for (int i = 0; i < cnt; i++)
    {
        *(ptr + i) = (float)round(*(ptr + i) * 100) / 100.;
    }
}

int main()
{
    float numbers[10] = {0};
    int count = sizeof(numbers) / sizeof(numbers[0]);
    my_print_floats(numbers, count);
    my_gener_floats(numbers, count);
    my_print_floats(numbers, count);
    my_round_floats(numbers, count);
    my_print_floats(numbers, count);
    return 0;
}
