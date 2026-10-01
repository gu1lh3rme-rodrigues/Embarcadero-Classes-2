#pragma once
#include "Assistente.h"

class Tecnico : public Assistente{
	
	private:
		double bonus;
		
	public:
		Tecnico(int _id, string _nome, double _salario, double _bonus);
		
		double getBonus();
		
		void exibeDados();
};