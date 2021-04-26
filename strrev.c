#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strrev(char *addr)
{
    int count = 0;
    while (*(addr + count) != '\0')
    {
        count++;
    }
    if (count > 1)
    {
        char tmp;
        for (int i = 0; i < count / 2; i++)
        {
            tmp = *(addr + i);
            *(addr + i) = *(addr + count - 1 - i);
            *(addr + count - 1 - i) = tmp;
        }
    }
}

int main()
{
    char string[] = "lokomotiva";
    printf("%s\n", string);
    my_strrev(string);
    printf("%s\n", string);
    strrev(string);
    printf("%s\n", string);
    return 0;
}
