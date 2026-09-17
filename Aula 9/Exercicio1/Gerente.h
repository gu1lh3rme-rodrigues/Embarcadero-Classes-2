#pragma once 
#include "Funcionario.h"
#include <string>

class Gerente: public Funcionario{
	private:
		int idG;
		
	
	public:
	Gerente();
	Gerente(double _salario, string _nome, int _idG);
	
	int getIdG();
	void setIdG(int _idG);
};