#include "Gato.h"

Gato::Gato()
{
}

	Gato::Gato(string _nome, int _idade, string _som)
		: Animal(_nome, _idade)
	{
		som = _som;
	}
	
	string Gato::getSom()
	{
		return som;
	}
	
	void Gato::setSom(string _som)
	{
		som = _som;
	}