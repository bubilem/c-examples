#include <stdlib.h>
#include <stdio.h>
#include <time.h>

const int WIDTH = 20;
const int HEIGHT = 10;

void clear_field(int field[WIDTH][HEIGHT])
{
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            field[x][y] = 0;
        }
    }
}

void generate_mines(int field[WIDTH][HEIGHT], int mines_count)
{
    if (mines_count > WIDTH * HEIGHT)
    {
        return;
    }
    int x, y;
    for (int i = 0; i < mines_count; i++)
    {
        do
        {
            x = rand() % WIDTH;
            y = rand() % HEIGHT;
        } while (field[x][y] == 9);
        field[x][y] = 9;
    }
}

void evaluate_field(int field[WIDTH][HEIGHT])
{
    int neighbors[8][2] = {{-1, -1}, {0, -1}, {1, -1}, {-1, 0}, {1, 0}, {-1, 1}, {0, 1}, {1, 1}};
    int nx, ny;
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            if (field[x][y] != 9)
            {
                continue;
            }
            for (int k = 0; k < 8; k++)
            {
                nx = x + neighbors[k][0];
                ny = y + neighbors[k][1];
                if (nx >= 0 && nx < WIDTH && ny >= 0 && ny < HEIGHT && field[nx][ny] != 9)
                {
                    field[nx][ny]++;
                }
            }
        }
    }
}

void show_field(int field[WIDTH][HEIGHT])
{
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            if (field[x][y] == 9)
            {
                printf("\e[1;33m\e[41m %c ", 207);
            }
            else if (field[x][y] == 0)
            {
                printf("\e[0;31m\e[42m   ");
            }
            else
            {
                printf("\e[0;31m\e[42m %d ", field[x][y]);
            }
        }
        printf("\e[0m\n");
    }
}

int main()
{
    int field[WIDTH][HEIGHT];
    srand(time(NULL));
    clear_field(field);
    generate_mines(field, WIDTH * HEIGHT / 10);
    evaluate_field(field);
    printf("Minove pole:\n");
    show_field(field);
    return 0;
}