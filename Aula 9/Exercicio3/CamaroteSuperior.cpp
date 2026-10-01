#include "CamaroteSuperior.h"

CamaroteSuperior::CamaroteSuperior(double _valor, double _valorAdicional, double _valorAdicionalSuperior)
	: VIP(_valor, _valorAdicional){
	
	valorAdicionalSuperior = _valorAdicionalSuperior;
}

double CamaroteSuperior::getValorCamaroteSuperior(){
	return valor + valorAdicional + valorAdicionalSuperior; // agora o valor do ticket do vip + camarote
}