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
		Creatures[20]->SetName((char*)"고블린 주술사");
		Creatures[21]->SetName((char*)"고블린 돌격대장");
		break;
	case 2:
		for (int i = 0; i < 4; i++)
			Creatures[i]->SetName((char*)"페어리");
		for (int i = 4; i < 8; i++)
			Creatures[i]->SetName((char*)"프라임 페어리");
		for (int i = 8; i < 12; i++)
			Creatures[i]->SetName((char*)"포이즌 페어리");
		for (int i = 12; i < 16; i++)
			Creatures[i]->SetName((char*)"");
		for (int i = 16; i < 20; i++)
			Creatures[i]->SetName((char*)"고블린 창병");
		Creatures[20]->SetName((char*)"고블린 주술사");
		Creatures[21]->SetName((char*)"고블린 돌격대장");
		break;
	case 3:
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
		Creatures[20]->SetName((char*)"고블린 주술사");
		Creatures[21]->SetName((char*)"고블린 돌격대장");
		break;
	case 4:
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
		Creatures[20]->SetName((char*)"고블린 주술사");
		Creatures[21]->SetName((char*)"고블린 돌격대장");
		break;
	case 5:
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
		Creatures[20]->SetName((char*)"고블린 주술사");
		Creatures[21]->SetName((char*)"고블린 돌격대장");
		break;
	case 6:
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
		Creatures[20]->SetName((char*)"고블린 주술사");
		Creatures[21]->SetName((char*)"고블린 돌격대장");
		break;
	}
}