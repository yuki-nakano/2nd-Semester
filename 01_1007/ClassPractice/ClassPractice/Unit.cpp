#include "common.h"
#include "Unit.h"

Unit::Unit()
{
	status._hp = 0;
	status._str = 0;
	status._mag = 0;
	status._tec = 0;
	status._spd = 0;
	status._def = 0;
	status._luc = 0;
	status._mde = 0;
}

Unit::~Unit()
{

}

void Unit::PrintState()
{
	printf("|hp  : %03d|\n", status._hp);
	printf("|str : %03d|\n", status._str);
	printf("|mag : %03d|\n", status._mag);
	printf("|tec : %03d|\n", status._tec);
	printf("|spd : %03d|\n", status._spd);
	printf("|def : %03d|\n", status._def);
	printf("|luc : %03d|\n", status._luc);
	printf("|med : %03d|\n", status._mde);
}
