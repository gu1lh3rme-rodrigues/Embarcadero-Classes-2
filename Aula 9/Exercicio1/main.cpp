#include <iostream>
#include "Funcionario.h"
#include "Gerente.h"
#include "Assistente.h"
#include "Tecnico.h"
#include "Administrativo.h"

using namespace std;

int main(int argc, char** argv) {
	
	Funcionario *F1 = new Gerente(1, "Joao", 5000);
	Funcionario *F2 = new Tecnico(2, "Carlos", 3000, 500);
	Funcionario *F3 = new Administrativo(3, "Ana", 2800, "Noite", 400);
	
	
	cout << "		Empresa Cia		" << endl;
	cout << "Dados do Gerente:" << endl;
	F1->exibeDados();
	
	cout << "\n___________________________________________\n" << endl;
	
	cout << "Dados do Assistente Tecnico" << endl;
	F2->exibeDados();
	
	cout << "\n___________________________________________\n" << endl;
	
	cout << "Dados do Assistente Administrativo" << endl;
	F3->exibeDados();
	
	return 0;
}