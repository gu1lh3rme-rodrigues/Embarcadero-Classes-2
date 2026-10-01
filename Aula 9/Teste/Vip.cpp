#include "VIP.h"

VIP::VIP(double _valor, double _valorAdicional)
	: Ingresso(_valor){
	
	valorAdicional = _valorAdicional; 
}

double VIP::getValorVIP(){
	return valor + valorAdicional; // Aqui faz a soma do ticket e retorna o adc
}