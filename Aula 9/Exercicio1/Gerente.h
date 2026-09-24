#pragma once 
#include "Funcionario.h"
#include <string>

class Gerente: public Funcionario{
	private:
		int IdfGerente;
		
	
	public:
	Gerente();
	Gerente(double _salario, string _nome, string _matricula, int _IdfGerente);
	
	int getIdfGerente();
	void setIdfGerente(int _IdfGerente);
};