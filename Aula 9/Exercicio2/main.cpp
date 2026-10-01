#include <iostream>
#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"

using namespace std;

int main(int argc, char** argv) {
	
	Animal *A1 = new Cachorro("Cao");
	Animal *A2 = new Gato("Gato");
	
	A1->setRaca("Labrador");
	A2->setRaca("Laranja");
	
	cout << "Diagrama dos Animais\n\n" << endl;
	
	cout << "Cachorro:" << endl;
	cout << "Nome: " << A1->getNome() << endl;
	cout << "Raca: " << A1->getRaca() << endl;
	cout << "Acao: " << A1->caminha() << endl;
	
	Cachorro *c = (Cachorro *)A1;
	cout << "Som: " << c->late() << endl;
	
	cout << "\n___________________________________________\n" << endl;
	
	cout << "Gato: " << endl;
	cout << "Nome: " << A2->getNome() << endl;
	cout << "Raca: " << A2->getRaca() << endl;
	cout << "Acao: " << A2->caminha() << endl;
	
	Gato *g = (Gato *)A2;
	cout << "Som: " << g->mia() << endl;
	
	return 0;
}