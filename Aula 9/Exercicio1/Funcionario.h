#pragma once 
#include <string>

using namespace std;

class Funcionario{
	private: 
		double salario;
		string nome;
	
	public:
		Funcionario();
		Funcionario(double _salario, string _nome);
		
		double getSalario();
		string getNome();
		
		void setSalario(double _salario);
		void setNome (string _nome);
		
};
