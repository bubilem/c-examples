#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * Funkce pro výpočet výše měsíční splátky 
 */
double getMesicniSplatka(double uver, double urokMesicni, int pocetSplatek)
{
    /* speciální vzorec, co používají banky */
    double tmp = pow(1 + urokMesicni, pocetSplatek);
    return round(uver * urokMesicni * (tmp / (tmp - 1)) * 100) / 100;
}

int main()
{
    double uver = 34000;         // vstupní hodnota výše úvěr
    double urokRocni = 7 / 100.; // vstupní hodnota ročního úroku
    int pocetSplatek = 24;       // vstupní hodnota počtu splátek

    double urokMesicni = urokRocni / 12.; // výpočet měsíčního úroku
    double mesicniSplatka = getMesicniSplatka(uver, urokMesicni, pocetSplatek);
    double suma = mesicniSplatka * pocetSplatek; // výpočet celkové výše úvěru i s úroky

    /* Základní výpis informací o úvěru */
    printf("Uverova kalkulacka\n------------------\n");
    printf("Vyse uveru:\t\t%.2f Kc\n", uver);
    printf("Urok:\t\t\t%.2f %% rocne\n", urokRocni * 100);
    printf("Pocet splatek:\t\t%i mesic/e/u\n", pocetSplatek);
    printf("Mesicni splatka:\t %.2f Kc\n", mesicniSplatka);
    printf("Celkove navyseni:\t %.2f Kc\n", suma - uver);
    printf("\nMesicni kalendar splatek:\n\t\tsplatka\t\turok\t\tdluh\n");

    double urokMesicniCastka; // proměnná pro průběžný výpis měsíční částky úroku
    int cisloSplatky = 1;     // proměnná číslo splátky
    /* cyklus měsíčních splátek */
    do
    {
        if (uver > mesicniSplatka) // standardní splátka
        {
            urokMesicniCastka = uver * urokMesicni;
            uver -= mesicniSplatka - urokMesicniCastka;
        }
        else // konečná splátka
        {
            mesicniSplatka = uver;
            urokMesicniCastka = uver = 0;
        }
        /* info o měsíční splátce a aktuálním stavu úvěru */
        printf("%3i.\t%10.2f Kc\t%10.2f Kc\t%10.2f Kc\n", cisloSplatky++, mesicniSplatka, urokMesicniCastka, uver);
    } while (uver != 0);

    return 0;
}