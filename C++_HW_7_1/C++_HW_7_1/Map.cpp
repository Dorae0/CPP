#include "Map.h"
#include "Screen.h"

void round1()
{
	Gameround = 1;
	system("cls");
	gotoxy(110, 10);
	cout << "<< Round 1 >>";
}

void round2()
{
	Gameround = 2;
	system("cls");
	gotoxy(110, 10);
	cout << "<< Round 2 >>";
}
void round3()
{
	Gameround = 3;
	system("cls");
	gotoxy(110, 10);
	cout << "<< Round 3 >>";
}
void round4()
{
	Gameround = 4;
	system("cls");
	gotoxy(110, 10);
	cout << "<< Round 4 >>";
}
void round5()
{
	Gameround = 5;
	system("cls");
	gotoxy(110, 10);
	cout << "<< Round 5 >>";
}
void round6()
{
	Gameround = 6;
	system("cls");
	gotoxy(110, 10);
	cout << "<< Round 6 >>";
}

void map1()
{
	while (1)
	{
		Gamemap = 1;
		gotoxy(112, 13);
		cout << "¢¹Map 1";
		textcolor(DARKGRAY, BLACK);
		gotoxy(114, 14);
		cout << "Map 2";
		gotoxy(114, 15);
		cout << "Map 3";
		gotoxy(114, 16);
		cout << "Map 4";
		gotoxy(114, 17);
		cout << "Map 5";
		gotoxy(114, 18);
		cout << "Map 6";
		textcolor(WHITE, BLACK);
		gotoxy(109, 20);
		cout << "<<Press Enter>>";

		int keyInput = _getch();
		if (keyInput == 224)
			keyInput = _getch();
		if (keyInput == ENTER)
			return;
	}
}

void map2()
{
	while (1)
	{
		Gamemap = 2;
		gotoxy(114, 13);
		textcolor(YELLOW, BLACK);
		cout << "Map 1";
		gotoxy(112, 14);
		textcolor(WHITE, BLACK);
		cout << "¢¹Map 2";
		gotoxy(114, 15);
		textcolor(DARKGRAY, BLACK);
		cout << "Map 3";
		gotoxy(114, 16);
		cout << "Map 4";
		gotoxy(114, 17);
		cout << "Map 5";
		gotoxy(114, 18);
		cout << "Map 6";
		textcolor(WHITE, BLACK);
		gotoxy(109, 20);
		cout << "<<Press Enter>>";

		int keyInput = _getch();
		if (keyInput == 224)
			keyInput = _getch();
		if (keyInput == ENTER)
			return;
	}
}

void map3()
{
	while (1)
	{
		Gamemap = 3;
		gotoxy(114, 13);
		textcolor(YELLOW, BLACK);
		cout << "Map 1";
		gotoxy(114, 14);
		cout << "Map 2";
		gotoxy(112, 15);
		textcolor(CYAN, BLACK);
		cout << "¢¹Map 3";
		gotoxy(114, 16);
		textcolor(DARKGRAY, BLACK);
		cout << "Map 4";
		gotoxy(114, 17);
		cout << "Map 5";
		gotoxy(114, 18);
		cout << "Map 6";
		textcolor(WHITE, BLACK);
		gotoxy(109, 20);
		cout << "<<Press Enter>>";

		int keyInput = _getch();
		if (keyInput == 224)
			keyInput = _getch();
		if (keyInput == ENTER)
			return;
	}
}

void map4()
{
	while (1)
	{
		Gamemap = 4;
		gotoxy(114, 13);
		textcolor(YELLOW, BLACK);
		cout << "Map 1";
		gotoxy(114, 14);
		cout << "Map 2";
		gotoxy(114, 15);
		cout << "Map 3";
		gotoxy(112, 16);
		textcolor(WHITE, BLACK);
		cout << "¢¹Map 4";
		gotoxy(114, 17);
		textcolor(DARKGRAY, BLACK);
		cout << "Map 5";
		gotoxy(114, 18);
		cout << "Map 6";
		textcolor(WHITE, BLACK);
		gotoxy(109, 20);
		cout << "<<Press Enter>>";

		int keyInput = _getch();
		if (keyInput == 224)
			keyInput = _getch();
		if (keyInput == ENTER)
			return;
	}
}

void map5()
{
	while (1)
	{
		Gamemap = 5;
		gotoxy(114, 13);
		textcolor(YELLOW, BLACK);
		cout << "Map 1";
		gotoxy(114, 14);
		cout << "Map 2";
		gotoxy(114, 15);
		cout << "Map 3";
		gotoxy(114, 16);
		cout << "Map 4";
		gotoxy(112, 17);
		textcolor(WHITE, BLACK);
		cout << "¢¹Map 5";
		textcolor(DARKGRAY, BLACK);
		gotoxy(114, 18);
		cout << "Map 6";
		textcolor(WHITE, BLACK);
		gotoxy(109, 20);
		cout << "<<Press Enter>>";

		int keyInput = _getch();
		if (keyInput == 224)
			keyInput = _getch();
		if (keyInput == ENTER)
			return;
	}
}

void map6()
{
	while (1)
	{
		Gamemap = 6;
		gotoxy(114, 13);
		textcolor(YELLOW, BLACK);
		cout << "Map 1";
		gotoxy(114, 14);
		cout << "Map 2";
		gotoxy(114, 15);
		cout << "Map 3";
		gotoxy(114, 16);
		cout << "Map 4";
		gotoxy(114, 17);
		cout << "Map 5";
		textcolor(RED, BLACK);
		gotoxy(112, 18);
		cout << "¢¹Map 6";
		textcolor(WHITE, BLACK);
		gotoxy(109, 20);
		cout << "<<Press Enter>>";

		int keyInput = _getch();
		if (keyInput == 224)
			keyInput = _getch();
		if (keyInput == ENTER)
			return;
	}
}