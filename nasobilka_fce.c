#include <stdio.h>

void nasobilka(int number)
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%ix%2i=%3i | ", i, number, i * number);
    }
    printf("\n");
}

int main()
{
    nasobilka(5);
    nasobilka(15);
    /*
    for (int i = 1; i <= 20; i++)
    {
        nasobilka(i);
    }
    */
    return 0;
}