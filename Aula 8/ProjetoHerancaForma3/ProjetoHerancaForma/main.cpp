#include <iostream>
#include "Circulo.h"

using namespace std;

int main(int argc, char** argv) {
	Forma *f1 = new Circulo(1, "Circulo", 2, 1, 3);
	Forma *f2 = new Circulo(2, "Circulo", 7, 1, 5);

	cout << "Forma " << f1->getId() << " => ";
	Circulo *c = (Circulo *)f1;
	cout << "Area: " << c->getArea() << endl;

	cout << "Forma " << f2->getId() << " => ";
	c = (Circulo *)f2;
	cout << "Area: " << c->getArea() << endl;
	return 0;
}
