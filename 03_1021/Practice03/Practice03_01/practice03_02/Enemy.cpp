#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	m_Routine = 0;
	printf("Enemy:コンストラクタ\n");
}

Enemy::~Enemy()
{
	printf("Enemy:デストラクタ\n");
}

void Enemy::Exec()
{

}

void Enemy::Draw()
{

}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	//当たらなかった
	printf("enemy:当たりませんでした\n");
	return false;
}
