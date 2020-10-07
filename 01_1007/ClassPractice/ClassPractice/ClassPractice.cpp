#include <stdlib.h>
#include <stdio.h>

class Fighter
{
public:
	Fighter();
	~Fighter();
	void PrintState();
public:
	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;
};



int main()
{
	Fighter fighter;
	fighter.PrintState();



	system("pause");
	return 0;
}

Fighter::Fighter()
{
	m_hp  = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_luc = 0;
	m_mde = 0;
}

Fighter::~Fighter()
{

}

void Fighter::PrintState()
{
	printf("|hp  : %03d|\n", m_hp);
	printf("|str : %03d|\n", m_str);
	printf("|mag : %03d|\n", m_mag);
	printf("|tec : %03d|\n", m_tec);
	printf("|spd : %03d|\n", m_spd);
	printf("|def : %03d|\n", m_def);
	printf("|luc : %03d|\n", m_luc);
	printf("|med : %03d|\n", m_mde);
}

