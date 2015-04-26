#include "Item.h"

Item::Item(std::string _name, int _type)
{
	name=_name;
	type=_type;
}
std::string Item::get_name()
{
	return name;
}