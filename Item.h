#pragma once
#include <string>

class Item
{
private:
	
	int id;
	int type;
	std::string name;

public:

	Item(std::string,int);
	std::string get_name();


};