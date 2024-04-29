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
			Creatures[i]->SetName((char*)"��� ����");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"��� �ü�");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"��� ��Ż��");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"��� ������");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"��� â��");
		Creatures[20]->SetName((char*)"��� �ּ��� (�߰� ����)");
		Creatures[21]->SetName((char*)"��� ���ݴ��� (����)");
		break;
	case 2:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"��");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"������ ��");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"���μ�Ʈ ��");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"��ũ ��");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"�� �Ҽ�����");
		Creatures[20]->SetName((char*)"������ �� (�߰� ����)");
		Creatures[21]->SetName((char*)"�� �� �糪 (����)");
		break;
	case 3:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"���̷��� �˺�");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"���̷��� ��ó");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"���̷��� ����");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"���̷��� �渶����");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"���̷��� ������");
		Creatures[20]->SetName((char*)"���̷��� ���ְ� (�߰� ����)");
		Creatures[21]->SetName((char*)"���̷��� �ε� (����)");
		break;
	case 4:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"��ũ ������");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"��ũ ������");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"��ũ ��������");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"��ũ ���к�");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"��ũ �߸�����");
		Creatures[20]->SetName((char*)"��ũ ÷���� (�߰� ����)");
		Creatures[21]->SetName((char*)"��ũ �뱺�� (����)");
		break;
	case 5:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"�Լ� ��ì��");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"��Ű��");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"����ŷ �ֵ���");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"����ŷ ���ݴ��");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"���ݼ�");
		Creatures[20]->SetName((char*)"����ŷ ���� (�߰� ����)");
		Creatures[21]->SetName((char*)"���� ��ũ��� (����)");
		break;
	case 6:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"�������� �ŵ�");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"���� �ֱ�");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"���� �������");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"���� �ָ����");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"���� ���Ż�");
		Creatures[20]->SetName((char*)"Ÿ���� ������ (�߰� ����)");
		Creatures[21]->SetName((char*)"��Ǹ� ������ (����)");
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
	bool Cleartype = false;
	bool returntype = true;
	int attackmob = 0;
	int dmg = 0;
	char getc = 'a';

	while (1)
	{
		system("cls");
		gotoxy(110, 10);
		cout << "<< Map " << mapnum << " >>";
		int i = 60;
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

		switch (attackmob)
		{
		case 1:
			attackmob = mobnum1;
			break;
		case 2:
			attackmob = mobnum2;
			break;
		case 3:
			attackmob = mobnum3;
			break;
		case 4:
			attackmob = mobnum4;
			break;
		case 5:
			attackmob = mobnum5;
			break;
		}

		if (Creatures[attackmob]->GetHP() > 0)
		{
			dmg = Player->Attack(Creatures[attackmob]);
			gotoxy(30, i);
			cout << Player->GetName() << "��(��) " << Creatures[attackmob]->GetName() << "���� " << dmg << "�� ���ظ� �־���";
			i++;
			dmg = Creatures[attackmob]->Attack(Player);
			gotoxy(30, i);
			cout << Creatures[attackmob]->GetName() << "��(��) " << Player->GetName() << "���� " << dmg << "�� ���ظ� �־���";
			i++;
		}	
		if (Creatures[attackmob]->GetHP() < 0)
			Creatures[attackmob]->SetStat(ENUM_HP, 0);
		
		if (Player->GetHP() <= 0)
		{
			Cleartype = true;
			returntype = false;
		}

		switch (enemynum)
		{
		case 2:
			if (Creatures[mobnum1]->GetHP() == 0 && Creatures[mobnum2]->GetHP() == 0)
				Cleartype = true;
			break;
		case 3:
			if (Creatures[mobnum1]->GetHP() == 0 && Creatures[mobnum2]->GetHP() == 0 && Creatures[mobnum3]->GetHP() == 0)
				Cleartype = true;
			break;
		case 4:
			if (Creatures[mobnum1]->GetHP() == 0 && Creatures[mobnum2]->GetHP() == 0 && Creatures[mobnum3]->GetHP() == 0 && Creatures[mobnum4]->GetHP() == 0)
				Cleartype = true;
			break;
		case 5:
			if (Creatures[mobnum1]->GetHP() == 0 && Creatures[mobnum2]->GetHP() == 0 && Creatures[mobnum3]->GetHP() == 0 && Creatures[mobnum4]->GetHP() == 0 && Creatures[mobnum5]->GetHP() == 0)
				Cleartype = true;
			break;
		}

		getc = _getch();
		if (getc == 's' || getc == 'S' || getc == '��')
		{
			system("cls");
			gotoxy(105, 10);
			cout << "������ �����Ͻðڽ��ϱ�? ( Y / N ) : ";
			getc = getchar();
			if (getc == 'y' || getc == 'Y' || getc == '��')
				return false;
			else if (getc == 'n' || getc == 'N' || getc == '��')
				continue;
		}

		if (Cleartype == true)
			return returntype;
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
			if (state == 1)
			{
				state = 2;
				mob1state = false;
				mob2state = true;
			}
			else if (state == 2)
			{
				state = 1;
				mob1state = true;
				mob2state = false;
			}
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
	bool IsLive = true;
	mainscreen();
	if (Gametype == 1)
	{
		fullscreen();
		system("cls");
		while (1)
		{
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
						IsLive = GameDisplay(j, 2, 0, 1);
						break;
					case 2:
						map2();
						system("cls");
						IsLive = GameDisplay(j, 3, 2, 4, 5);
						break;
					case 3:
						map3();
						system("cls");
						IsLive = GameDisplay(j, 4, 3, 6, 20, 8);
						break;
					case 4:
						map4();
						system("cls");
						IsLive = GameDisplay(j, 5, 7, 9, 10, 12, 13);
						break;
					case 5:
						map5();
						system("cls");
						IsLive = GameDisplay(j, 4, 11, 14, 16, 17);
						break;
					case 6:
						map6();
						system("cls");
						IsLive = GameDisplay(j, 4, 15, 21, 18, 19);
						break;
					}
					if (!IsLive)
						return;
				}
				BossClear(i);
			}
			Clear();
		}
	}
	else if (Gametype == 3)
		return;
}

