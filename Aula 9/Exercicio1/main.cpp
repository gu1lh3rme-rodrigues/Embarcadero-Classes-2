#include <iostream>
#include "Gerente.h"
#include "Funcionario.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string Funcionario:: matricula = 0;
int main(int argc, char** argv) {
	
	Funcionario *F1 = new Funcionario (100, "Alpha", "0001");
	Funcionario *F2 = new Funcionario (150, "Betta", "0002");
	
	cout << "Funcionario: " << F1->getNome() << endl;
	cout << "Salario: " << F1->getSalario() << " reais" << endl;
	cout << "Matricula: " << F1->getMatricula() << "<=" <<endl;
	
	
	//cout << "Digite o seu número de Identificação: " << F1->setMatricula() << endl;

	
	
	
	
	
	
	
	
	return 0;
}