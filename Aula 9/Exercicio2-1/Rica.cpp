#include <iostream>
#include "Rica.h"

using namespace std;

Rica::Rica(string _nome, int _idade, double _dinheiro)
	: Pessoa(_nome, _idade){
	
	dinheiro = _dinheiro;
}

void Rica::fazCompras(){
	cout << "A pessoa rica faz compras." << endl;
}