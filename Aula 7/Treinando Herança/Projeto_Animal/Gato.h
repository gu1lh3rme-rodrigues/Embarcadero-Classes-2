#pragma once
#include "Animal.h"

class Gato : public Animal {
	
	private:
		string som;
		
	public:
		Gato();
		Gato(string _nome, int _idade, string _som);
		
		string getSom();
		void setSom(string _som);
};