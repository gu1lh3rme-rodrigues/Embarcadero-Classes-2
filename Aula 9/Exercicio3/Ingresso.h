#pragma once

class Ingresso{
	
	protected:
		double valor;
		
	public:
		Ingresso(double _valor);
		
		virtual void imprimeValor();
};