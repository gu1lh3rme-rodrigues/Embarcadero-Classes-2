#pragma once
#include <iostream>
#include "Reta.h"

void Reta::setId(int val)
	{	
		id = val;
	}
int Reta::getId()
	{
		return id;
	}
void Reta::setA(Ponto *val)
	{
		a = val;
	}
Ponto *Reta::getA()
	{
		return a;
	}
void Reta::setB(Ponto *val)
	{
		b = val;
	}
Ponto *Reta::getB()
	{
		return b;
	}
	
void Reta::print()
{
	std::cout
	<<"Reta " << id
	<< ": (" << a->getX() << "," <<a->getY() << ") - ("
	<< b-> getX() << ", " <<b->getY() << ")" << std::endl;
}