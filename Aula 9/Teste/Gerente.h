#pragma once
#include "Funcionario.h"

class Gerente : public Funcionario{
	
	public:
		Gerente(int _id, string _nome, double _salario);
		
		void exibeDados();
};