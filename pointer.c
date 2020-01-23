#include <stdlib.h>
#include <stdio.h>

int main()
{
    // celočíselná proměnná A
    int A;

    // celočíselná proměnná B
    int B;

    // ukazatel (adresa) na integer
    int *ukazatel_na_A;

    // ukazatel (adresa) na integer
    int *ukazatel_na_B;

    // do ukazatele A se ukládá adresa proměnné A
    ukazatel_na_A = &A;

    // do ukazatele B se ukládá adresa proměnné B
    ukazatel_na_B = &B;

    // do proměnné A se ukládá hodnota 1
    A = 1;

    // do proměnné B se ukládá hodnota -1
    B = -1;
    // Obsah místa, kam ukazuje ukazatel A se sečte s 2 a uloží se na místo kam ukazuje ukazatel A.
    *ukazatel_na_A = *ukazatel_na_A + 2;

    // Obsah proměnné A snížený o jedna se uloží na místo, kamukazuje ukazatel B.
    *ukazatel_na_B = A - 1;

    // Ukazatel A nyní ukazuje na stejné místo jako ukazatel B
    ukazatel_na_A = ukazatel_na_B;

    // Obsah místa, kam ukazuje ukazatel A sečtené s obsahem proměnné B se uloží na místo kam ukazuje ukazatel A
    *ukazatel_na_A = *ukazatel_na_A + B;

    printf("A = %i\nB = %i\n", A, B);

    return 0;
}
