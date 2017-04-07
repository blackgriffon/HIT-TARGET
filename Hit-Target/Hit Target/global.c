#include "global.h"



USER User;
TARGET** Target;


void init()
{
    initRandomSeed();
}

void initRandomSeed()
{
    srand((unsigned int)time(NULL));
}


void gotoXY(int x, int y)
{
    COORD pos = {x, y};

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


int getRandom(int option)
{
    return rand() % option;
}
