#pragma once
#define PI 3.14
#include "FormaBiDimensional.h"

class Circulo : public FormaBiDimensional{
	public:
		int cX;
		int cY;
		double raio;
		
		
	public:
		double getArea();
		Circulo (int _id, string _nome, int _cX, int _cY, double _raio);
	
	
};