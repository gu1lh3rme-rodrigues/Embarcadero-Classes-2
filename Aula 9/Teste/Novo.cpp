#include <iostream>
#include "Novo.h"

using namespace std;

Novo::Novo(string _endereco, double _preco, double _adicional)
	: Imovel(_endereco, _preco){
	
	adicional = _adicional;
}

double Novo::getAdicional(){
	return adicional;
}

void Novo::imprimeAdicional(){
	cout << "Adicional: R$ " << adicional << endl;
}