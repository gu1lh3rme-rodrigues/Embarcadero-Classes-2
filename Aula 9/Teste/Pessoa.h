#pragma once
#include <string>

using namespace std;

class Pessoa{
	
	private:
		string nome;
		int idade;
		
	public:
		Pessoa();
		Pessoa(string _nome, int _idade);
		
		string getNome();
		int getIdade();
		
		void setNome(string _nome);
		void setIdade(int _idade);
};