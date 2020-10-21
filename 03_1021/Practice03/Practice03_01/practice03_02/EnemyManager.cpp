#include "EnemyManager.h"
#include "Base.h"
#include"Enemy.h"

//�R���X�g���N�^
EnemyManager::EnemyManager()
{

}

//�f�X�g���N�^�[
EnemyManager::~EnemyManager()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); itr++)
	{
		//new�Ŋm�ۂ����iEnemy�N���X���폜
		delete *itr;
		*itr = nullptr;
	}
	//m_Enemies�ɂ�nullptr��������Base*�̔z�񂪓����Ă���
	m_Enemies.clear();
}

//�G�l�~�[�𐶂ݏo��
class Base* EnemyManager::CreateEnemy(int enemy_type)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); itr++)
	{
		//�ϒ��z��ɋ󂫂�����΂����ɍ��
		if (*itr == nullptr)
		{
			*itr = new Enemy();
			return *itr;
		}
	}

	//�󂫂��Ȃ��̂ŁA�V�K�ɍ����push_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}