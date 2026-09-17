#pragma once
#include "Empregador.cpp"
#include <string>

class Gestor : public Empregador
{
	private:
		int codGestor;
		
	public:
		Gestor (string _nome, int _codigoDepartamento, int _codGestor): Empregador( _nome, _codigoDepartamento)
		{
			codGestor = _codGestor;
		}
		
		int getcodGestor()
		{
			return codGestor;
		}
};