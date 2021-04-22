#include <stdio.h>

int main()
{
    /* milion nebo halíř zdvojnásobený každý den po dobu jednoho měsíce 1 - 2 - 4 - 8 - 16 */
    float value = 0.01;
    printf(" 1. 4. 2021\t%10.2f CZK\n", value);
    for (int day = 2; day <= 30; day++)
    {
        value *= 2; // value = 2 * value
        printf("%2d. 4. 2021\t%10.2f CZK\n", day, value);
    }
    return 0;
}