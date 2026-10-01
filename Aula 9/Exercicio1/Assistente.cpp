#include <iostream>
#include "Assistente.h"

using namespace std;

int Assistente::ultimaMatricula = 0;

Assistente::Assistente(int _id, string _nome, double _salario)
	: Funcionario(_id, _nome, _salario){
	
	Assistente::ultimaMatricula++;
	matricula = Assistente::ultimaMatricula;
}

int Assistente::getMatricula(){
	return matricula;
}

void Assistente::exibeDados(){
	cout << "ID: " << id << endl;
	cout << "Nome: " << nome << endl;
	cout << "Salario: " << salario << endl;
	cout << "Matricula: " << matricula << endl;
}