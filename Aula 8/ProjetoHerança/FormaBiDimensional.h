#pragma once
#include <string>
#include "Forma.h"
using namespace std;


class FormaBiDimensional : public Forma{
	protected:
		double area;
		
	public:
		string nome;
	
	FormaBiDimensional(string _nome);
};