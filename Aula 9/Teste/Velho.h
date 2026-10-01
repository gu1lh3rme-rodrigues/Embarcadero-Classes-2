#pragma once
#include "Imovel.h"

class Velho : public Imovel{
	
	private:
		double desconto;
		
	public:
		Velho(string _endereco, double _preco, double _desconto);
		
		double getDesconto();
		void imprimeDesconto();
};