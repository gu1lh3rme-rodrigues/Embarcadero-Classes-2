#pragma once
#include <string>

using namespace std;

class Animal{
	
	private:
		string nome;
		string raca;
		
	public:
		Animal();
		Animal(string _nome);
		
		string getNome();
		string getRaca();
		void setRaca(string _raca);
		
		virtual string caminha();
};