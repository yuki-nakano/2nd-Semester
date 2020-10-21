#ifndef PLAYER_H
#define PLAYER_H

#include "Base.h"

//基底クラスを継承
//派生クラス名：public(private) 基底クラス名
class Player : public Base
{
public:
	Player();
	~Player();
public:
	void Exec();
	void Draw();
};

#endif
