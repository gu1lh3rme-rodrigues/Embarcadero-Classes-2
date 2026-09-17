#pragma once
#include "Funcionario.h"
#include <string>

class Assistente: public Funcionario{
	private:
		int matricula;
		
	public:
		Assistente();
		Assistente(double _salario, string _nome, int _matricula);
		
		int getMatricula();
		void setMatricula(int _matricula);
	
};