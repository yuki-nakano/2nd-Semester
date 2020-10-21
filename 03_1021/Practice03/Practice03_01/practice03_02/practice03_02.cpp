#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "Player.h"
#include "Enemy.h"
#include "Base.h"

void printStatus(std::string name, Base* target);

int main()
{
	Base* player = new Player();
	player->SetMoveSpeed(5.0f);

	Base* enemy = new Enemy();
	enemy->SetHp(100);

	Base* pBase[] =
	{
		player,
		enemy
	};

	std::string name[] =
	{
		"Player",
		"Enemy",
	};
	printf("-------------\n");
	printf("PRACTICE02_04\n");
	printf("-------------\n");

	for (int i = 0; i < 2; i++)
	{
		pBase[i]->Exec();
		pBase[i]->Draw();
		pBase[i]->CheckHit(10, 10, 20, 30);
		printStatus(name[i].c_str(), pBase[i]);
	}

	delete player;
	player = nullptr;
	delete enemy;
	enemy = nullptr;

	system("pause");
	return 0;
}

void printStatus(std::string name, Base* target)
{
	if (target == nullptr)
	{
		return;
	}
	printf("Player Status\n");
	printf("hp = %d\n", target->GetHp());
	printf("PosX = %0.2f\n", target->GetPosX());
	printf("PosY = %0.2f\n", target->GetPosY());
	printf("MoveSpeed = %0.2f\n", target->GetMoveSpeed());
	printf("\n");
}