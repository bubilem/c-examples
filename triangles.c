#include <stdlib.h>
#include <stdio.h>

void triangle_1(int high)
{
    int row, column;
    for (row = 1; row <= high; row++)
    {
        for (column = 0; column < row; column++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void triangle_2(int high)
{
    int nihil = high - 1;
    int brick = 1;
    for (int row = 1; row <= high; row++)
    {
        for (int i = 1; i <= nihil; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= brick; i++)
        {
            printf("#");
        }
        printf("\n");
        nihil--;
        brick += 2;
    }
}

void triangle_3(int high)
{
    int nihil = high;
    int brick = 1;
    for (int row = 1; row <= high; row++)
    {
        for (int i = 1; i < nihil; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < brick; i++)
        {
            printf("%i", row);
        }
        printf("\n");
        nihil--;
        brick += 2;
    }
}

void triangle_4(int high)
{
    int nihil = high;
    int brick = 1;
    for (int row = 1; row <= high; row++)
    {
        int val = 1;
        for (int i = 1; i < nihil; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < brick; i++)
        {
            printf("* ");
        }
        printf("\n");
        nihil--;
        brick++;
    }
}

int main()
{
    int high = 5;
    triangle_1(high);
    triangle_2(high);
    triangle_3(high);
    triangle_4(high);
    return 0;
}