void BossClear(int roundnum)
{
	srand((unsigned)time(NULL));
	system("cls");
	gotoxy(110, 10);
	cout << "<< Round "<< roundnum << " Clear! >>";
	int randnum = rand() % 100;
	int equipmentnum = rand() % 8;
	switch (roundnum)
	{
	case 1:
		if (randnum > 69)
		{
			PlayerInfo.GainItem(equipmentnum, SPECIAL);
			Player->SetEquipment(equipmentnum, SPECIAL);
			EquipmentNotification(equipmentnum, SPECIAL);
		}
		else
		{
			PlayerInfo.GainItem(equipmentnum, NORMAL);
			Player->SetEquipment(equipmentnum, NORMAL);
			EquipmentNotification(equipmentnum, NORMAL);
		}
		break;
	case 2:
		if (randnum > 79)
		{
			PlayerInfo.GainItem(equipmentnum, RARE);
			Player->SetEquipment(equipmentnum, RARE);
			EquipmentNotification(equipmentnum, RARE);
		}
		else if (randnum > 39)
		{
			PlayerInfo.GainItem(equipmentnum, SPECIAL);
			Player->SetEquipment(equipmentnum, SPECIAL);
			EquipmentNotification(equipmentnum, SPECIAL);
		}
		else
		{
			PlayerInfo.GainItem(equipmentnum, NORMAL);
			Player->SetEquipment(equipmentnum, NORMAL);
			EquipmentNotification(equipmentnum, NORMAL);
		}
		break;
	case 3:
		if (randnum > 89)
		{
			PlayerInfo.GainItem(equipmentnum, EPIC);
			Player->SetEquipment(equipmentnum, EPIC);
			EquipmentNotification(equipmentnum, EPIC);
		}
		else if (randnum > 49)
		{
			PlayerInfo.GainItem(equipmentnum, RARE);
			Player->SetEquipment(equipmentnum, RARE);
			EquipmentNotification(equipmentnum, RARE);
		}
		else if (randnum > 9)
		{
			PlayerInfo.GainItem(equipmentnum, SPECIAL);
			Player->SetEquipment(equipmentnum, SPECIAL);
			EquipmentNotification(equipmentnum, SPECIAL);
		}
		else
		{
			PlayerInfo.GainItem(equipmentnum, NORMAL);
			Player->SetEquipment(equipmentnum, NORMAL);
			EquipmentNotification(equipmentnum, NORMAL);
		}
		break;
	case 4:
		if (randnum > 89)
		{
			PlayerInfo.GainItem(equipmentnum, LEGENDARY);
			Player->SetEquipment(equipmentnum, LEGENDARY);
			EquipmentNotification(equipmentnum, LEGENDARY);
		}
		else if (randnum > 59)
		{
			PlayerInfo.GainItem(equipmentnum, EPIC);
			Player->SetEquipment(equipmentnum, EPIC);
			EquipmentNotification(equipmentnum, EPIC);
		}
		else if (randnum > 19)
		{
			PlayerInfo.GainItem(equipmentnum, RARE);
			Player->SetEquipment(equipmentnum, RARE);
			EquipmentNotification(equipmentnum, RARE);
		}
		else
		{
			PlayerInfo.GainItem(equipmentnum, SPECIAL);
			Player->SetEquipment(equipmentnum, SPECIAL);
			EquipmentNotification(equipmentnum, SPECIAL);
		}
		break;
	case 5:
		if (randnum > 59)
		{
			PlayerInfo.GainItem(equipmentnum, LEGENDARY);
			Player->SetEquipment(equipmentnum, LEGENDARY);
			EquipmentNotification(equipmentnum, LEGENDARY);
		}
		else if (randnum > 9)
		{
			PlayerInfo.GainItem(equipmentnum, EPIC);
			Player->SetEquipment(equipmentnum, EPIC);
			EquipmentNotification(equipmentnum, EPIC);
		}
		else
		{
			PlayerInfo.GainItem(equipmentnum, RARE);
			Player->SetEquipment(equipmentnum, RARE);
			EquipmentNotification(equipmentnum, RARE);
		}
		break;
	case 6:
		if (randnum > 89)
		{
			PlayerInfo.GainItem(equipmentnum, HIDDEN);
			Player->SetEquipment(equipmentnum, HIDDEN);
			EquipmentNotification(equipmentnum, HIDDEN);
		}
		else if (randnum > 29)
		{
			PlayerInfo.GainItem(equipmentnum, LEGENDARY);
			Player->SetEquipment(equipmentnum, LEGENDARY);
			EquipmentNotification(equipmentnum, LEGENDARY);
		}
		else
		{
			PlayerInfo.GainItem(equipmentnum, EPIC);
			Player->SetEquipment(equipmentnum, EPIC);
			EquipmentNotification(equipmentnum, EPIC);
		}
		break;
	}
	Player->UpdateEquipment();
	_getch();
}

