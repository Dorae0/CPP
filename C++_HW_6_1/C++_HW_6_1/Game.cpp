#include "Game.h"

void MobInit(int n)
{
	for (int i = 0; i < 20; i++)
	{
		Creatures[i] = new CMob;
	}
	Creatures[20] = new CMiddleBoss;
	Creatures[21] = new CBoss;

	switch (n)
	{
	case 1:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"고블린 전사");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"고블린 궁수");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"고블린 약탈자");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"고블린 도끼병");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"고블린 창병");
		Creatures[20]->SetName((char*)"고블린 주술사 (중간 보스)");
		Creatures[21]->SetName((char*)"고블린 돌격대장 (보스)");
		break;
	case 2:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"페어리");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"프라임 페어리");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"에인션트 페어리");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"다크 페어리");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"페어리 소서리스");
		Creatures[20]->SetName((char*)"포이즌 페어리 (중간 보스)");
		Creatures[21]->SetName((char*)"페어리 퀸 루나 (보스)");
		break;
	case 3:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"스켈레톤 검병");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"스켈레톤 아처");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"스켈레톤 버퍼");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"스켈레톤 흑마법사");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"스켈레톤 광전사");
		Creatures[20]->SetName((char*)"스켈레톤 지휘관 (중간 보스)");
		Creatures[21]->SetName((char*)"스켈레톤 로드 (보스)");
		break;
	case 4:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"오크 정찰병");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"오크 수문장");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"오크 대장장이");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"오크 방패병");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"오크 야만전사");
		Creatures[20]->SetName((char*)"오크 첨병장 (중간 보스)");
		Creatures[21]->SetName((char*)"오크 대군주 (보스)");
		break;
	case 5:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"함선 잔챙이");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"발키리");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"바이킹 쌍둥이");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"바이킹 유격대원");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"저격수");
		Creatures[20]->SetName((char*)"바이킹 전차 (중간 보스)");
		Creatures[21]->SetName((char*)"선장 다크우드 (보스)");
		break;
	case 6:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"세뇌당한 신도");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"교단 주교");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"교단 암흑사제");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"교단 최면술사");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"교단 영매사");
		Creatures[20]->SetName((char*)"타락한 사제장 (중간 보스)");
		Creatures[21]->SetName((char*)"대악마 아자젤 (보스)");
		break;
	}
}

