#include "circulo.h"

Circulo::Circulo()
{}
	Circulo::Circulo(int _x, int _y, int _raio)
	{
	    ponto.setX(_x);
	    ponto.setY(_y);
	    raio = _raio;
	}
	
	void Circulo::setX(int _x)
	{
	    ponto.setX(_x);
	}
	
	int Circulo::getX()
	{
	    return ponto.getX();
	}
	
	void Circulo::setY(int _y)
	{
	    ponto.setY(_y);
	}
	
	int Circulo::getY()
	{
	    return ponto.getY();
	}
	
	void Circulo::setRaio(int _raio)
	{
	    raio = _raio;
	}
	
	int Circulo::getRaio()
	{
	    return raio;
	}
	
	void Circulo::setPI(double _PI)
	{
	    PI = _PI;
	}
	
	double Circulo::getPI()
	{
	    return PI;
	}
	
	double Circulo::calculeComprimento()
	{
	    double comp = 2 * PI * raio;
	    return comp;
	}
	
	double Circulo::calculeArea()
	{
	    double area = PI * raio * raio;
	    return area;
	}

