#ifndef BACE_H
#define BACE_H

//基底クラス　(親クラス)
class Base
{
public:
	Base();
	 ~Base();
public:

	virtual bool CheckHit(int x, int y, int width, int height);

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

	float m_Whidth;
	float m_Height;
};



#endif // !BACE_H