void StatInit(int n)
{
	for (int i = 0; i < 4; i++)
	{
		Creatures[i]->SetStat(ENUM_MAXHP, 10 * (n - 1) + 3);
		Creatures[i]->SetStat(ENUM_HP, 10 * (n - 1) + 3);
		Creatures[i]->SetStat(ENUM_MAXMP, 10);
		Creatures[i]->SetStat(ENUM_MP, 10);
		Creatures[i]->SetStat(ENUM_LEVEL, 10 * (n - 1) + 1);
		Creatures[i]->SetStat(ENUM_POWER, n);
		Creatures[i]->SetStat(ENUM_CRATE, 10);
		Creatures[i]->SetStat(ENUM_CPOWER, 120);
		Creatures[i]->SetStat(ENUM_DEFEND, 0);
		Creatures[i]->SetStat(ENUM_SPEED, n);
	}
	for (int i = 4; i < 8; i++)
	{
		Creatures[i]->SetStat(ENUM_MAXHP, 10 * (n - 1) + 5);
		Creatures[i]->SetStat(ENUM_HP, 10 * (n - 1) + 5);
		Creatures[i]->SetStat(ENUM_MAXMP, 10);
		Creatures[i]->SetStat(ENUM_MP, 10);
		Creatures[i]->SetStat(ENUM_LEVEL, 10 * (n - 1) + 2);
		Creatures[i]->SetStat(ENUM_POWER, n);
		Creatures[i]->SetStat(ENUM_CRATE, 10);
		Creatures[i]->SetStat(ENUM_CPOWER, 120);
		Creatures[i]->SetStat(ENUM_DEFEND, 0);
		Creatures[i]->SetStat(ENUM_SPEED, n);
	}
	for (int i = 8; i < 12; i++)
	{
		Creatures[i]->SetStat(ENUM_MAXHP, 10 * (n - 1) + 6);
		Creatures[i]->SetStat(ENUM_HP, 10 * (n - 1) + 6);
		Creatures[i]->SetStat(ENUM_MAXMP, 10);
		Creatures[i]->SetStat(ENUM_MP, 10);
		Creatures[i]->SetStat(ENUM_LEVEL, 10 * (n - 1) + 4);
		Creatures[i]->SetStat(ENUM_POWER, n);
		Creatures[i]->SetStat(ENUM_CRATE, 10);
		Creatures[i]->SetStat(ENUM_CPOWER, 120);
		Creatures[i]->SetStat(ENUM_DEFEND, 0);
		Creatures[i]->SetStat(ENUM_SPEED, n);
	}
	for (int i = 12; i < 16; i++)
	{
		Creatures[i]->SetStat(ENUM_MAXHP, 10 * (n - 1) + 7);
		Creatures[i]->SetStat(ENUM_HP, 10 * (n - 1) + 7);
		Creatures[i]->SetStat(ENUM_MAXMP, 10);
		Creatures[i]->SetStat(ENUM_MP, 10);
		Creatures[i]->SetStat(ENUM_LEVEL, 10 * (n - 1) + 6);
		Creatures[i]->SetStat(ENUM_POWER, n);
		Creatures[i]->SetStat(ENUM_CRATE, 10);
		Creatures[i]->SetStat(ENUM_CPOWER, 120);
		Creatures[i]->SetStat(ENUM_DEFEND, 0);
		Creatures[i]->SetStat(ENUM_SPEED, n);
	}
	for (int i = 16; i < 20; i++)
	{
		Creatures[i]->SetStat(ENUM_MAXHP, 10 * (n - 1) + 8);
		Creatures[i]->SetStat(ENUM_HP, 10 * (n - 1) + 8);
		Creatures[i]->SetStat(ENUM_MAXMP, 10);
		Creatures[i]->SetStat(ENUM_MP, 10);
		Creatures[i]->SetStat(ENUM_LEVEL, 10 * (n - 1) + 8);
		Creatures[i]->SetStat(ENUM_POWER, n);
		Creatures[i]->SetStat(ENUM_CRATE, 10);
		Creatures[i]->SetStat(ENUM_CPOWER, 120);
		Creatures[i]->SetStat(ENUM_DEFEND, 0);
		Creatures[i]->SetStat(ENUM_SPEED, n);
	}

	Creatures[20]->SetStat(ENUM_MAXHP, 10 * (n - 1) + 9);
	Creatures[20]->SetStat(ENUM_HP, 10 * (n - 1) + 9);
	Creatures[20]->SetStat(ENUM_MAXMP, 10);
	Creatures[20]->SetStat(ENUM_MP, 10);
	Creatures[20]->SetStat(ENUM_LEVEL, 10 * (n - 1) + 9);
	Creatures[20]->SetStat(ENUM_POWER, n);
	Creatures[20]->SetStat(ENUM_CRATE, 10);
	Creatures[20]->SetStat(ENUM_CPOWER, 120);
	Creatures[20]->SetStat(ENUM_DEFEND, n);
	Creatures[20]->SetStat(ENUM_SPEED, n);

	Creatures[21]->SetStat(ENUM_MAXHP, 10 * n);
	Creatures[21]->SetStat(ENUM_HP, 10 * n);
	Creatures[21]->SetStat(ENUM_MAXMP, 10);
	Creatures[21]->SetStat(ENUM_MP, 10);
	Creatures[21]->SetStat(ENUM_LEVEL, 10 * n);
	Creatures[21]->SetStat(ENUM_POWER, n * 2);
	Creatures[21]->SetStat(ENUM_CRATE, 20);
	Creatures[21]->SetStat(ENUM_CPOWER, 150);
	Creatures[21]->SetStat(ENUM_DEFEND, n);
	Creatures[21]->SetStat(ENUM_SPEED, n);
}

bool GameDisplay(int mapnum, int enemynum, int mobnum1, int mobnum2, int mobnum3, int mobnum4, int mobnum5)
{
	int attackmob = 0;
	system("cls");
	gotoxy(105, 10);
	cout << "<< Map " << mapnum << " >>";

	while (1)
	{
		switch (enemynum)
		{
		case 2:
			attackmob = mob2Game(mobnum1, mobnum2);
			break;
		case 3:
			attackmob = mob3Game(mobnum1, mobnum2, mobnum3);
			break;
		case 4:
			attackmob = mob4Game(mobnum1, mobnum2, mobnum3, mobnum4);
			break;
		case 5:
			attackmob = mob5Game(mobnum1, mobnum2, mobnum3, mobnum4, mobnum5);
			break;
		}

		if(Creatures[attackmob]->GetHP() > 0)
			Player->Attack(Creatures[attackmob]);
		if (Creatures[attackmob]->GetHP() < 0)
			Creatures[attackmob]->SetStat(ENUM_HP, 0);

		Creatures[attackmob]->Attack(Player);
		
		if (Player->GetHP() <= 0) return false;

		switch (enemynum)
		{
		case 2:
			if (Creatures[mobnum1]->GetHP() == 0 && Creatures[mobnum2]->GetHP() == 0)
				return true;
			break;
		case 3:
			if (Creatures[mobnum1]->GetHP() == 0 && Creatures[mobnum2]->GetHP() == 0 && Creatures[mobnum3]->GetHP() == 0)
				return true;
			break;
		case 4:
			if (Creatures[mobnum1]->GetHP() == 0 && Creatures[mobnum2]->GetHP() == 0 && Creatures[mobnum3]->GetHP() == 0 && Creatures[mobnum4]->GetHP() == 0)
				return true;
			break;
		case 5:
			if (Creatures[mobnum1]->GetHP() == 0 && Creatures[mobnum2]->GetHP() == 0 && Creatures[mobnum3]->GetHP() == 0 && Creatures[mobnum4]->GetHP() == 0 && Creatures[mobnum5]->GetHP() == 0)
				return true;
			break;
		}
	}
}

