#include <iostream>
#include "Aluno.cpp"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Aluno::ultimaMatricula = 0;
int main(int argc, char** argv) {
	Aluno *a1 = new Aluno ("A");
	cout <<"Aluno: " << a1->getNome()<<endl;
	cout <<"Numero de Matricula: " << a1->getMatricula()<<endl;
	
	Aluno *a2 = new Aluno ("B");
	cout <<"Aluno: " << a2->getNome()<<endl;
	cout << "Numero de Matricula: " << a2->getMatricula()<<endl;
	
	Aluno *a3 = new Aluno ("C");
	cout <<"Aluno: " << a3->getNome()<<endl;
	cout << "Numero de Matricula: " << a3->getMatricula()<<endl;
	
	
	
	return 0;
}