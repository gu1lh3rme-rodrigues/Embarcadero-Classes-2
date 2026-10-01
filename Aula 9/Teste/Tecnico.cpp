#include <iostream>
#include "Tecnico.h"

using namespace std;

Tecnico::Tecnico(int _id, string _nome, double _salario, double _bonus)
	: Assistente(_id, _nome, _salario){
	
	bonus = _bonus;
}

double Tecnico::getBonus(){
	return bonus;
}

void Tecnico::exibeDados(){
	cout << "ID: " << id << endl;
	cout << "Nome: " << nome << endl;
	cout << "Salario: " << salario << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Bonus: " << bonus << endl;
	cout << "Cargo: Tecnico" << endl;
}