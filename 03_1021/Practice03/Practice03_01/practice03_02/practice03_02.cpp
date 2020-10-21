#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "Player.h"
#include "Enemy.h"

void printStatus(std::string name, Base* target);

int main()
{
	Player player;
	player.SetMoveSpeed(5.0f);

	Enemy enemy;
	enemy.SetHp(100);

	Base* pBase = nullptr;

	printf("-------------\n");
	printf("PRACTICE02_04\n");
	printf("-------------\n");

	pBase = &player;
	printStatus("Player", pBase);

	pBase = &enemy;
	printStatus("Enemy", pBase);


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