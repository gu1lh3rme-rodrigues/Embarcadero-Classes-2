#pragma once
#include "Imovel.h"

class Novo : public Imovel{
	
	private:
		double adicional;
		
	public:
		Novo(string _endereco, double _preco, double _adicional);
		
		double getAdicional();
		void imprimeAdicional();
};