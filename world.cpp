#include "world.h"

world::world()
{
    Loch = new Lokalizacja("Loch");
	Zamek = new Lokalizacja("Zamek");
	Step = new Lokalizacja("Step");

	miecz = new Item("miecz",1);
	zbroja = new Item("zbroja",2);

	mikze=new Gracz("mikze",100,100,0,0);
    pies=new Przeciwnik("pies",100,100,1,1);
}

world::~world()
{
    //dtor
}
