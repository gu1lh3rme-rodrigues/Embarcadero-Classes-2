#include "Gerente.h"

Gerente::Gerente(){
	
}
	Gerente::Gerente(double _salario, string _nome, int _idG):Funcionario (_salario, _nome){
		idG = _idG;
	}
	
	int Gerente::getIdG(){
		return idG;
	}
	void Gerente::setIdG(int _idG){
		idG = _idG;
	}