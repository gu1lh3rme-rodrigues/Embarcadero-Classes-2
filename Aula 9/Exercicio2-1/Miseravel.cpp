#include <iostream>
#include "Miseravel.h"

using namespace std;

Miseravel::Miseravel(string _nome, int _idade)
	: Pessoa(_nome, _idade){
}

void Miseravel::mendiga(){
	cout << "A pessoa miseravel mendiga." << endl;
}