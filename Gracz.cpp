#include "Gracz.h"
#include <string>

Gracz::Gracz(std::string _name, int _hp_max, int _mana_max, int _x, int _y)
{
	hp_max = _hp_max;
	mana_max = _mana_max;
	hp=hp_max;
	mana=mana_max;
	name=_name;
	x=_x;
	y=_y;
	inventory = new Inventory(10);
}

void Gracz::set_lokalizacja(Lokalizacja* _lokalizacja)
{
	lokalizacja=_lokalizacja;
}

void Gracz::set_hp(int _hp)
{
	hp=_hp;
}

void Gracz::set_mana(int _mana)
{
	mana=_mana;
}

void Gracz::set_x(int _x)
{
	x=_x;
}

void Gracz::set_y(int _y)
{
	y=_y;
}

////////////////////////////////////////////////////////////////////////////
int Gracz::get_hp()
{
	return hp;
}

int Gracz::get_mana()
{
	return mana;
}

std::string Gracz::get_name()
{
	return name;
}

Lokalizacja* Gracz::get_lokalizacja()
{
	return lokalizacja;
}

int Gracz::get_x()
{
	return x;
}

int Gracz::get_y()
{
	return y;
}


void Gracz::add_inv(Item* item)
{
	inventory->add(item);
}

void Gracz::show_inv()
{
	inventory->show();
}