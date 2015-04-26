#include <iostream>
#include "Gracz.h"
#include "Przeciwnik.h"
#include "Item.h"



using namespace std;

int main(int argc, char *argv[])
{
	Gracz mikze("mikze",100,100,0,0);
	Przeciwnik pies("pies",100,100,1,1);
	Lokalizacja* lochy = new Lokalizacja("Lochy");
	Lokalizacja* zamek = new Lokalizacja("zamek");
	Item* miecz = new Item("miecz",1);
	Item* zbroja = new Item("zbroja",2);
	mikze.set_lokalizacja(zamek);
	pies.set_lokalizacja(lochy);
	mikze.add_inv(miecz);
	mikze.add_inv(zbroja);
	cout<<pies.get_name()<<" "<<pies.get_hp()<<" "<<pies.get_mana()<<" "<<pies.get_lokalizacja()->get_name()<<endl;
	cout<<mikze.get_name()<<" "<<mikze.get_hp()<<" "<<mikze.get_mana()<<" "<<mikze.get_lokalizacja()->get_name()<<endl;
	mikze.show_inv();
	if(mikze.get_lokalizacja()==pies.get_lokalizacja())
	{
		cout<<"Ta sama lokalizacja!"<<endl;
	}
	else
	{
		cout<<"Inna lokalizacja!"<<endl;
	}
	int a;
	while(true)
		{
			cin>>a;
			if(a==1)
			{
				mikze.set_x(mikze.get_x()+1);
			}
			else if(a==2)
			{
				mikze.set_x(mikze.get_x()-1);
			}
			else if(a==3)
			{
				mikze.set_y(mikze.get_y()+1);
			}
			else
			{
				mikze.set_y(mikze.get_y()-1);
			}
			cout<<"Wsporzedne to: "<<mikze.get_x()<<mikze.get_y()<<endl;
		}
	cout<<"Dziala!"<<endl;

	return 0;
}