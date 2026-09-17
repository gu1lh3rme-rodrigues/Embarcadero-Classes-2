#pragma once
#include<string>
#include <iostream>

using namespace std;

class Empregador
{
	protected:
		string nome;
		int codigoDepartamento;
	
	public:
		Empregador(string _nome, int _codigoDepartamento)
		{
			nome = _nome;
			codigoDepartamento = _codigoDepartamento;
		}
		
		int getcodigoDepartamento()
		{
			return codigoDepartamento;
		}
		
		void setnome (string _nome)
		{
			nome = _nome;
		}
		string getnome()
		{
			return nome;
		}
		
			
};