int mob2Game(int mobnum1, int mobnum2)
{
	int state = 1;
	bool mob1state = true;
	bool mob2state = false;

	while (1)
	{
		Creatures[mobnum1]->Printstat(90, 20, mob1state);
		Creatures[mobnum2]->Printstat(120, 20, mob2state);
		Player->Printstat(105, 40, false);

		char keyInput = _getch();
		if (keyInput == 224)
			keyInput = _getch();
		if (keyInput == LEFT || keyInput == RIGHT)
		{
			bool temp;
			temp = mob1state;
			mob1state = mob2state;
			mob2state = temp;
			if (state == 1) state = 2;
			else if (state == 2) state = 1;
		}
		else if (keyInput == ENTER)
			return state;
	}
}

int mob3Game(int mobnum1, int mobnum2, int mobnum3)
{
	int state = 1;
	bool mob1state = true;
	bool mob2state = false;
	bool mob3state = false;

	while (1)
	{
		Creatures[mobnum1]->Printstat(75, 20, mob1state);
		Creatures[mobnum2]->Printstat(105, 20, mob2state);
		Creatures[mobnum3]->Printstat(135, 20, mob3state);
		Player->Printstat(105, 40, false);

		char keyInput = _getch();
		if (keyInput == 224)
			keyInput = _getch();
		if (keyInput == LEFT)
		{
			if (state == 1)
			{
				state = 3;
				mob1state = false;
				mob2state = false;
				mob3state = true;
			}
			else if (state == 2)
			{
				state = 1;
				mob1state = true;
				mob2state = false;
				mob3state = false;
			}
			else if (state == 3)
			{
				state = 2;
				mob1state = false;
				mob2state = true;
				mob3state = false;
			}
		}
		else if (keyInput == RIGHT)
		{
			if (state == 1)
			{
				state = 2;
				mob1state = false;
				mob2state = true;
				mob3state = false;
			}
			else if (state == 2)
			{
				state = 3;
				mob1state = false;
				mob2state = false;
				mob3state = true;
			}
			else if (state == 3)
			{
				state = 1;
				mob1state = true;
				mob2state = false;
				mob3state = false;
			}
		}
		else if (keyInput == ENTER)
			return state;
	}
}

int mob4Game(int mobnum1, int mobnum2, int mobnum3, int mobnum4)
{
	int state = 1;
	bool mob1state = true;
	bool mob2state = false;
	bool mob3state = false;
	bool mob4state = false;

	while (1)
	{
		Creatures[mobnum1]->Printstat(60, 20, mob1state);
		Creatures[mobnum2]->Printstat(90, 20, mob2state);
		Creatures[mobnum3]->Printstat(120, 20, mob3state);
		Creatures[mobnum4]->Printstat(150, 20, mob4state);
		Player->Printstat(105, 40, false);

		char keyInput = _getch();
		if (keyInput == 224)
			keyInput = _getch();
		if (keyInput == LEFT)
		{
			if (state == 1)
			{
				state = 4;
				mob1state = false;
				mob2state = false;
				mob3state = false;
				mob4state = true;
			}
			else if (state == 2)
			{
				state = 1;
				mob1state = true;
				mob2state = false;
				mob3state = false;
				mob4state = false;
			}
			else if (state == 3)
			{
				state = 2;
				mob1state = false;
				mob2state = true;
				mob3state = false;
				mob4state = false;
			}
			else if (state == 4)
			{
				state = 3;
				mob1state = false;
				mob2state = false;
				mob3state = true;
				mob4state = false;
			}
		}
		else if (keyInput == RIGHT)
		{
			if (state == 1)
			{
				state = 2;
				mob1state = false;
				mob2state = true;
				mob3state = false;
				mob4state = false;
			}
			else if (state == 2)
			{
				state = 3;
				mob1state = false;
				mob2state = false;
				mob3state = true;
				mob4state = false;
			}
			else if (state == 3)
			{
				state = 4;
				mob1state = false;
				mob2state = false;
				mob3state = false;
				mob4state = true;
			}
			else if (state == 4)
			{
				state = 1;
				mob1state = true;
				mob2state = false;
				mob3state = false;
				mob4state = false;
			}
		}
		else if (keyInput == ENTER)
			return state;
	}
}

