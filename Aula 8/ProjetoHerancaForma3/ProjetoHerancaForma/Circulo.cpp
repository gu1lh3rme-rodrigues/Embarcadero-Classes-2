#pragma once

#include <string.h>
#include "Circulo.h"

Circulo::Circulo(int _id, string _nome, int _cX, int _cY, double _raio)
			: FormaBidimensional(_id, _nome) {
	cX = _cX;
	cY = _cY;
	raio = _raio;
}

double Circulo::getArea(){
	return PI*raio*raio;
}

