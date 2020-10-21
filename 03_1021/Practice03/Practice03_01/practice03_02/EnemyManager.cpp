#include "EnemyManager.h"
#include "Base.h"
#include"Enemy.h"

//コンストラクタ
EnemyManager::EnemyManager()
{

}

//デストラクター
EnemyManager::~EnemyManager()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); itr++)
	{
		//newで確保した格Enemyクラスを削除
		delete *itr;
		*itr = nullptr;
	}
	//m_Enemiesにはnullptrが入ったBase*の配列が入っている
	m_Enemies.clear();
}

//エネミーを生み出す
class Base* EnemyManager::CreateEnemy(int enemy_type)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); itr++)
	{
		//可変長配列に空きがあればそこに作る
		if (*itr == nullptr)
		{
			*itr = new Enemy();
			return *itr;
		}
	}

	//空きがないので、新規に作ってpush_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}