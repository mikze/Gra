#include "Jednostka.h"
#include "Item.h"

class Gracz : private Jednostka
{

public:
	Gracz(std::string,int,int,int,int);
	void set_lokalizacja(Lokalizacja*);
	void set_hp(int);
	void set_mana(int);
	void set_x(int);
	void set_y(int);
	int get_hp();
	int get_mana();
	int get_x();
	int get_y();
	void add_inv(Item*);
	void show_inv();
	std::string get_name();
	Lokalizacja* get_lokalizacja();
	
private:


};