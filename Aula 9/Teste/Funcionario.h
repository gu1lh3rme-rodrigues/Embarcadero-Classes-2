#pragma once
#include <string>

using namespace std;

class Funcionario{
	
	protected:
		int id;
		string nome;
		double salario;
		
	public:
		Funcionario(int _id, string _nome, double _salario);
		
		int getId();
		string getNome();
		double getSalario();
		
		virtual void exibeDados();
};