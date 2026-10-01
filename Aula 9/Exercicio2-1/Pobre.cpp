#include <iostream>
#include "Pobre.h"

using namespace std;

Pobre::Pobre(string _nome, int _idade)
	: Pessoa(_nome, _idade){
}

void Pobre::trabalha(){
	cout << "A pessoa pobre trabalha." << endl;
}