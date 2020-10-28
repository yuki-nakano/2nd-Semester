#include <iostream>

class CharaBase
{
public:
	CharaBase();
	CharaBase(int hp, int mp);
	virtual  ~CharaBase();

	void printParam();

private:
	int Hp;
	int Mp;

	const int HP_MAX = 999;
};
//コンストラクタでメンバイニシャライザによる初期化のやり方
//クラス名::コンストラクタ(引数):メンバ変数(初期値).メンバ変数(初期値)
CharaBase::CharaBase()
	: Hp(50)
	, Mp(30)
	, HP_MAX(999)	//constメンバ変数もここでなら初期化できる
{
	//従来の初期化方法
//	Hp = 50;
//	Mp = 10;
}

CharaBase::CharaBase(int hp, int mp)
	: Hp(50)
	, Mp(30)
	, HP_MAX(999)
{
	Hp = hp;
	Mp = mp;
}

CharaBase::~CharaBase()
{

}

void CharaBase::printParam()
{
	printf("Hp = %d\n", Hp);
	printf("Mp = %d\n", Mp);
	printf("\n");
	printf("HP_MAX = %d\n", HP_MAX);
}

class Player : public CharaBase
{
public :
	Player();

private:
	int Money;
};

//引数なしの基底クラスのコンストラクタは省略されることができる
//派生クラスのメンバイニシャライザは、基本クラスのコンストラクタを先に呼び出す
Player::Player()
	:CharaBase(200, 30)
	, Money(50)
{

}

int main()
{ 
	//データ型にもコンストラクタはある
	int value(10);
	float _value(10.0f);

	CharaBase ch;
	ch.printParam();

	Player player;
	player.printParam();

	return 0;
}

