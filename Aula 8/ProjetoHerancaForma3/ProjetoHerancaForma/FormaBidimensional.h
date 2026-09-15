#pragma once
#include <string>
#include "Forma.h"

using namespace std;

class FormaBidimensional : public Forma {
	
	protected: 
		double area;
	
	public:
		string nome;
		
	public:
		FormaBidimensional(int _id, string _nome);
		
};
