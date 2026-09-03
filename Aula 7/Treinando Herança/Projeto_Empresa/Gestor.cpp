#include "Gestor.h"


Gestor::Gestor()
{
}
	Gestor::Gestor(int _codDepartamento, string _nome, int _classeGestor)
	:Empregado(_codDepartamento, _nome	)
	{
		classeGestor = _classeGestor;
		
	}

	int Gestor::getClasseGestor()
	{
		return classeGestor;
	}
	
	void Gestor::setClasseGestor(int _classeGestor)
	{
		classeGestor = _classeGestor;
	}
	
	