#include <iostream>
#include "Velho.h"

using namespace std;

Velho::Velho(string _endereco, double _preco, double _desconto)
	: Imovel(_endereco, _preco){
	
	desconto = _desconto;
}

double Velho::getDesconto(){
	return desconto;
}

void Velho::imprimeDesconto(){
	cout << "Desconto: R$ " << desconto << endl;
}