#include "common.h"
#include "Unit.h"

Unit::Unit()
{
	m_hp = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_luc = 0;
	m_mde = 0;
}

Unit::~Unit()
{

}

void Unit::PrintState()
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
