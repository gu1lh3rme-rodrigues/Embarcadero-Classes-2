#include <iostream>
#include "Gestor.h"
#include "Empregado.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Gestor *gestor1 = new Gestor (1 ,"Gui", 2);
	Gestor *gestor2 = new Gestor (2 ,"David", 3);
	
	
	cout << "Gestor 1: " << endl;
	cout << "Nome: " << gestor1->getNome() << endl;
	cout << "Codigo do Departamento: " << gestor1->getCodDepartamento() << endl;
	cout << "Classe: " << gestor1->getClasseGestor() << endl;
	
	cout << "\n-------------------------------\n" << endl;
	
	cout << "Gestor 2: " << endl;
	cout << "Nome: " << gestor2->getNome() << endl;
	cout << "Codigo do Departamento: " << gestor2->getCodDepartamento() << endl;
	cout << "Classe: " << gestor2->getClasseGestor() << endl;
	
	
	return 0;
}