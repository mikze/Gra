#pragma once

#include <string>
#include "Map.h"

class Lokalizacja : private Map

{

public:
	Lokalizacja(std::string);
	std::string get_name();
	void show_map();
private:
	std::string name;

};
