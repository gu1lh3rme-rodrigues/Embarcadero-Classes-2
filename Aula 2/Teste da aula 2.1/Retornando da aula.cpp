#include <iostream>
#include <string>
#include "Pessoa.cpp"

using namespace std;

int main(int argc, char** argv){
	//criação objeto pessoal
	Pessoa *pessoa1 = new Pessoa();
	//atribuição valores
	pesssoa1-> nome = "Juquinha";
	pesssoa1->idade = 28;
	pesssoa1-> altura = 1.67;
	//imprimindo valores
	cout << "Nome Pessoa: " <<pessoa1->nome << end1; 
	cout << "Idade Pessoa: " <<pessoa1->idade << end1;
	cout << "Altura Pessoa: " <<pessoa1->altura << end1;
	return 0;
}