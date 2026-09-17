#pragma once
#include "Animal.h"

class Cachorro : public Animal {
	
	private:
		string som;
		
	public:
		Cachorro();
		Cachorro(string _nome, int _idade, string _som);
		
		string getSom();
		void setSom(string _som);
};