#include <stdio.h>
#include <math.h>

int main()
{

    printf("\n--\n5x Hello (for)\n");
    for (int i = 1; i <= 5; i = i + 1)
    {
        printf("Hello ");
    }

    printf("\n--\n5x Hello (while)\n");
    int i = 1;
    while (i <= 5)
    {
        printf("Hello ");
        i = i + 1;
    }

    printf("\n--\nSuda cisla z intervalu <20,40> od nejmensiho\n");
    for (int i = 20; i <= 40; i = i + 2)
    {
        printf("%i ", i);
    }

    printf("\n--\nSuda cisla z intervalu <20,40> od nejvetsiho\n");
    for (int i = 40; i >= 20; i = i - 2)
    {
        printf("%i ", i);
    }

    printf("\n--\nCisla z intervalu <0,9> oddelena pomlckou\n");
    for (int i = 0; i < 10; i++)
    {
        if (i > 0)
        {
            printf("-");
        }
        printf("%i", i);
    }

    printf("\n--\nMocniny cisla 2 od 1 do 1024 - for po vysledcich\n");
    for (int cislo = 1; cislo <= 1024; cislo = cislo * 2)
    {
        printf("%i ", cislo);
    }

    printf("\n--\nMocniny cisla 2 od 1 do 1024 - for po exponentech\n");
    int vysledek;
    for (int exp = 0; exp <= 10; exp++)
    {
        vysledek = 1;
        for (int i = 0; i < exp; i++)
        {
            vysledek = vysledek * 2;
        }
        printf("%i ", vysledek);
    }

    printf("\n--\nMocniny cisla 2 od 1 do 1024 - for po exponentech s pow() z math.h\n");
    for (int exp = 0; exp <= 10; exp++)
    {
        printf("%i ", (int)pow(2, exp));
    }

    printf("\n--\nPrvnich deset cisel aritmeticke posloupnosti s a1=5, d=10\n");
    int a1 = 5;
    int d = 10;
    for (int i = 1; i <= 10; i++)
    {
        printf("%i ", a1 + (i - 1) * d);
    }

    printf("\n--\nPrvnich deset cisel geometricke posloupnosti s a1=5, q=3\n");
    a1 = 5;
    int q = 3;
    for (int i = 1; i <= 10; i++)
    {
        printf("%i ", (int)(a1 * pow(q, i - 1)));
    }

    return 0;
}