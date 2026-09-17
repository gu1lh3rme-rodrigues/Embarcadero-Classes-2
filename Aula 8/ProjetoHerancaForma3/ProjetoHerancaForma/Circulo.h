#pragma once
#include "FormaBidimensional.h"

#define PI 3.14

class Circulo : public FormaBidimensional {
	
	public: 
		int cX;
		int cY;
		double raio;
		
	public:
		double getArea();
		Circulo(int _id, string _nome, int _cX, int _cY, double _raio);
	
};
