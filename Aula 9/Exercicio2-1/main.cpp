#include <iostream>
#include "Pessoa.h"
#include "Rica.h"
#include "Pobre.h"
#include "Miseravel.h"

using namespace std;

int main(int argc, char** argv) {
	
	Pessoa *P1 = new Rica("Joao", 30, 50000);
	Pessoa *P2 = new Pobre("Carlos", 25);
	Pessoa *P3 = new Miseravel("Pedro", 40);
	
	cout << "Pessoa Rica" << endl;
	cout << "Nome: " << P1->getNome() << endl;
	cout << "Idade: " << P1->getIdade() << endl;
	
	Rica *r = (Rica *)P1;
	r->fazCompras();
	
	cout << "\n___________________________________________\n" << endl;
	
	cout << "Pessoa Pobre" << endl;
	cout << "Nome: " << P2->getNome() << endl;
	cout << "Idade: " << P2->getIdade() << endl;
	
	Pobre *p = (Pobre *)P2;
	p->trabalha();
	
	cout << "\n___________________________________________\n" << endl;
	
	cout << "Pessoa Miseravel" << endl;
	cout << "Nome: " << P3->getNome() << endl;
	cout << "Idade: " << P3->getIdade() << endl;
	
	Miseravel *m = (Miseravel *)P3;
	m->mendiga();
	
	return 0;
}