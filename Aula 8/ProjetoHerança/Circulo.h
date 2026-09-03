#pragma once
#define PI 3.14
#include "FormaBiDimensional.cpp"

class Circulo : public FormaBiDimensional(){
	public:
		int cX;
		int cY;
		double raio;
		
		
		double getArea();
	
	Circulo (int _cX, int _cY, double _raio);
	
	
};