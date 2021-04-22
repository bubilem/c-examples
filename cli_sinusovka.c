#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define CANVAS_WIDTH 80
#define CANVAS_HEIGHT 19
#define WHITE 178
#define BLACK 176
#define GRAY 177

void init(char canvas[CANVAS_WIDTH][CANVAS_HEIGHT])
{
    for (int y = 0; y < CANVAS_HEIGHT; y++)
    {
        for (int x = 0; x < CANVAS_WIDTH; x++)
        {
            canvas[x][y] = BLACK;
        }
    }
}

void point(char canvas[CANVAS_WIDTH][CANVAS_HEIGHT], int px, int py, char ch)
{
    if (px >= 0 && px < CANVAS_WIDTH && py >= 0 && py < CANVAS_HEIGHT)
    {
        canvas[px][py] = ch;
    }
}

void show(char canvas[CANVAS_WIDTH][CANVAS_HEIGHT])
{
    for (int y = 0; y < CANVAS_HEIGHT; y++)
    {
        for (int x = 0; x < CANVAS_WIDTH; x++)
        {
            printf("%c", canvas[x][y]);
        }
        printf("\n");
    }
}

int main()
{
    char canvas[CANVAS_WIDTH][CANVAS_HEIGHT];
    init(canvas);
    int x, y;
    printf("Vizualizace sinusovky v CLI:\n");
    for (x = 0; x < CANVAS_WIDTH; x++)
    {
        point(canvas, x, (CANVAS_HEIGHT / 2), GRAY);                                                      //osa
        y = (int)round(sin(x / (4 * 3.1415)) * -1 * round(CANVAS_HEIGHT / 2. - 1)) + (CANVAS_HEIGHT / 2); //sin
        point(canvas, x, y, WHITE);
    }
    show(canvas);

    return 0;
}