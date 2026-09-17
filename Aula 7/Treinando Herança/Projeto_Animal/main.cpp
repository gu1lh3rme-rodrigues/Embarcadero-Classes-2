#include <iostream>
#include "Cachorro.h"
#include "Gato.h"

using namespace std;

int main(int argc, char** argv) {
	
	Cachorro *cachorro1 = new Cachorro("Cao 1", 1, "Au Au");
	Cachorro *cachorro2 = new Cachorro("Cao 2", 2, "Au Au");
	
	Gato *gato1 = new Gato("Gato A", 2, "Miau");
	Gato *gato2 = new Gato("Gato B", 4, "Miau");
	
	
	cout << "Reino Animal\n\n" << endl;
	cout << "Cachorros:\n" << endl;
	
	cout << "Cachorro 1:" << endl;
	cout << "Nome: " << cachorro1-> getNome() << endl;
	cout << "Idade: " << cachorro1-> getIdade() << endl;
	cout << "Som: " << cachorro1-> getSom() << endl;
	
	cout << "\n-------------------------------\n" << endl;
	
	cout << "Cachorro 2:" << endl;
	cout << "Nome: " << cachorro2-> getNome() << endl;
	cout << "Idade: " << cachorro2-> getIdade() << endl;
	cout << "Som: " << cachorro2-> getSom() << endl;
	
	cout << "\n-------------------------------\n\n" << endl;
	
	
	cout << "Gatos:\n" << endl;
	
	cout << "Gato 1:" << endl;
	cout << "Nome: " << gato1-> getNome() << endl;
	cout << "Idade: " << gato1-> getIdade() << endl;
	cout << "Som: " << gato1-> getSom() << endl;
	
	cout << "\n-------------------------------\n" << endl;
	
	cout << "Gato 2:" << endl;
	cout << "Nome: " << gato2-> getNome() << endl;
	cout << "Idade: " << gato2-> getIdade() << endl;
	cout << "Som: " << gato2-> getSom() << endl;
	
	return 0;
}