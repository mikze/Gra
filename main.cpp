#include <iostream>
#include "Gra.h"



using namespace std;

void wczytywanie()
{

}

int main(int argc, char *argv[])
{
    world swiat;


	swiat.mikze->set_lokalizacja(swiat.Step);
	swiat.pies->set_lokalizacja(swiat.Zamek);
	swiat.mikze->add_inv(swiat.miecz);
	swiat.mikze->add_inv(swiat.zbroja);

	cout<<swiat.pies->get_name()<<" "<<swiat.pies->get_hp()<<" "<<swiat.pies->get_mana()<<" "<<swiat.pies->get_lokalizacja()->get_name()<<endl;
	cout<<swiat.mikze->get_name()<<" "<<swiat.mikze->get_hp()<<" "<<swiat.mikze->get_mana()<<" "<<swiat.mikze->get_lokalizacja()->get_name()<<endl;
	swiat.mikze->show_inv();
	if(swiat.mikze->get_lokalizacja()==swiat.pies->get_lokalizacja())
	{
		cout<<"Ta sama lokalizacja!"<<endl;
	}
	else
	{
		cout<<"Inna lokalizacja!"<<endl;
	}
	swiat.mikze->get_lokalizacja()->show_map();
	int a;
	while(true)
		{
			cin>>a;
			if(a==1)
			{
				swiat.mikze->set_x(swiat.mikze->get_x()+1);
			}
			else if(a==2)
			{
				swiat.mikze->set_x(swiat.mikze->get_x()-1);
			}
			else if(a==3)
			{
				swiat.mikze->set_y(swiat.mikze->get_y()+1);
			}
			else
			{
				swiat.mikze->set_y(swiat.mikze->get_y()-1);
			}
			cout<<"Wsporzedne to: "<<swiat.mikze->get_x()<<swiat.mikze->get_y()<<endl;
		}
	cout<<"Dziala!"<<endl;

	return 0;
}
