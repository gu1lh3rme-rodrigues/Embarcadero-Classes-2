#pragma once
#include "VIP.h"

class CamaroteSuperior : public VIP{
	
	private:
		double valorAdicionalSuperior;
		
	public:
		CamaroteSuperior(double _valor, double _valorAdicional, double _valorAdicionalSuperior);
		
		double getValorCamaroteSuperior();
};