#ifndef ENEMY_H
#define ENMEY_H

#include"Base.h"

//===========================
//エネミーークラス
//===========================
class Enemy :public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exex();
	void Draw();

private:
	// 行動管理用の変数
	int m_Routine;

	//public:
	//	void SetHp(int hp);
	//	void SetPos(float x, float y);
	//	void SetMoveSpeed(float speed);
	//
	//	int GetHp();
	//	float GetPosX();
	//	float GetPosY();
	//	float GetMoveSpeed();
	//
	//private:
	//	int m_Hp;
	//	int m_PosX;
	//	int m_PosY;
	//	int m_MoveSpeed;
};



#endif
