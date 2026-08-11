#include <iostream>
#include "Pessoa.cpp"
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//criação objeto pessoal
	Pessoa *pessoa1 = new Pessoa();
	//atribuição valores
	pessoa1-> nome = "Gui";
	pessoa1-> idade = 19;
	pessoa1-> altura = 1.70;
	//imprimindo valores
	cout << "Nome Pessoa: " <<pessoa1->nome << endl; 
	cout << "Idade Pessoa: " <<pessoa1->idade << endl;
	cout << "Altura Pessoa: " <<pessoa1->altura << endl;
	return 0;
}