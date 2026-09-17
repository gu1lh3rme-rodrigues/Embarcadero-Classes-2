#include "Funcionario.h"
#include <string>

Funcionario::Funcionario(){
	
}

	Funcionario::Funcionario(double _salario, string _nome){
		salario = _salario;
		nome = _nome;
	}
	
	double Funcionario::getSalario()
	{
		return salario;
	}
	
	string Funcionario::getNome(){
		return nome;
	}
	
	////////////////////////////////separacao get-set
	void Funcionario::setSalario(double _salario){
		salario = _salario;
	}
	
	void Funcionario::setNome(string _nome){
		nome = _nome;
	}
	