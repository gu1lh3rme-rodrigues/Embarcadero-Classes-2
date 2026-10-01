#pragma once
#include "Animal.h"

class Cachorro : public Animal{
	
	public:
		Cachorro(string _nome);
		string late();
};