#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	m_Routine = 0;
	printf("Enemy:�R���X�g���N�^\n");
}

Enemy::~Enemy()
{
	printf("Enemy:�f�X�g���N�^\n");
}

void Enemy::Exec()
{

}

void Enemy::Draw()
{

}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	//������Ȃ�����
	printf("enemy:������܂���ł���\n");
	return false;
}
