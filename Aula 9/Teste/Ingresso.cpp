#include <iostream>
#include "Ingresso.h"

using namespace std;

Ingresso::Ingresso(double _valor){
	valor = _valor;
}

void Ingresso::imprimeValor(){
	cout << "Valor do ingresso: R$ " << valor << endl;
}