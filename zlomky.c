#include <stdlib.h>
#include <stdio.h>

/**
 * Mimimální hodnota ze dvou ze vstupu
 *
 * @param x
 * @param y
 * @return int
 */
int minimum(int x, int y)
{
    return x <= y ? x : y;
}

/**
 * Maximální společný dělitel dvou čísel
 *
 * @param x
 * @param y
 * @return int
 */
int maxdelitel(int x, int y)
{
    for (int delitel = minimum(x, y); delitel > 1; delitel--)
    {
        if (x % delitel == 0 && y % delitel == 0)
        {
            return delitel;
        }
    }
    return 1;
}

/**
 * Krácení zlomku
 *
 * @param citatel
 * @param jmenovatel
 */
void optzl(int citatel, int jmenovatel)
{
    printf("%i/%i = ", citatel, jmenovatel);
    int delitel = maxdelitel(citatel, jmenovatel);
    printf(
        "%i/%i\n",
        citatel / delitel,
        jmenovatel / delitel);
}

void soucin_a_tisk(int cit1, int jm1, int cit2, int jm2)
{
    int citatel = cit1 * cit2;
    int jmenovatel = jm1 * jm2;
    int delitel = maxdelitel(citatel, jmenovatel);
    citatel /= delitel;
    jmenovatel /= delitel;
    printf("%i/%i * %i/%i = ", cit1, jm1, cit2, jm2);
    printf("%i/%i\n", citatel, jmenovatel);
}

void soucet_a_tisk(int cit1, int jm1, int cit2, int jm2)
{
    int citatel = cit1 * jm2 + cit2 * jm1;
    int jmenovatel = jm1 * jm2;
    int delitel = maxdelitel(citatel, jmenovatel);
    citatel /= delitel;
    jmenovatel /= delitel;
    printf("%i/%i + %i/%i = ", cit1, jm1, cit2, jm2);
    printf("%i/%i\n", citatel, jmenovatel);
}

int soucet(int *x, int *y, int *z)
{
    if (x[1] == 0 || y[1] == 0)
    {
        return 1;
    }
    z[0] = x[0] * y[1] + y[0] * x[1];
    z[1] = x[1] * y[1];
    int delitel = maxdelitel(z[0], z[1]);
    z[0] /= delitel;
    z[1] /= delitel;
    return 0;
}

int main()
{

    soucin_a_tisk(1, 2, 2, 4);
    // soucet_a_tisk(1, 2, 2, 4);

    /*
        int x[] = {3, 2};
        int y[] = {0, 4};
        int z[] = {0, 1};
        int err = soucet(x, y, z);
        if (!err)
        {
            printf(
                "%i/%i + %i/%i = %i/%i\n",
                x[0], x[1], y[0], y[1], z[0], z[1]);
        }
        else
        {
            printf("Neplatny vstup. Jeden ze zlomku ma nulovy jmenovatel.");
        }
    */
    return 0;
}
