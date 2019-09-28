#include <stdio.h>

int main()
{

    for (int j = 1; j <= 20; j++)
    {
        if (j == 1)
        {
            printf("--------------\nMala nasobilka\n--------------\n");
        }
        if (j == 11)
        {
            printf("---------------\nVelka nasobilka\n---------------\n");
        }
        printf("%3i:", j);
        for (int i = 1; i <= 10; i++)
        {
            printf("\t%3i", i * j);
        }
        printf("\n");
    }
    return 0;
}