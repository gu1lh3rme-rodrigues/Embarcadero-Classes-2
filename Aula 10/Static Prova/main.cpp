#include <iostream>
#include "Prova.cpp"
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int Prova::v1 = 1;

int main(int argc, char** argv) {
	Prova *a = new Prova();
	Prova *b = new Prova();
	a->v2 = 5;
	a->troca();
	
	cout << a->v1;//usou a informação da linha 7 e ocorre a transfomação da linha 12;
	cout << a->v2;//usou o valor da linha 12
	cout << b->v1;//usou o novo valor de v1, que foi definido na linha 12
	cout << b->v2;//usou o valor definido na Prova.cpp
	
	return 0;
}