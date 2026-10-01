#pragma once
#include "Ingresso.h"

class VIP : public Ingresso{
	
	protected:
		double valorAdicional;
		
	public:
		VIP(double _valor, double _valorAdicional);
		
		double getValorVIP();
};