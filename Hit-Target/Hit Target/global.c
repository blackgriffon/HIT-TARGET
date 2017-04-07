#include "global.h"



USER User;
TARGET** Target;
int TargetCnt;


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


void makeArrayOfTarget(int size)
{
    int i;
    Target = (TARGET**) malloc(sizeof(TARGET*) * size);

    for(i = 0 ; i < size ; i++)
    {
        Target[i] = (TARGET*) malloc(sizeof(Target));
    }
}