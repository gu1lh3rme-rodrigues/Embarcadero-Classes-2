#pragma once
#include <string>

using namespace std;

class Animal {
	private:
		string nome;
		int idade;
		
	public:
		Animal();
		Animal(string _nome, int _idade);
		
		string getNome();
		int getIdade();
		
		void setNome(string _nome);
		void setIdade(int _idade);
};