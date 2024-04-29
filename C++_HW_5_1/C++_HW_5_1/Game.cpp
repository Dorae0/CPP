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
		Creatures[20]->SetName((char*)"��� �ּ���");
		Creatures[21]->SetName((char*)"��� ���ݴ���");
		break;
	case 2:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"��");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"������ ��");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"������ ��");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"��� â��");
		Creatures[20]->SetName((char*)"��� �ּ���");
		Creatures[21]->SetName((char*)"��� ���ݴ���");
		break;
	case 3:
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
		Creatures[20]->SetName((char*)"��� �ּ���");
		Creatures[21]->SetName((char*)"��� ���ݴ���");
		break;
	case 4:
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
		Creatures[20]->SetName((char*)"��� �ּ���");
		Creatures[21]->SetName((char*)"��� ���ݴ���");
		break;
	case 5:
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
		Creatures[20]->SetName((char*)"��� �ּ���");
		Creatures[21]->SetName((char*)"��� ���ݴ���");
		break;
	case 6:
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
		Creatures[20]->SetName((char*)"��� �ּ���");
		Creatures[21]->SetName((char*)"��� ���ݴ���");
		break;
	}
}