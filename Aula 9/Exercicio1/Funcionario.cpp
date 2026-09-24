#include "Funcionario.h"
#include <string>

Funcionario::Funcionario(){
	


	Funcionario::Funcionario(double _salario, string _nome, string _matricula){
		Funcionario::matricula++;
		salario = _salario;
		nome = _nome;
		matricula  = _matricula;
	}
	
	double Funcionario::getSalario()
	{
		return salario;
	}
	
	string Funcionario::getNome(){
		return nome;
	}
	
	string Funcionario::getMatricula(){
		return matricula;
	}
	
	////////////////////////////////separacao get-set
	void Funcionario::setSalario(double _salario){
		salario = _salario;
	}
	
	void Funcionario::setNome(string _nome){
		nome = _nome;
	}
	
	void Funcionario::setMatricula(string _matricula){
		matricula = _matricula;
	}
	
}
	