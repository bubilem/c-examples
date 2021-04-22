/*
 * Ve stáji jsou lidé a koně.
 * Celkem je ve stáji 22 hlav a 72 nohou. 
 * Kolik koní a kolik lidí je celkem ve stáji?
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int POCET_HLAV = 22;
const int POCET_NOHOU = 72;

int main()
{
    int lidi, kone;

    /* solution 1 */
    /* 
     * 1: lidi + kone = 22
     * 2: 2*lidi + 4*kone = 72
     * -----------------------
     * lidi = 22 - kone
     * 2*(22 - kone) + 4*kone = 72
     * 44 - 2*kone + 4*kone = 72
     * 4*kone - 2*kone = 72 - 44
     * 2*kone = 28
     * kone = 28/2 = 14
     * lidi = 22 - kone = 22 - 14 = 8
     */
    kone = (POCET_NOHOU - 2 * POCET_HLAV) / (4 - 2);
    lidi = POCET_HLAV - kone;
    printf("lidi = %d\tkone = %d\n", lidi, kone);

    /* solution 2 */
    for (int lidi = 1; lidi < POCET_HLAV; lidi++)
    {
        kone = POCET_HLAV - lidi;
        if (2 * lidi + 4 * kone == POCET_NOHOU)
        {
            printf("lidi = %d\tkone = %d\n", lidi, kone);
            break;
        }
    }

    /* solution 3 */
    lidi = 0;
    kone = POCET_HLAV;
    do
    {
        lidi++;
        kone--;
    } while (2 * lidi + 4 * kone != POCET_NOHOU);
    printf("lidi = %d\tkone = %d\n", lidi, kone);

    return 0;
}