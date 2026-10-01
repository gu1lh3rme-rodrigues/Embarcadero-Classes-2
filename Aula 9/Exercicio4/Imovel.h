#pragma once
#include <string>

using namespace std;

class Imovel{
	
	protected:
		string endereco;
		double preco;
		
	public:
		Imovel(string _endereco, double _preco);
		string getEndereco();
		double getPreco();
		
	void imprimeDados();
};