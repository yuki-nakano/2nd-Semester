#ifndef PLAYER_H
#define PLAYER_H

#include "Base.h"

//���N���X���p��
//�h���N���X���Fpublic(private) ���N���X��
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