int mob5Game(int mobnum1, int mobnum2, int mobnum3, int mobnum4, int mobnum5)
{
	int state = 1;
	bool mob1state = true;
	bool mob2state = false;
	bool mob3state = false;
	bool mob4state = false;
	bool mob5state = false;

	while (1)
	{
		Creatures[mobnum1]->Printstat(45, 20, mob1state);
		Creatures[mobnum2]->Printstat(75, 20, mob2state);
		Creatures[mobnum3]->Printstat(105, 20, mob3state);
		Creatures[mobnum4]->Printstat(135, 20, mob4state);
		Creatures[mobnum5]->Printstat(165, 20, mob5state);
		Player->Printstat(105, 40, false);

		char keyInput = _getch();
		if (keyInput == 224)
			keyInput = _getch();
		if (keyInput == LEFT)
		{
			if (state == 1)
			{
				state = 5;
				mob1state = false;
				mob2state = false;
				mob3state = false;
				mob4state = false;
				mob5state = true;
			}
			else if (state == 2)
			{
				state = 1;
				mob1state = true;
				mob2state = false;
				mob3state = false;
				mob4state = false;
				mob5state = false;
			}
			else if (state == 3)
			{
				state = 2;
				mob1state = false;
				mob2state = true;
				mob3state = false;
				mob4state = false;
				mob5state = false;
			}
			else if (state == 4)
			{
				state = 3;
				mob1state = false;
				mob2state = false;
				mob3state = true;
				mob4state = false;
				mob5state = false;
			}
			else if (state == 5)
			{
				state = 4;
				mob1state = false;
				mob2state = false;
				mob3state = false;
				mob4state = true;
				mob5state = false;
			}
		}
		else if (keyInput == RIGHT)
		{
			if (state == 1)
			{
				state = 2;
				mob1state = false;
				mob2state = true;
				mob3state = false;
				mob4state = false;
				mob5state = false;
			}
			else if (state == 2)
			{
				state = 3;
				mob1state = false;
				mob2state = false;
				mob3state = true;
				mob4state = false;
				mob5state = false;
			}
			else if (state == 3)
			{
				state = 4;
				mob1state = false;
				mob2state = false;
				mob3state = false;
				mob4state = true;
				mob5state = false;
			}
			else if (state == 4)
			{
				state = 5;
				mob1state = false;
				mob2state = false;
				mob3state = false;
				mob4state = false;
				mob5state = true;
			}
			else if (state == 5)
			{
				state = 1;
				mob1state = true;
				mob2state = false;
				mob3state = false;
				mob4state = false;
				mob5state = false;
			}
		}
		else if (keyInput == ENTER)
			return state;
	}
}

void Game()
{
	mainscreen();
	if (Gametype == 1)
	{
		fullscreen();
		system("cls");
		for (int i = 1; i < 7; i++)
		{
			MobInit(i);
			StatInit(i);
			for (int j = 1; j < 7; j++)
			{
				switch (i)
				{
				case 1:
					round1();
					break;
				case 2:
					round2();
					break;
				case 3:
					round3();
					break;
				case 4:
					round4();
					break;
				case 5:
					round5();
					break;
				case 6:
					round6();
					break;
				}
				switch (j)
				{
				case 1:
					map1();
					system("cls");
					mob2Game(0, 1);
					break;
				case 2:
					map2();
					system("cls");
					mob3Game(2, 4, 5);
					break;
				case 3:
					map3();
					system("cls");
					mob4Game(3, 6, 20, 8);
					break;
				case 4:
					map4();
					system("cls");
					mob5Game(7, 9, 10, 12, 13);
					break;
				case 5:
					map5();
					system("cls");
					mob4Game(11, 14, 16, 17);
					break;
				case 6:
					map6();
					system("cls");
					mob4Game(15, 21, 18, 19);
					break;
				}
			}
		}
	}
	else if (Gametype == 3)
		return;
}