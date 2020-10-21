#ifndef ENEMY_MANAGER_H
#define ENEMY_MANAGER_H

#include <vector>

class EnemyManager
{
public:
	EnemyManager();
	virtual ~EnemyManager();

public:
	class Base* CreateEnemy(int enemy_type);
	bool DestoryEnemy(class Base* ptr);
	void Exec();
	void Draw();
	class Base* CheckHit(int x, int y, int width, int height);

private:
	std::vector<class Base*> m_Enemies;
};





#endif // !ENEMY_MANAGER_H

