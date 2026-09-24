#pragma once 
#include <string>

using namespace std;

class Funcionario{
	private: 
		double salario;
		string nome;
	
	public:
		static string matricula;
		Funcionario();
		Funcionario(double _salario, string _nome, string matricula);
		
		double getSalario();
		string getNome();
		string getMatricula();
		
		void setSalario(double _salario);
		void setNome (string _nome);
		void setMatricula (string matricula);
		
};
