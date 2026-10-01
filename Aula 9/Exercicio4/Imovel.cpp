#include <iostream>
#include "Imovel.h"

using namespace std;

	Imovel::Imovel(string _endereco, double _preco){
		endereco = _endereco;
		preco = _preco;
	}	

	string Imovel::getEndereco(){
		return endereco;
	}
	
	double Imovel::getPreco(){
		return preco;
	}

	void Imovel::imprimeDados(){
		cout << "Endereco: " << endereco << endl;
		cout << "Preco: R$ " << preco << endl;
	}