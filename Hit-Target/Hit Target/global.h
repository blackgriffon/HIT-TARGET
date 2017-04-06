
#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

#include "Daejung.h"
#include "Taewoo.h"
#include "Jisuk.h"
#include "Sangmin.h"



#define MAX_X_POS   79
#define MAX_Y_POS   24

#define UP_KEY		72
#define DOWN_KEY	80
#define LEFT_KEY	75
#define RIGHT_KEY	77
#define SPACEBAR_KEY    20



typedef struct _Position
{
    int x;
    int y;
}Position;  

typedef struct _User
{
    Position pos;
}USER;

typedef struct _Target
{
    Position pos;
}TARGET;


USER User;
TARGET** Target;

void init();
void initRandomSeed();
void gotoXY(int x, int y);
int makeRandom(int range);

#endif
