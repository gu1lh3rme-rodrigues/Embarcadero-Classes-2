#include <iostream>
#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario(int _id, string _nome, double _salario){
	
	id = _id;
	nome = _nome;
	salario = _salario;
}

int Funcionario::getId(){
	return id;
}

string Funcionario::getNome(){
	return nome;
}

double Funcionario::getSalario(){
	return salario;
}

void Funcionario::exibeDados(){
	cout << "ID: " << id << endl;
	cout << "Nome: " << nome << endl;
	cout << "Salario: " << salario << endl;
}