#include <iostream>
#include "Ponto.h"
#include "Reta.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Ponto *p1 = new Ponto();
	p1->setId(1);
	p1->setX(50);
	p1->setY(100);
	
	Ponto *p2 = new Ponto();
	p2->setId(2);
	p2->setX(200);
	p2->setY(200);
	
	std::cout << "Ponto 1: (x,y) = "
	<<p1->getX()<<", "<<p1->getY()<<std::endl;
	
	std::cout << "Ponto 2: (x,y) = "
	<<p2->getX()<<", "<<p2->getY()<<std::endl;
	
	Reta *r1 = new Reta();
	r1->setId(3);
	r1->setA(p1);
	r1->setB(p2);
	
	std::cout
	<<"Reta "<< r1->getId()<<": (x1, y1) - (x2, y2) = ("
	<<r1->getA()->getX() << ", " <<r1->getB()->getY()
	<< "). "<< std::endl << std::endl;
	
	r1->print();
	
	
	return 0;
}