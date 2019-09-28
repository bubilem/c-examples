#include <stdio.h>

void clearBuffer()
{
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}

int main()
{
    /* m = hmotnost, h = vyska*/
    int m, h;
    /* znak ze vstupu */
    char znak;
    /* promenna pro ulozeni hodnoty BMI */
    float bmi;
    do
    {
        printf("-----------\nVypocet BMI\n-----------\n");
        printf("Zadejte svou hmotnost [kg]: ");
        scanf("%i", &m);
        clearBuffer();
        printf("Zadejte svou vysku [cm]: ");
        scanf("%i", &h);
        clearBuffer();
        bmi = m / ((h / 100.) * (h / 100.));
        printf("Vase BMI = %.2f\n", bmi);
        printf("Dle WHO: ");
        if (bmi < 15)
        {
            printf("Velmi vazna podvyziva\n");
        }
        else if (bmi < 16)
        {
            printf("Vazna podvyziva\n");
        }
        else if (bmi < 18.5)
        {
            printf("Podvyziva\n");
        }
        else if (bmi < 25)
        {
            printf("Normalni\n");
        }
        else if (bmi < 30)
        {
            printf("Nadvaha\n");
        }
        else if (bmi < 35)
        {
            printf("Nadvaha I. stupne (Stredni obezita)\n");
        }
        else if (bmi < 40)
        {
            printf("Nadvaha II. stupne (Vazna obezita)\n");
        }
        else
        {
            printf("Nadvaha III. stupne (Velmi vazna obezita)\n");
        }
        printf("Pocitat znovu? [A]no [N]e ");
        scanf("%c", &znak);
        clearBuffer();
    } while (znak == 'a' || znak == 'A');
    return 0;
}