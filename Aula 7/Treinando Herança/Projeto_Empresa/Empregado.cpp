#include "Empregado.h"
#include <string>

Empregado::Empregado()
{
}
	Empregado::Empregado(int _codDepartamento, string _nome)
	{
		codDepartamento = _codDepartamento;
		nome = _nome;
	}
	
	int Empregado::getCodDepartamento()
	{
		return codDepartamento;
	}
	
	string Empregado::getNome()
	{
		return nome;
	}
	//////////////////////////////////////////
	void Empregado::setCodDepartamento(int _codDepartamento)
	{
		codDepartamento = _codDepartamento;
	}
	
	void Empregado::setNome(string _nome)
	{
		nome = _nome;
	}
	