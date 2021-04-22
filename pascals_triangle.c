#include <stdlib.h>
#include <stdio.h>

/**
 * Faktoriál
 * https://cs.wikipedia.org/wiki/Faktori%C3%A1l
 */
int factorial(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

/**
 * Kombinační číslo (n nad k)
 * https://cs.wikipedia.org/wiki/Kombina%C4%8Dn%C3%AD_%C4%8D%C3%ADslo
 */
int n_over_k(int n, int k)
{
    if (k == 0 || n == k)
    {
        return 1;
    }
    return factorial(n) / (factorial(n - k) * factorial(k));
}

/**
 * Pascalův trojúhelník
 *     1      
 *    1 1   
 *   1 2 1
 *  1 3 3 1
 * 1 4 6 4 1 atd...
 * https://cs.wikipedia.org/wiki/Pascal%C5%AFv_troj%C3%BAheln%C3%ADk
 */
void pascals_triangle(int high)
{
    int nihil = high;
    int brick = 1;
    int item_value;
    for (int row = 0; row < high; row++)
    {
        for (int i = 1; i < nihil; i++)
        {
            printf("  ");
        }
        for (int i = 0; i < brick; i++)
        {
            item_value = n_over_k(row, i);
            printf(
                "\e[1;%dm",
                item_value < 10 ? 36 : (item_value < 100 ? 34 : 35));
            printf("%3d ", item_value);
        }
        printf("\n");
        nihil--;
        brick++;
    }
    printf("\e[0m");
}
int main()
{
    printf("\n\e[4;97mPascaluv trojuhelnik:\e[0m\n");
    pascals_triangle(13);
    printf("\n\n");
    return 0;
}