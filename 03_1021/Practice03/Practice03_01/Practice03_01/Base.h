#ifndef BASE_H
#define BASE_H

// ���N���X(�e�N���X)
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
	int m_PosX;
	int m_PosY;
	int m_MoveSpeed;

};


#endif // #ifndef BASE_H

