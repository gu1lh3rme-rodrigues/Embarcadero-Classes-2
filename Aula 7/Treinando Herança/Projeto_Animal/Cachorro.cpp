#include "Cachorro.h"

Cachorro::Cachorro()
{
}

	Cachorro::Cachorro(string _nome, int _idade, string _som)
		: Animal(_nome, _idade)
	{
		som = _som;
	}
	
	string Cachorro::getSom()
	{
		return som;
	}
	
	void Cachorro::setSom(string _som)
	{
		som = _som;
	}