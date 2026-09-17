#include "Animal.h"

Animal::Animal()
{
}

	Animal::Animal(string _nome, int _idade)
	{
		nome = _nome;
		idade = _idade;
	}
	
	string Animal::getNome()
	{
		return nome;
	}
	
	int Animal::getIdade()
	{
		return idade;
	}
	
	void Animal::setNome(string _nome)
	{
		nome = _nome;
	}
	
	void Animal::setIdade(int _idade)
	{
		idade = _idade;
	}