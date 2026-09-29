#include "Gerente.h"

Gerente::Gerente(){
	
}
	Gerente::Gerente(double _salario, string _nome, string _matricula, int _IdfGerente):Funcionario (_salario, _nome, _matricula){
		IdfGerente = _IdfGerente;
	}
	
	int Gerente::getIdfGerente(){
		return IdfGerente;
	}
	void Gerente::setIdfGerente(int _IdfGerente){
		IdfGerente = _IdfGerente;
	}