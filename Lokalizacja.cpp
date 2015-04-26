#include "Lokalizacja.h"
#include <string>
Lokalizacja::Lokalizacja(std::string _name)
{
	name=_name;
}
std::string Lokalizacja::get_name()
{
	return name;
}