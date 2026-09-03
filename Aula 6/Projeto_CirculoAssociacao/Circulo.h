#pragma once

#include "ponto.h"

class Circulo
{
	private:
	    Ponto ponto;
	    int raio;
	    double PI = 3.14;
	
	public:
	
	    Circulo();
	    Circulo(int _x, int _y, int _raio);
	
	    void setX(int _x);
	    int getX();
	
	    void setY(int _y);
	    int getY();
	
	    void setRaio(int _raio);
	    int getRaio();
	
	    void setPI(double _PI);
	    double getPI();
	
	    double calculeComprimento();
	    double calculeArea();
};

