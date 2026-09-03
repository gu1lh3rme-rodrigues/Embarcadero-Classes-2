#include <iostream>
#include "Circulo.cpp"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
		
	Circulo *circulo1 = new Circulo(1,2,1);
	Circulo *circulo2 = new Circulo(1,5,3);
	
	
	printf("Circulo 1\n");
	cout<< "X: " << circulo1 -> getX () << endl;
	cout<< "Y: " << circulo1 -> getY () << endl;
	cout<< "raio: " << circulo1 -> getRaio () << endl;
	cout<< "PI: " << circulo1 -> getPI () << endl;
	cout << "Comprimento: " << circulo1-> calculeComprimento() << endl;
	 
	 printf("------------------------------\n\n");
	printf("Circulo 2\n");
	cout<< "X: " << circulo2 -> getX () << endl;
	cout<< "Y: " << circulo2 -> getY () << endl;
	cout<< "raio: " << circulo2 -> getRaio () << endl;
	cout<< "PI: " << circulo2 -> getPI () << endl;
	cout << "Comprimento: " << circulo2-> calculeComprimento() << endl;
	
	
	return 0;
	
	
	
}