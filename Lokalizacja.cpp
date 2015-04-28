#include "Lokalizacja.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

Lokalizacja::Lokalizacja(std::string _name)
{
	name=_name;
    _name=_name+".txt";
    char *cstr = new char[_name.length() + 1];
    strcpy(cstr, _name.c_str());

	std::ifstream mapa;
    mapa.open(cstr);

    for(int j=0;j<2;j++)
        for(int i=0;i<2;i++)
        {

        mapa>>map[i][j];

        }

    mapa.close();
    delete [] cstr;
}
void Lokalizacja::show_map()
{
    for(int j=0;j<2;j++)
        for(int i=0;i<2;i++)
        {
            std::cout<<map[i][j];
        }

}
std::string Lokalizacja::get_name()
{
	return name;
}
