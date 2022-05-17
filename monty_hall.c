#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

const int SECOND_CHANGE = 1;
const int GAME_COUNT = 100;

int getRandomDoor()
{
    return rand() % 3 + 1;
}

int getDoorToOpen(int firstTip, int winDoor)
{
    int doorToOpen;
    do
    {
        doorToOpen = getRandomDoor();
    } while (doorToOpen == firstTip || doorToOpen == winDoor);
    return doorToOpen;
}

int getDoorAfterSwitch(int firstTip, int openedDoor)
{
    for (int door = 1; door <= 3; door++)
    {
        if (door != firstTip && door != openedDoor)
        {
            return door;
        }
    }
    return 0;
}

int main()
{
    srand(time(NULL));
    int winDoor, openedDoor, firstTip, secondTip;
    float winCount = 0;
    for (int i = 1; i <= GAME_COUNT; i++)
    {
        winDoor = getRandomDoor();
        firstTip = getRandomDoor();
        openedDoor = getDoorToOpen(firstTip, winDoor);
        secondTip = SECOND_CHANGE ? getDoorAfterSwitch(firstTip, openedDoor) : firstTip;
        if (secondTip == winDoor)
        {
            winCount++;
        }
        printf(
            "WD:%d FT:%d OD:%d ST:%d %c WR:%05.1f%% \n",
            winDoor,
            firstTip,
            openedDoor,
            secondTip,
            secondTip == winDoor ? 'W' : 'L',
            (winCount / (float)i) * 100);
    }

    return 0;
}
