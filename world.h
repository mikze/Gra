#ifndef WORLD_H
#define WORLD_H
#include "Lokalizacja.h"
#include "Item.h"
#include "Gracz.h"
#include "Przeciwnik.h"

class world
{
    public:
        Lokalizacja* Loch;
	    Lokalizacja* Zamek;
	    Lokalizacja* Step;
	    Item* miecz;
	    Item* zbroja;
	    Gracz* mikze;
	    Przeciwnik* pies;
        world();
        virtual ~world();
    protected:
    private:
};

#endif // WORLD_H
