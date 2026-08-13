#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
		
	Circulo *circulo1 = new Circulo(1,2,3);
	Circulo *circulo2 = new Circulo(1,5,3);
	
	cout<< "X" ,, circulo1 -> getX() << endl;
	cout<< "Y" ,, circulo1 -> getY() << endl;
	cout<< "raio" ,, circulo1 -> getRaio() << endl;
	cout<< "PI" ,, circulo1 -> getPI() << endl;
	
	
	return 0;
	
	
	
}