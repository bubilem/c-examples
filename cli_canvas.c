#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define CANVAS_WIDTH 40
#define CANVAS_HEIGHT 20
#define WHITE 178
#define GRAY 177
#define BLACK 176

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

void rectangle(char canvas[CANVAS_WIDTH][CANVAS_HEIGHT], int rx, int ry, int rw, int rh)
{
    for (int y = ry; y < ry + rh; y++)
    {
        for (int x = rx; x < rx + rw; x++)
        {
            if (x < 0 || y < 0 || x >= CANVAS_WIDTH || y >= CANVAS_HEIGHT)
            {
                continue;
            }
            if (x > rx && x < rx + rw - 1 && y > ry && y < ry + rh - 1)
            {
                canvas[x][y] = GRAY;
            }
            else
            {
                canvas[x][y] = WHITE;
            }
        }
    }
}

void circle(char canvas[CANVAS_WIDTH][CANVAS_HEIGHT], int cx, int cy, int cr)
{
    int r;
    for (int y = 0; y < CANVAS_HEIGHT; y++)
    {
        for (int x = 0; x < CANVAS_WIDTH; x++)
        {
            r = (int)round(sqrt(pow(x - cx, 2) + pow(y - cy, 2)));
            if (r == cr)
            {
                canvas[x][y] = WHITE;
            }
            else if (r <= cr)
            {
                canvas[x][y] = GRAY;
            }
        }
    }
}

void show(char canvas[CANVAS_WIDTH][CANVAS_HEIGHT])
{
    for (int y = 0; y < CANVAS_HEIGHT; y++)
    {
        for (int x = 0; x < CANVAS_WIDTH; x++)
        {
            //printf("%c", canvas[x][y]);
            printf("%c%c", canvas[x][y], canvas[x][y]);
        }
        printf("\n");
    }
}

int main()
{
    char canvas[CANVAS_WIDTH][CANVAS_HEIGHT];
    init(canvas);
    /*
    rectangle(canvas, 1, 1, 10, 10);
    rectangle(canvas, 8, 5, 10, 14);
    circle(canvas, 22, 9, 8);
    circle(canvas, 38, 15, 4);
    */
    show(canvas);
    return 0;
}