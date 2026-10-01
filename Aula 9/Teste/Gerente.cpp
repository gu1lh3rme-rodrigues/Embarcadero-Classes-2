#include <iostream>
#include "Gerente.h"

using namespace std;

Gerente::Gerente(int _id, string _nome, double _salario)
	: Funcionario(_id, _nome, _salario){
}

void Gerente::exibeDados()
{
	cout << "ID: " << id << endl;
	cout << "Nome: " << nome << endl;
	cout << "Salario: " << salario << endl;
	cout << "Cargo: Gerente" << endl;
}