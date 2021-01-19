#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int lucas_rek(int n)
{
    if (n == 0)
    {
        return 2;
    }
    if (n == 1)
    {
        return 1;
    }
    return lucas_rek(n - 1) + lucas_rek(n - 2);
}

int lucas(int n)
{
    if (n == 0)
    {
        return 2;
    }
    if (n == 1)
    {
        return 1;
    }
    int predpredchudce = 2;
    int predchudce = 1;
    int lucas;
    for (int i = 2; i <= n; i++)
    {
        lucas = predchudce + predpredchudce;
        predpredchudce = predchudce;
        predchudce = lucas;
    }
    return lucas;
}

int main()
{
    printf("%i\n", lucas(20));
    printf("%i\n", lucas_rek(20));
    return 0;
}