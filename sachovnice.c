#include <stdio.h>

int main()
{

    int n = 8;

    printf("--\n1. sachovnice (staticka)\n");
    printf("01010101\n");
    printf("10101010\n");
    printf("01010101\n");
    printf("10101010\n");
    printf("01010101\n");
    printf("10101010\n");
    printf("01010101\n");
    printf("10101010\n");

    printf("--\n2. sachovnice (for-for-if-else)\n");
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if ((x + y) % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }

    printf("--\n3. sachovnice (for-for)\n");
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            printf("%i", (x + y) % 2 ? 1 : 0);
        }
        printf("\n");
    }

    printf("--\n4. sachovnice (while-while)\n");
    int x = 0, y = 0;
    while (y < n)
    {
        x = 0;
        while (x < n)
        {
            printf("%i", (x + y) % 2 == 0 ? 0 : 1);
            x++;
        }
        printf("\n");
        y++;
    }

    printf("--\n5. sachovnice (for-if)\n");
    for (int i = 0; i < n * n; i++)
    {
        printf("%i", (i + (i / n)) % 2);
        if (i % n == n - 1)
        {
            printf("\n");
        }
    }

    printf("--\n6. sachovnice (for)\n");
    for (int i = 0; i < n * n; i++)
    {
        printf("%i%s", (i + (i / n)) % 2, i % n == n - 1 ? "\n" : "");
    }

    return 0;
}