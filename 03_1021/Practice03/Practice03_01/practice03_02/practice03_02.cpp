#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "Player.h"
#include "Enemy.h"
#include "Base.h"
#include "EnemyManager.h"

//#define PRACTICE03_1021	//10月21日授業分

void printStatus(std::string name, Base* target);

int main()
{
#if defined(PRACTICE03_1021)
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
#else
	//10月28日に追加作業した分
	//EnemyManagerの実行テスト
#endif
	//EnemyManagerを使った
	EnemyManager* enemyMng = new EnemyManager();
	Base* pEnemy = nullptr;

	//ステージ開始時点でまとめて初期化
	//引数はエネミーの種類を表す(本来ならenumなどで分かりやすくする)
	enemyMng->CreateEnemy(0);
	enemyMng->CreateEnemy(1);
	pEnemy = enemyMng->CreateEnemy(2);
	enemyMng->CreateEnemy(3);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);

	//指定したエネミーを削除
	enemyMng->DestoryEnemy(pEnemy);

	enemyMng->Exec();
	enemyMng->Draw();

	//指定座標と接触しているエネミーを取得
	pEnemy = enemyMng->CheckHit(10, 10, 20, 30);

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