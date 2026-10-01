#pragma once
#include <string>
#include "VIP.h"

using namespace std;

class CamaroteInferior : public VIP{
	
	private:
		string localizacao;
		
	public:
		CamaroteInferior(double _valor, double _valorAdicional, string _localizacao);
		
		string getLocalizacao();
		void imprimeLocalizacao();
};