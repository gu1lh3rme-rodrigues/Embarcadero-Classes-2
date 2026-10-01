#pragma once
#include "Pessoa.h"

class Pobre : public Pessoa{
	
	public:
		Pobre(string _nome, int _idade);
		
		void trabalha();
};