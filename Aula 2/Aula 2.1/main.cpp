#include <iostream>
#include "Pessoa.cpp"
#include <string>


// Encapsular todos os campos da classe pessoa


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//criação objeto pessoal
	Pessoa *pessoa1 = new Pessoa();
	Pessoa *pessoa2 = new Pessoa("David", 12, 1.5);
	
	
	//atribuição valores
	pessoa1-> setNome = ("Gui");
	pessoa1-> setIdade = (19);
	pessoa1-> setAltura = (1.70);
	
	/*pessoa2 -> setNome ("David");
	pessoa2 -> setIdade (12);
	pessoa2 -> setAltura (1.50);*/
	
	
	//imprimindo valores
	cout << "Nome Pessoa: " <<pessoa1-> getNome() << endl; 
	cout << "Idade Pessoa: " <<pessoa1-> getIdade() << endl;
	cout << "Altura Pessoa: " <<pessoa1-> getAltura() << endl;
	
	cout << "Nome Pessoa: " <<pessoa2-> getNome() << endl; 
	cout << "Idade Pessoa: " <<pessoa2-> getIdade() << endl;
	cout << "Altura Pessoa: " <<pessoa2-> getAltura() << endl;
	
	
	return 0;
}