#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * Binární bitová sčítačka
 */
void add_bit_to_byte(int byte[])
{
    int bit_pos = 7;
    int carry_flag = 0;
    do
    {
        byte[bit_pos] = byte[bit_pos] ? 0 : 1;
        carry_flag = byte[bit_pos] ? 0 : 1;
        bit_pos--;
    } while (carry_flag && bit_pos >= 0);
}

/**
 * Zobrazení byte - bit po bitu
 */
void show_byte(int byte[])
{
    for (int bit = 0; bit < 8; bit++)
    {
        printf(
            "\e[0;%dm %d ",
            byte[bit] ? 104 : 105,
            byte[bit]);
    }
    printf("\e[0m");
}

int main()
{
    int byte[8] = {};
    for (int i = 0; i <= 255; i++)
    {
        show_byte(byte);
        printf("  \e[0;37m%03d\e[0m\n", i);
        //printf("\n");
        add_bit_to_byte(byte);
    }
    return 0;
}