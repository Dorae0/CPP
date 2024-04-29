#pragma once
#ifndef __SCREEN_H__
#define __SCREEN_H__
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void textcolor(int colorNum, int backgroundNum);
void fullscreen();
void windowed();

void mainscreen();

void State1();
void State2();
void State3();
void State1_1();
void State3_1();

enum ArrowKeys
{
	UP = 0x48,
	LEFT = 0x4B,
	RIGHT = 0x4D,
	DOWN = 0x50,
	ENTER = 0x0D
};

enum Colors
{
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	MAGENTA,
	BROWN,
	LIGHTGRAY,
	DARKGRAY,
	LIGHTBLUE,
	LIGHTGREEN,
	LIGHTCYAN,
	LIGHTRED,
	LIGHTMAGENTA,
	YELLOW,
	WHITE
};

#endif