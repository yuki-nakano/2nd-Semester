#ifndef BACE_H
#define BACE_H

//���N���X�@(�e�N���X)
class Base
{
public:
	Base();
	virtual ~Base();
public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();
private:
	int m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;
};



#endif // !BACE_H

