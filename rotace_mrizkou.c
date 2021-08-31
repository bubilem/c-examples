#include <stdio.h>
#include <stdlib.h>

#define N 3

void print_m(int m[][N])
{
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            printf("%d", m[y][x]);
        }
        puts("");
    }
}

void rotate_m(int m[][N])
{
    int tmpm[][N] = {{0}, {0}, {0}};
    int tmp;
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            tmpm[x][y] = m[y][x];
        }
    }
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N / 2; x++)
        {

            tmp = tmpm[y][x];
            tmpm[y][x] = tmpm[y][N - x - 1];
            tmpm[y][N - x - 1] = tmp;
        }
    }
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            m[x][y] = tmpm[x][y];
        }
    }
}

int main()
{
    int m[][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    printf("---\n");
    print_m(m);
    printf("---\n");
    rotate_m(m);
    print_m(m);
    printf("---\n");
    rotate_m(m);
    print_m(m);
    printf("---\n");
    rotate_m(m);
    print_m(m);
    printf("---\n");
    rotate_m(m);
    print_m(m);
    printf("---\n");
    return 0;
}