#include <iostream>
#include "Aluguel.cpp"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	cout << "----------Pousada IFSP: Teste----------" << endl;
	
	
	cout << "Recibo de Informacoes" << endl;
	
	
	AluguelQuarto *A1 = new AluguelQuarto (11, 01, 2007, 13, 50, 12, 01, 2007, 13, 50);
	A1->exibeDados(); 
	
	return 0;
}