#include <iostream>
#include "CamaroteInferior.h"

using namespace std;

CamaroteInferior::CamaroteInferior(double _valor, double _valorAdicional, string _localizacao)
	: VIP(_valor, _valorAdicional){
	
	localizacao = _localizacao;
}

string CamaroteInferior::getLocalizacao(){
	return localizacao;
}

void CamaroteInferior::imprimeLocalizacao(){
	cout << "Localizacao: " << localizacao << endl;
}