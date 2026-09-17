#include <iostream>
#include "Circulo.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Forma *F1 = new Circulo (1, "Circulo 1", 2, 1, 3);
	Forma *F2 = new Circulo (2, "Circulo 2", 7, 1, 5);
	
	
	cout << "Forma: " << F1->getId() << " ==> ";
	Circulo *c = (Circulo *)F1;
	cout << "Area: " << c->getArea() <<endl;
	
	cout << "\n\n___________________________________________\n\n" << endl;
	cout << "Forma: " << F2->getId() << " ==> ";
	c = (Circulo *)F2;
	cout << "Area: " << c->getArea() <<endl;
	
	
	return 0;
}