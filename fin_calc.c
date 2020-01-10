#include <stdlib.h>
#include <stdio.h>

float calc(float initPayment, float monthlyPayment, float annualAppreciationRate, int yearCount)
{
    float total = initPayment;
    for (int year = 1; year <= yearCount; year++)
    {
        total += (12 * monthlyPayment);
        total *= ((annualAppreciationRate / 100) + 1);
    }
    return total;
}

int main()
{
    printf("Total money: %9.2f Kc\n", calc(0, 100, 10, 1));
    printf("Total money: %9.2f Kc\n", calc(500, 100, 5, 2));
    printf("Total money: %9.2f Kc\n", calc(10000, 1000, 4.5, 10));
    return 0;
}