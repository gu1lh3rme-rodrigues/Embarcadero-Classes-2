#include <iostream>
#include "Imovel.h"
#include "Novo.h"
#include "Velho.h"

using namespace std;

int main(int argc, char** argv) {
	
	Novo *N1 = new Novo("Rua A, 100", 200000, 30000);
	
	cout << "Casa Nova" << endl;
	cout << "Endereco: " << N1->getEndereco() << endl;
	cout << "Preco: R$ " << N1->getPreco() << endl;
	cout << "Adicional: R$ " << N1->getAdicional() << endl;
	N1->imprimeAdicional();
	
	cout << "Preco final: R$ " 
		 << N1->getPreco() + N1->getAdicional() << endl;
	
	cout << "\n___________________________________________\n" << endl;
	
	Velho *V1 = new Velho("Rua B, 200", 200000, 40000);
	
	cout << "Antidades" << endl;
	cout << "Endereco: " << V1->getEndereco() << endl;
	cout << "Preco: R$ " << V1->getPreco() << endl;
	cout << "Desconto: R$ " << V1->getDesconto() << endl;
	V1->imprimeDesconto();
	
	cout << "Preco final: R$ " 
		 << V1->getPreco() - V1->getDesconto() << endl;
	
	return 0;
}