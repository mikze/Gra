#include "Item.h"

class Inventory{

public:
	Inventory(int);
	void add(Item *);
	void show();
private:
	Item** itemy;
	int wielkosc;
};