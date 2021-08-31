#include <stdio.h>
#include <stdlib.h>

void ceasar_encrypt(char *addr, int offset)
{
    int i = 0;
    while (*(addr + i) != '\0')
    {
        if (*(addr + i) >= 65 && *(addr + i) <= 90)
        {
            *(addr + i) += offset;
            if (*(addr + i) > 90)
            {
                *(addr + i) -= 26;
            }
        }
        i++;
    }
}

int main()
{
    char mess[] = "AHOJ STUDENTI!";

    printf("%s\n", mess);
    ceasar_encrypt(mess, 3);
    printf("%s\n", mess);
    //ceasar_decrypt(mess, 3);
    //printf("%s\n", mess);
    return 0;
}
