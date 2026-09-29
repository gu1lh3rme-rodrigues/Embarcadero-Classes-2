#include "Assistente.h"

Assistente::Assistente(){
	
}

	Assistente::Assistente(double _salario, string _nome, int _matricula){
		matricula = _matricula;
	}
	
	int Assistente::getMatricula(){
		return matricula;
	}
	
	void Assistente::setMatricula(int _matricula){
		matricula = _matricula;
	}