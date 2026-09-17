#include <iostream>
#include<string>
#include "Gestor.cpp"

using namespace std;


int main(int argc, char** argv) 
{
	Gestor *g1 = new Gestor ("Ana", 1, 01);
	Gestor *g2 = new Gestor ("Gui", 2, 02);
	
	cout << "---GESTORES---\n\n" << endl;
	cout << "Nome: " << g1->getnome()<< "\nCod.Departamento: " << g1->getcodigoDepartamento() << "\nCod. Gestor: " << g1->getcodGestor() << endl;
	cout << "\n\nNome: " << g2->getnome() << "\nCod. Departamento: " << g2->getcodigoDepartamento() << "\nCod. Gestor: " << g2->getcodGestor() << endl;
	
	return 0;
}