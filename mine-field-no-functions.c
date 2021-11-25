#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{

    const int WIDTH = 50;
    const int HEIGHT = 8;
    int x = 0; //column
    int y = 0; //row
    int mineCount = 350;
    int counter = 0;
    if (mineCount > WIDTH * HEIGHT)
    {
        mineCount = (int)((WIDTH * HEIGHT) / 2);
    }
    int minefield[WIDTH][HEIGHT];

    // zero for each cell
    for (y = 0; y < HEIGHT; y++)
    {
        for (x = 0; x < WIDTH; x++)
        {
            minefield[x][y] = 0;
        }
    }

    srand(time(NULL));
    for (int i = 1; i <= mineCount; i++)
    {
        x = rand() % WIDTH;
        y = rand() % HEIGHT;
        counter++;
        while (minefield[x][y] == 9)
        {
            x++;
            counter++;
            if (x >= WIDTH)
            {
                x = 0;
                y++;
                if (y >= HEIGHT)
                {
                    y = 0;
                }
            }
        }
        /*
        do
        {
            x = rand() % WIDTH;
            y = rand() % HEIGHT;
            counter++;
        } while (minefield[x][y] == 9);
        */
        minefield[x][y] = 9;
    }
    printf("Pocet generovani x,y pro minu: %d\n", counter);

    // print minefield
    for (y = 0; y < HEIGHT; y++)
    {
        for (x = 0; x < WIDTH; x++)
        {
            printf("%c", minefield[x][y] == 9 ? '*' : minefield[x][y] + 48);
        }
        printf("\n");
    }

    return 0;
}