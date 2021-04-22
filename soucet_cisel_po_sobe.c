/* Součet třech po sobě jdoucích čísel je 348. Které to jsou? */
#include <stdio.h>
#include <stdlib.h>
const int TOTAL = 348;
int main()
{
    /* solution 1 */
    printf("%i + %i + %i = %i\n", TOTAL / 3 - 1, TOTAL / 3, TOTAL / 3 + 1, TOTAL);

    /* solution 2 */
    for (int x = 1; x < TOTAL; x++)
    {
        if (x + (x + 1) + (x + 2) == TOTAL)
        {
            printf("%i + %i + %i = %i\n", x, x + 1, x + 2, TOTAL);
            break;
        }
    }

    /* solution 3 */
    /*
     * x + y + z = 348
     * x + (x + 1) + (x + 2) == 348
     * x + x + 1 + x + 2 == 348
     * 3*x + 3 = 348
     * 3*x = 348 - 3
     * 3*x = 345
     * x = 345 / 3
     */
    int x = (TOTAL - 3) / 3;
    printf("%i + %i + %i = %i\n", x, x + 1, x + 2, TOTAL);
    return 0;
}