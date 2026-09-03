#include "ponto.h"

Ponto::Ponto()
{
}
	Ponto::Ponto(int _id, int _x, int _y)
	{
	    id = _id;
	    x = _x;
	    y = _y;
	}
	
	int Ponto::getId()
	{
	    return id;
	}
	
	int Ponto::getX()
	{
	    return x;
	}
	
	int Ponto::getY()
	{
	    return y;
	}
	
	void Ponto::setId(int _id)
	{
	    id = _id;
	}
	
	void Ponto::setX(int _x)
	{
	    x = _x;
	}
	
	void Ponto::setY(int _y)
	{
	    y = _y;
	}
