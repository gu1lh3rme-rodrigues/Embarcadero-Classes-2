#pragma once
#include "Pessoa.h"

class Rica : public Pessoa{
	
	private:
		double dinheiro;
		
	public:
		Rica(string _nome, int _idade, double _dinheiro);
		
		void fazCompras();
};