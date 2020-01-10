#include <stdlib.h>
#include <stdio.h>

int main()
{
    int p1[3];
    p1[0] = 1;
    p1[1] = 3;
    p1[2] = p1[0] + p1[1];
    printf("p1[%i] = %i\n", 2, p1[2]);

    int p2[] = {2, 4, 6};
    for (int k = 0; k < 3; k++)
    {
        printf("%s%i", k > 0 ? " " : "", p2[k]);
    }
    printf("\n");

    return 0;
}