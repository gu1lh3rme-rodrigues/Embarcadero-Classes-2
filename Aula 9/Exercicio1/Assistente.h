#pragma once
#include "Funcionario.h"

class Assistente : public Funcionario{
	
	protected:
		int matricula;
		
	public:
		static int ultimaMatricula;
		
		Assistente(int _id, string _nome, double _salario);
		
		int getMatricula();
		
		virtual void exibeDados();
};