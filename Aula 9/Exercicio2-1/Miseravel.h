#pragma once
#include "Pessoa.h"

class Miseravel : public Pessoa{
	
	public:
		Miseravel(string _nome, int _idade);
		
		void mendiga();
};