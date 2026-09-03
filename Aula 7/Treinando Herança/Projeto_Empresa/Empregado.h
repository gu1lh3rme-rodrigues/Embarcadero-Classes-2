#pragma once
#include <string>
using namespace std;


class Empregado{
	private:
		int codDepartamento;
		string nome;
		
	public:
		Empregado();
		Empregado(int _codDepartamento, string _nome);
		
		int getCodDepartamento();
		string getNome();
		
		void setCodDepartamento(int _codDepartamento);
		void setNome(string _nome);
};