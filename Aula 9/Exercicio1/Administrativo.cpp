#include <iostream>
#include "Administrativo.h"

using namespace std;

Administrativo::Administrativo(int _id, string _nome, double _salario, string _turno, double _adicionalNoturno)
	: Assistente(_id, _nome, _salario){
	
	turno = _turno;
	adicionalNoturno = _adicionalNoturno;
}

string Administrativo::getTurno(){
	return turno;
}

double Administrativo::getAdicionalNoturno(){
	return adicionalNoturno;
}

void Administrativo::exibeDados(){
	cout << "ID: " << id << endl;
	cout << "Nome: " << nome << endl;
	cout << "Salario: " << salario << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Turno: " << turno << endl;
	cout << "Adicional noturno: " << adicionalNoturno << endl;
	cout << "Cargo: Administrativo" << endl;
}