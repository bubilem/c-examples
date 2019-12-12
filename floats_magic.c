#include <stdio.h>

int main()
{

    float x = 0.3;

    //uf uf
    if (x == 1 - 0.7)
    {
        printf("Je to stejne.\n");
    }
    else
    {
        printf("Neni to stejne.\n");
    }

    //takto to bude lepsi
    if (x - (1 - 0.7) <= 0.000001)
    {
        printf("Je to stejne.\n");
    }
    else
    {
        printf("Neni to stejne.\n");
    }

    //nebo jeste lepe :-)
    printf("%s", (x - (1 - 0.7) <= 0.000001) ? "Je to stejne.\n" : "Neni to stejne.\n");

    return 0;
}