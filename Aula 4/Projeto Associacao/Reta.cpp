#pragma once 
#include <iostream>
#include "Reta.h"

void Reta::setId(int _id){
	id = _id;
}
void Reta::getId(){
	return id;
}

void Reta::setA(Ponto *_a){
	a = _a;
}

Ponto *Reta::getA(){
	return a;
}


void Reta::setB(Ponto *_b){
	b = _b;
}

Ponto *Reta::getB(){
	return b;
}

void Reta::print()
{
	std::cout
	<<"Reta "<< id
	<<": (" <<a->getX() << ", "a->getY()<<") - ("
	<< b->getX() <<", "<< b->getY()<< ")" << std::endl;
}