void EquipmentNotification(int equipment_type, int rarity)
{
	gotoxy(110, 20);
	switch (equipment_type)
	{
	case 0:
		cout << "���� [";
		break;
	case 1:
		cout << "���� [";
		break;
	case 2:
		cout << "���� [";
		break;
	case 3:
		cout << "���� [";
		break;
	case 4:
		cout << "�Ź� [";
		break;
	case 5:
		cout << "�Ͱ��� [";
		break;
	case 6:
		cout << "���Ʈ [";
		break;
	case 7:
		cout << "���� [";
		break;
	}
	switch (rarity)
	{
	case NORMAL:
		textcolor(WHITE, BLACK);
		cout << "NORMAL";
		textcolor(WHITE, BLACK);
		cout << "] ȹ�� !";
		break;
	case SPECIAL:
		textcolor(LIGHTGREEN, BLACK);
		cout << "SPECIAL";
		textcolor(WHITE, BLACK);
		cout << "] ȹ�� !";
		break;
	case RARE:
		textcolor(LIGHTBLUE, BLACK);
		cout << "RARE";
		textcolor(WHITE, BLACK);
		cout << "] ȹ�� !";
		break;
	case EPIC:
		textcolor(BROWN, BLACK);
		cout << "EPIC";
		textcolor(WHITE, BLACK);
		cout << "] ȹ�� !";
		break;
	case LEGENDARY:
		textcolor(RED, BLACK);
		cout << "LEGENDARY";
		textcolor(WHITE, BLACK);
		cout << "] ȹ�� !";
		break;
	case HIDDEN:
		textcolor(MAGENTA, BLACK);
		cout << "HIDDEN";
		textcolor(WHITE, BLACK);
		cout << "] ȹ�� !";
		break;
	}
}

void Clear()
{
	system("cls");
	gotoxy(110, 10);
	cout << "Game Clear!";
}