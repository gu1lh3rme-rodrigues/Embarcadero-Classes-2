#pragma once 
#include "Circulo.h"

void Circulo::Circulo (int _cX, int _cY, double _raio){
	cX = _cX;
	cY = _cY;
	raio = _raio;
}

double Circulo::getArea(){
	return PI*raio*raio;
}

